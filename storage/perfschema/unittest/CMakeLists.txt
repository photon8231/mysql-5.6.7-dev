# Copyright (c) 2009, 2012, Oracle and/or its affiliates. All rights reserved.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; version 2 of the License.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02111-1307  USA

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/include
                    ${CMAKE_SOURCE_DIR}/include/mysql
                    ${CMAKE_SOURCE_DIR}/regex
                    ${CMAKE_SOURCE_DIR}/sql
                    ${SSL_INCLUDE_DIRS}
                    ${CMAKE_SOURCE_DIR}/unittest/mytap
                    ${CMAKE_SOURCE_DIR}/storage/perfschema)

ADD_DEFINITIONS(-DMYSQL_SERVER ${SSL_DEFINES})

MACRO (PFS_ADD_TEST name)
  ADD_EXECUTABLE(${name}-t ${name}-t.cc)
  TARGET_LINK_LIBRARIES(${name}-t mytap perfschema mysys)
  ADD_TEST(${name} ${name}-t)
ENDMACRO()

SET(tests
 pfs_instr_class
 pfs_instr_class-oom
 pfs_instr
 pfs_instr-oom
 pfs_account-oom
 pfs_host-oom
 pfs_user-oom
 pfs
)
FOREACH(testname ${tests})
  PFS_ADD_TEST(${testname})
ENDFOREACH()

IF(WIN32)
  SET(MYSQLD_EXTRA_SOURCES ${CMAKE_SOURCE_DIR}/sql/nt_servc.cc)
ENDIF()

# we need the server libs to test the blob parser
ADD_EXECUTABLE(pfs_connect_attr-t pfs_connect_attr-t.cc ${MYSQLD_EXTRA_SOURCES})
TARGET_LINK_LIBRARIES(pfs_connect_attr-t
  mytap perfschema sql binlog rpl master slave sql
  mysys mysys_ssl)
TARGET_LINK_LIBRARIES(pfs_connect_attr-t vio ${SSL_LIBRARIES})
ADD_TEST(pfs_connect_attr pfs_connect_attr-t)

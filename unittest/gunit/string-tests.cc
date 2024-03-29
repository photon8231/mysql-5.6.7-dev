/* Copyright (c) 2012, Oracle and/or its affiliates. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02111-1307  USA */

/*
  Common tests for client/sql_string and sql/sql_string.
  TODO: Why do we have two versions of String?
 */


TEST(StringTest, EmptyString)
{
  String s;
  const uint32 len= 0;
  EXPECT_EQ(len, s.length());
  EXPECT_EQ(len, s.alloced_length());
}


TEST(StringTest, ShrinkString)
{
  const uint32 len= 3;
  char foo[len]= {'a', 'b', 0};
  String foos(foo, len, &my_charset_bin);
  foos.shrink(1);
  EXPECT_EQ(len, foos.length());
  EXPECT_STREQ("ab", foo);
}


/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACCESSIBLE_SYM = 259,
     ACTION = 260,
     ADD = 261,
     ADDDATE_SYM = 262,
     AFTER_SYM = 263,
     AGAINST = 264,
     AGGREGATE_SYM = 265,
     ALGORITHM_SYM = 266,
     ALL = 267,
     ALTER = 268,
     ANALYSE_SYM = 269,
     ANALYZE_SYM = 270,
     AND_AND_SYM = 271,
     AND_SYM = 272,
     ANY_SYM = 273,
     AS = 274,
     ASC = 275,
     ASCII_SYM = 276,
     ASENSITIVE_SYM = 277,
     AT_SYM = 278,
     AUTHORS_SYM = 279,
     AUTOEXTEND_SIZE_SYM = 280,
     AUTO_INC = 281,
     AVG_ROW_LENGTH = 282,
     AVG_SYM = 283,
     BACKUP_SYM = 284,
     BEFORE_SYM = 285,
     BEGIN_SYM = 286,
     BETWEEN_SYM = 287,
     BIGINT = 288,
     BINARY = 289,
     BINLOG_SYM = 290,
     BIN_NUM = 291,
     BIT_AND = 292,
     BIT_OR = 293,
     BIT_SYM = 294,
     BIT_XOR = 295,
     BLOB_SYM = 296,
     BLOCK_SYM = 297,
     BOOLEAN_SYM = 298,
     BOOL_SYM = 299,
     BOTH = 300,
     BTREE_SYM = 301,
     BY = 302,
     BYTE_SYM = 303,
     CACHE_SYM = 304,
     CALL_SYM = 305,
     CASCADE = 306,
     CASCADED = 307,
     CASE_SYM = 308,
     CAST_SYM = 309,
     CATALOG_NAME_SYM = 310,
     CHAIN_SYM = 311,
     CHANGE = 312,
     CHANGED = 313,
     CHARSET = 314,
     CHAR_SYM = 315,
     CHECKSUM_SYM = 316,
     CHECK_SYM = 317,
     CIPHER_SYM = 318,
     CLASS_ORIGIN_SYM = 319,
     CLIENT_SYM = 320,
     CLOSE_SYM = 321,
     COALESCE = 322,
     CODE_SYM = 323,
     COLLATE_SYM = 324,
     COLLATION_SYM = 325,
     COLUMNS = 326,
     COLUMN_SYM = 327,
     COLUMN_FORMAT_SYM = 328,
     COLUMN_NAME_SYM = 329,
     COMMENT_SYM = 330,
     COMMITTED_SYM = 331,
     COMMIT_SYM = 332,
     COMPACT_SYM = 333,
     COMPLETION_SYM = 334,
     COMPRESSED_SYM = 335,
     CONCURRENT = 336,
     CONDITION_SYM = 337,
     CONNECTION_SYM = 338,
     CONSISTENT_SYM = 339,
     CONSTRAINT = 340,
     CONSTRAINT_CATALOG_SYM = 341,
     CONSTRAINT_NAME_SYM = 342,
     CONSTRAINT_SCHEMA_SYM = 343,
     CONTAINS_SYM = 344,
     CONTEXT_SYM = 345,
     CONTINUE_SYM = 346,
     CONTRIBUTORS_SYM = 347,
     CONVERT_SYM = 348,
     COUNT_SYM = 349,
     CPU_SYM = 350,
     CREATE = 351,
     CROSS = 352,
     CUBE_SYM = 353,
     CURDATE = 354,
     CURRENT_SYM = 355,
     CURRENT_USER = 356,
     CURSOR_SYM = 357,
     CURSOR_NAME_SYM = 358,
     CURTIME = 359,
     DATABASE = 360,
     DATABASES = 361,
     DATAFILE_SYM = 362,
     DATA_SYM = 363,
     DATETIME = 364,
     DATE_ADD_INTERVAL = 365,
     DATE_SUB_INTERVAL = 366,
     DATE_SYM = 367,
     DAY_HOUR_SYM = 368,
     DAY_MICROSECOND_SYM = 369,
     DAY_MINUTE_SYM = 370,
     DAY_SECOND_SYM = 371,
     DAY_SYM = 372,
     DBXP_SELECT_SYM = 373,
     DEALLOCATE_SYM = 374,
     DECIMAL_NUM = 375,
     DECIMAL_SYM = 376,
     DECLARE_SYM = 377,
     DEFAULT = 378,
     DEFAULT_AUTH_SYM = 379,
     DEFINER_SYM = 380,
     DELAYED_SYM = 381,
     DELAY_KEY_WRITE_SYM = 382,
     DELETE_SYM = 383,
     DESC = 384,
     DESCRIBE = 385,
     DES_KEY_FILE = 386,
     DETERMINISTIC_SYM = 387,
     DIAGNOSTICS_SYM = 388,
     DIRECTORY_SYM = 389,
     DISABLE_SYM = 390,
     DISCARD = 391,
     DISK_SYM = 392,
     DISTINCT = 393,
     DIV_SYM = 394,
     DOUBLE_SYM = 395,
     DO_SYM = 396,
     DROP = 397,
     DUAL_SYM = 398,
     DUMPFILE = 399,
     DUPLICATE_SYM = 400,
     DYNAMIC_SYM = 401,
     EACH_SYM = 402,
     ELSE = 403,
     ELSEIF_SYM = 404,
     ENABLE_SYM = 405,
     ENCLOSED = 406,
     END = 407,
     ENDS_SYM = 408,
     END_OF_INPUT = 409,
     ENGINES_SYM = 410,
     ENGINE_SYM = 411,
     ENUM = 412,
     EQ = 413,
     EQUAL_SYM = 414,
     ERROR_SYM = 415,
     ERRORS = 416,
     ESCAPED = 417,
     ESCAPE_SYM = 418,
     EVENTS_SYM = 419,
     EVENT_SYM = 420,
     EVERY_SYM = 421,
     EXCHANGE_SYM = 422,
     EXECUTE_SYM = 423,
     EXISTS = 424,
     EXIT_SYM = 425,
     EXPANSION_SYM = 426,
     EXPIRE_SYM = 427,
     EXPORT_SYM = 428,
     EXTENDED_SYM = 429,
     EXTENT_SIZE_SYM = 430,
     EXTRACT_SYM = 431,
     FALSE_SYM = 432,
     FAST_SYM = 433,
     FAULTS_SYM = 434,
     FETCH_SYM = 435,
     FILE_SYM = 436,
     FIRST_SYM = 437,
     FIXED_SYM = 438,
     FLOAT_NUM = 439,
     FLOAT_SYM = 440,
     FLUSH_SYM = 441,
     FORCE_SYM = 442,
     FOREIGN = 443,
     FOR_SYM = 444,
     FORMAT_SYM = 445,
     FOUND_SYM = 446,
     FROM = 447,
     FULL = 448,
     FULLTEXT_SYM = 449,
     FUNCTION_SYM = 450,
     GE = 451,
     GENERAL = 452,
     GEOMETRYCOLLECTION = 453,
     GEOMETRY_SYM = 454,
     GET_FORMAT = 455,
     GET_SYM = 456,
     GLOBAL_SYM = 457,
     GRANT = 458,
     GRANTS = 459,
     GROUP_SYM = 460,
     GROUP_CONCAT_SYM = 461,
     GT_SYM = 462,
     HANDLER_SYM = 463,
     HASH_SYM = 464,
     HAVING = 465,
     HELP_SYM = 466,
     HEX_NUM = 467,
     HIGH_PRIORITY = 468,
     HOST_SYM = 469,
     HOSTS_SYM = 470,
     HOUR_MICROSECOND_SYM = 471,
     HOUR_MINUTE_SYM = 472,
     HOUR_SECOND_SYM = 473,
     HOUR_SYM = 474,
     IDENT = 475,
     IDENTIFIED_SYM = 476,
     IDENT_QUOTED = 477,
     IF = 478,
     IGNORE_SYM = 479,
     IGNORE_SERVER_IDS_SYM = 480,
     IMPORT = 481,
     INDEXES = 482,
     INDEX_SYM = 483,
     INFILE = 484,
     INITIAL_SIZE_SYM = 485,
     INNER_SYM = 486,
     INOUT_SYM = 487,
     INSENSITIVE_SYM = 488,
     INSERT = 489,
     INSERT_METHOD = 490,
     INSTALL_SYM = 491,
     INTERVAL_SYM = 492,
     INTO = 493,
     INT_SYM = 494,
     INVOKER_SYM = 495,
     IN_SYM = 496,
     IO_AFTER_GTIDS = 497,
     IO_BEFORE_GTIDS = 498,
     IO_SYM = 499,
     IPC_SYM = 500,
     IS = 501,
     ISOLATION = 502,
     ISSUER_SYM = 503,
     ITERATE_SYM = 504,
     JOIN_SYM = 505,
     KEYS = 506,
     KEY_BLOCK_SIZE = 507,
     KEY_SYM = 508,
     KILL_SYM = 509,
     LANGUAGE_SYM = 510,
     LAST_SYM = 511,
     LE = 512,
     LEADING = 513,
     LEAVES = 514,
     LEAVE_SYM = 515,
     LEFT = 516,
     LESS_SYM = 517,
     LEVEL_SYM = 518,
     LEX_HOSTNAME = 519,
     LIKE = 520,
     LIMIT = 521,
     LINEAR_SYM = 522,
     LINES = 523,
     LINESTRING = 524,
     LIST_SYM = 525,
     LOAD = 526,
     LOCAL_SYM = 527,
     LOCATOR_SYM = 528,
     LOCKS_SYM = 529,
     LOCK_SYM = 530,
     LOGFILE_SYM = 531,
     LOGS_SYM = 532,
     LONGBLOB = 533,
     LONGTEXT = 534,
     LONG_NUM = 535,
     LONG_SYM = 536,
     LOOP_SYM = 537,
     LOW_PRIORITY = 538,
     LT = 539,
     MASTER_AUTO_POSITION_SYM = 540,
     MASTER_BIND_SYM = 541,
     MASTER_CONNECT_RETRY_SYM = 542,
     MASTER_DELAY_SYM = 543,
     MASTER_HOST_SYM = 544,
     MASTER_LOG_FILE_SYM = 545,
     MASTER_LOG_POS_SYM = 546,
     MASTER_PASSWORD_SYM = 547,
     MASTER_PORT_SYM = 548,
     MASTER_RETRY_COUNT_SYM = 549,
     MASTER_SERVER_ID_SYM = 550,
     MASTER_SSL_CAPATH_SYM = 551,
     MASTER_SSL_CA_SYM = 552,
     MASTER_SSL_CERT_SYM = 553,
     MASTER_SSL_CIPHER_SYM = 554,
     MASTER_SSL_CRL_SYM = 555,
     MASTER_SSL_CRLPATH_SYM = 556,
     MASTER_SSL_KEY_SYM = 557,
     MASTER_SSL_SYM = 558,
     MASTER_SSL_VERIFY_SERVER_CERT_SYM = 559,
     MASTER_SYM = 560,
     MASTER_USER_SYM = 561,
     MASTER_HEARTBEAT_PERIOD_SYM = 562,
     MATCH = 563,
     MAX_CONNECTIONS_PER_HOUR = 564,
     MAX_QUERIES_PER_HOUR = 565,
     MAX_ROWS = 566,
     MAX_SIZE_SYM = 567,
     MAX_SYM = 568,
     MAX_UPDATES_PER_HOUR = 569,
     MAX_USER_CONNECTIONS_SYM = 570,
     MAX_VALUE_SYM = 571,
     MEDIUMBLOB = 572,
     MEDIUMINT = 573,
     MEDIUMTEXT = 574,
     MEDIUM_SYM = 575,
     MEMORY_SYM = 576,
     MERGE_SYM = 577,
     MESSAGE_TEXT_SYM = 578,
     MICROSECOND_SYM = 579,
     MIGRATE_SYM = 580,
     MINUTE_MICROSECOND_SYM = 581,
     MINUTE_SECOND_SYM = 582,
     MINUTE_SYM = 583,
     MIN_ROWS = 584,
     MIN_SYM = 585,
     MODE_SYM = 586,
     MODIFIES_SYM = 587,
     MODIFY_SYM = 588,
     MOD_SYM = 589,
     MONTH_SYM = 590,
     MULTILINESTRING = 591,
     MULTIPOINT = 592,
     MULTIPOLYGON = 593,
     MUTEX_SYM = 594,
     MYSQL_ERRNO_SYM = 595,
     NAMES_SYM = 596,
     NAME_SYM = 597,
     NATIONAL_SYM = 598,
     NATURAL = 599,
     NCHAR_STRING = 600,
     NCHAR_SYM = 601,
     NDBCLUSTER_SYM = 602,
     NE = 603,
     NEG = 604,
     NEW_SYM = 605,
     NEXT_SYM = 606,
     NODEGROUP_SYM = 607,
     NONE_SYM = 608,
     NOT2_SYM = 609,
     NOT_SYM = 610,
     NOW_SYM = 611,
     NO_SYM = 612,
     NO_WAIT_SYM = 613,
     NO_WRITE_TO_BINLOG = 614,
     NULL_SYM = 615,
     NUM = 616,
     NUMBER_SYM = 617,
     NUMERIC_SYM = 618,
     NVARCHAR_SYM = 619,
     OFFSET_SYM = 620,
     OLD_PASSWORD = 621,
     ON = 622,
     ONE_SYM = 623,
     ONLY_SYM = 624,
     OPEN_SYM = 625,
     OPTIMIZE = 626,
     OPTIONS_SYM = 627,
     OPTION = 628,
     OPTIONALLY = 629,
     OR2_SYM = 630,
     ORDER_SYM = 631,
     OR_OR_SYM = 632,
     OR_SYM = 633,
     OUTER = 634,
     OUTFILE = 635,
     OUT_SYM = 636,
     OWNER_SYM = 637,
     PACK_KEYS_SYM = 638,
     PAGE_SYM = 639,
     PARAM_MARKER = 640,
     PARSER_SYM = 641,
     PARTIAL = 642,
     PARTITION_SYM = 643,
     PARTITIONS_SYM = 644,
     PARTITIONING_SYM = 645,
     PASSWORD = 646,
     PHASE_SYM = 647,
     PLUGIN_DIR_SYM = 648,
     PLUGIN_SYM = 649,
     PLUGINS_SYM = 650,
     POINT_SYM = 651,
     POLYGON = 652,
     PORT_SYM = 653,
     POSITION_SYM = 654,
     PRECISION = 655,
     PREPARE_SYM = 656,
     PRESERVE_SYM = 657,
     PREV_SYM = 658,
     PRIMARY_SYM = 659,
     PRIVILEGES = 660,
     PROCEDURE_SYM = 661,
     PROCESS = 662,
     PROCESSLIST_SYM = 663,
     PROFILE_SYM = 664,
     PROFILES_SYM = 665,
     PROXY_SYM = 666,
     PURGE = 667,
     QUARTER_SYM = 668,
     QUERY_SYM = 669,
     QUICK = 670,
     RANGE_SYM = 671,
     READS_SYM = 672,
     READ_ONLY_SYM = 673,
     READ_SYM = 674,
     READ_WRITE_SYM = 675,
     REAL = 676,
     REBUILD_SYM = 677,
     RECOVER_SYM = 678,
     REDOFILE_SYM = 679,
     REDO_BUFFER_SIZE_SYM = 680,
     REDUNDANT_SYM = 681,
     REFERENCES = 682,
     REGEXP = 683,
     RELAY = 684,
     RELAYLOG_SYM = 685,
     RELAY_LOG_FILE_SYM = 686,
     RELAY_LOG_POS_SYM = 687,
     RELAY_THREAD = 688,
     RELEASE_SYM = 689,
     RELOAD = 690,
     REMOVE_SYM = 691,
     RENAME = 692,
     REORGANIZE_SYM = 693,
     REPAIR = 694,
     REPEATABLE_SYM = 695,
     REPEAT_SYM = 696,
     REPLACE = 697,
     REPLICATION = 698,
     REQUIRE_SYM = 699,
     RESET_SYM = 700,
     RESIGNAL_SYM = 701,
     RESOURCES = 702,
     RESTORE_SYM = 703,
     RESTRICT = 704,
     RESUME_SYM = 705,
     RETURNED_SQLSTATE_SYM = 706,
     RETURNS_SYM = 707,
     RETURN_SYM = 708,
     REVERSE_SYM = 709,
     REVOKE = 710,
     RIGHT = 711,
     ROLLBACK_SYM = 712,
     ROLLUP_SYM = 713,
     ROUTINE_SYM = 714,
     ROWS_SYM = 715,
     ROW_FORMAT_SYM = 716,
     ROW_SYM = 717,
     ROW_COUNT_SYM = 718,
     RTREE_SYM = 719,
     SAVEPOINT_SYM = 720,
     SCHEDULE_SYM = 721,
     SCHEMA_NAME_SYM = 722,
     SECOND_MICROSECOND_SYM = 723,
     SECOND_SYM = 724,
     SECURITY_SYM = 725,
     SELECT_SYM = 726,
     SENSITIVE_SYM = 727,
     SEPARATOR_SYM = 728,
     SERIALIZABLE_SYM = 729,
     SERIAL_SYM = 730,
     SESSION_SYM = 731,
     SERVER_SYM = 732,
     SERVER_OPTIONS = 733,
     SET = 734,
     SET_VAR = 735,
     SHARE_SYM = 736,
     SHIFT_LEFT = 737,
     SHIFT_RIGHT = 738,
     SHOW = 739,
     SHUTDOWN = 740,
     SIGNAL_SYM = 741,
     SIGNED_SYM = 742,
     SIMPLE_SYM = 743,
     SLAVE = 744,
     SLOW = 745,
     SMALLINT = 746,
     SNAPSHOT_SYM = 747,
     SOCKET_SYM = 748,
     SONAME_SYM = 749,
     SOUNDS_SYM = 750,
     SOURCE_SYM = 751,
     SPATIAL_SYM = 752,
     SPECIFIC_SYM = 753,
     SQLEXCEPTION_SYM = 754,
     SQLSTATE_SYM = 755,
     SQLWARNING_SYM = 756,
     SQL_AFTER_GTIDS = 757,
     SQL_AFTER_MTS_GAPS = 758,
     SQL_BEFORE_GTIDS = 759,
     SQL_BIG_RESULT = 760,
     SQL_BUFFER_RESULT = 761,
     SQL_CACHE_SYM = 762,
     SQL_CALC_FOUND_ROWS = 763,
     SQL_NO_CACHE_SYM = 764,
     SQL_SMALL_RESULT = 765,
     SQL_SYM = 766,
     SQL_THREAD = 767,
     SSL_SYM = 768,
     STARTING = 769,
     STARTS_SYM = 770,
     START_SYM = 771,
     STATS_AUTO_RECALC_SYM = 772,
     STATS_PERSISTENT_SYM = 773,
     STATS_SAMPLE_PAGES_SYM = 774,
     STATUS_SYM = 775,
     STDDEV_SAMP_SYM = 776,
     STD_SYM = 777,
     STOP_SYM = 778,
     STORAGE_SYM = 779,
     STRAIGHT_JOIN = 780,
     STRING_SYM = 781,
     SUBCLASS_ORIGIN_SYM = 782,
     SUBDATE_SYM = 783,
     SUBJECT_SYM = 784,
     SUBPARTITIONS_SYM = 785,
     SUBPARTITION_SYM = 786,
     SUBSTRING = 787,
     SUM_SYM = 788,
     SUPER_SYM = 789,
     SUSPEND_SYM = 790,
     SWAPS_SYM = 791,
     SWITCHES_SYM = 792,
     SYSDATE = 793,
     TABLES = 794,
     TABLESPACE = 795,
     TABLE_REF_PRIORITY = 796,
     TABLE_SYM = 797,
     TABLE_CHECKSUM_SYM = 798,
     TABLE_NAME_SYM = 799,
     TEMPORARY = 800,
     TEMPTABLE_SYM = 801,
     TERMINATED = 802,
     TEXT_STRING = 803,
     TEXT_SYM = 804,
     THAN_SYM = 805,
     THEN_SYM = 806,
     TIMESTAMP = 807,
     TIMESTAMP_ADD = 808,
     TIMESTAMP_DIFF = 809,
     TIME_SYM = 810,
     TINYBLOB = 811,
     TINYINT = 812,
     TINYTEXT = 813,
     TO_SYM = 814,
     TRAILING = 815,
     TRANSACTION_SYM = 816,
     TRIGGERS_SYM = 817,
     TRIGGER_SYM = 818,
     TRIM = 819,
     TRUE_SYM = 820,
     TRUNCATE_SYM = 821,
     TYPES_SYM = 822,
     TYPE_SYM = 823,
     UDF_RETURNS_SYM = 824,
     ULONGLONG_NUM = 825,
     UNCOMMITTED_SYM = 826,
     UNDEFINED_SYM = 827,
     UNDERSCORE_CHARSET = 828,
     UNDOFILE_SYM = 829,
     UNDO_BUFFER_SIZE_SYM = 830,
     UNDO_SYM = 831,
     UNICODE_SYM = 832,
     UNINSTALL_SYM = 833,
     UNION_SYM = 834,
     UNIQUE_SYM = 835,
     UNKNOWN_SYM = 836,
     UNLOCK_SYM = 837,
     UNSIGNED = 838,
     UNTIL_SYM = 839,
     UPDATE_SYM = 840,
     UPGRADE_SYM = 841,
     USAGE = 842,
     USER = 843,
     USE_FRM = 844,
     USE_SYM = 845,
     USING = 846,
     UTC_DATE_SYM = 847,
     UTC_TIMESTAMP_SYM = 848,
     UTC_TIME_SYM = 849,
     VALUES = 850,
     VALUE_SYM = 851,
     VARBINARY = 852,
     VARCHAR = 853,
     VARIABLES = 854,
     VARIANCE_SYM = 855,
     VARYING = 856,
     VAR_SAMP_SYM = 857,
     VIEW_SYM = 858,
     WAIT_SYM = 859,
     WARNINGS = 860,
     WEEK_SYM = 861,
     WEIGHT_STRING_SYM = 862,
     WHEN_SYM = 863,
     WHERE = 864,
     WHILE_SYM = 865,
     WITH = 866,
     WITH_CUBE_SYM = 867,
     WITH_ROLLUP_SYM = 868,
     WORK_SYM = 869,
     WRAPPER_SYM = 870,
     WRITE_SYM = 871,
     X509_SYM = 872,
     XA_SYM = 873,
     XML_SYM = 874,
     XOR = 875,
     YEAR_MONTH_SYM = 876,
     YEAR_SYM = 877,
     ZEROFILL = 878
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACCESSIBLE_SYM 259
#define ACTION 260
#define ADD 261
#define ADDDATE_SYM 262
#define AFTER_SYM 263
#define AGAINST 264
#define AGGREGATE_SYM 265
#define ALGORITHM_SYM 266
#define ALL 267
#define ALTER 268
#define ANALYSE_SYM 269
#define ANALYZE_SYM 270
#define AND_AND_SYM 271
#define AND_SYM 272
#define ANY_SYM 273
#define AS 274
#define ASC 275
#define ASCII_SYM 276
#define ASENSITIVE_SYM 277
#define AT_SYM 278
#define AUTHORS_SYM 279
#define AUTOEXTEND_SIZE_SYM 280
#define AUTO_INC 281
#define AVG_ROW_LENGTH 282
#define AVG_SYM 283
#define BACKUP_SYM 284
#define BEFORE_SYM 285
#define BEGIN_SYM 286
#define BETWEEN_SYM 287
#define BIGINT 288
#define BINARY 289
#define BINLOG_SYM 290
#define BIN_NUM 291
#define BIT_AND 292
#define BIT_OR 293
#define BIT_SYM 294
#define BIT_XOR 295
#define BLOB_SYM 296
#define BLOCK_SYM 297
#define BOOLEAN_SYM 298
#define BOOL_SYM 299
#define BOTH 300
#define BTREE_SYM 301
#define BY 302
#define BYTE_SYM 303
#define CACHE_SYM 304
#define CALL_SYM 305
#define CASCADE 306
#define CASCADED 307
#define CASE_SYM 308
#define CAST_SYM 309
#define CATALOG_NAME_SYM 310
#define CHAIN_SYM 311
#define CHANGE 312
#define CHANGED 313
#define CHARSET 314
#define CHAR_SYM 315
#define CHECKSUM_SYM 316
#define CHECK_SYM 317
#define CIPHER_SYM 318
#define CLASS_ORIGIN_SYM 319
#define CLIENT_SYM 320
#define CLOSE_SYM 321
#define COALESCE 322
#define CODE_SYM 323
#define COLLATE_SYM 324
#define COLLATION_SYM 325
#define COLUMNS 326
#define COLUMN_SYM 327
#define COLUMN_FORMAT_SYM 328
#define COLUMN_NAME_SYM 329
#define COMMENT_SYM 330
#define COMMITTED_SYM 331
#define COMMIT_SYM 332
#define COMPACT_SYM 333
#define COMPLETION_SYM 334
#define COMPRESSED_SYM 335
#define CONCURRENT 336
#define CONDITION_SYM 337
#define CONNECTION_SYM 338
#define CONSISTENT_SYM 339
#define CONSTRAINT 340
#define CONSTRAINT_CATALOG_SYM 341
#define CONSTRAINT_NAME_SYM 342
#define CONSTRAINT_SCHEMA_SYM 343
#define CONTAINS_SYM 344
#define CONTEXT_SYM 345
#define CONTINUE_SYM 346
#define CONTRIBUTORS_SYM 347
#define CONVERT_SYM 348
#define COUNT_SYM 349
#define CPU_SYM 350
#define CREATE 351
#define CROSS 352
#define CUBE_SYM 353
#define CURDATE 354
#define CURRENT_SYM 355
#define CURRENT_USER 356
#define CURSOR_SYM 357
#define CURSOR_NAME_SYM 358
#define CURTIME 359
#define DATABASE 360
#define DATABASES 361
#define DATAFILE_SYM 362
#define DATA_SYM 363
#define DATETIME 364
#define DATE_ADD_INTERVAL 365
#define DATE_SUB_INTERVAL 366
#define DATE_SYM 367
#define DAY_HOUR_SYM 368
#define DAY_MICROSECOND_SYM 369
#define DAY_MINUTE_SYM 370
#define DAY_SECOND_SYM 371
#define DAY_SYM 372
#define DBXP_SELECT_SYM 373
#define DEALLOCATE_SYM 374
#define DECIMAL_NUM 375
#define DECIMAL_SYM 376
#define DECLARE_SYM 377
#define DEFAULT 378
#define DEFAULT_AUTH_SYM 379
#define DEFINER_SYM 380
#define DELAYED_SYM 381
#define DELAY_KEY_WRITE_SYM 382
#define DELETE_SYM 383
#define DESC 384
#define DESCRIBE 385
#define DES_KEY_FILE 386
#define DETERMINISTIC_SYM 387
#define DIAGNOSTICS_SYM 388
#define DIRECTORY_SYM 389
#define DISABLE_SYM 390
#define DISCARD 391
#define DISK_SYM 392
#define DISTINCT 393
#define DIV_SYM 394
#define DOUBLE_SYM 395
#define DO_SYM 396
#define DROP 397
#define DUAL_SYM 398
#define DUMPFILE 399
#define DUPLICATE_SYM 400
#define DYNAMIC_SYM 401
#define EACH_SYM 402
#define ELSE 403
#define ELSEIF_SYM 404
#define ENABLE_SYM 405
#define ENCLOSED 406
#define END 407
#define ENDS_SYM 408
#define END_OF_INPUT 409
#define ENGINES_SYM 410
#define ENGINE_SYM 411
#define ENUM 412
#define EQ 413
#define EQUAL_SYM 414
#define ERROR_SYM 415
#define ERRORS 416
#define ESCAPED 417
#define ESCAPE_SYM 418
#define EVENTS_SYM 419
#define EVENT_SYM 420
#define EVERY_SYM 421
#define EXCHANGE_SYM 422
#define EXECUTE_SYM 423
#define EXISTS 424
#define EXIT_SYM 425
#define EXPANSION_SYM 426
#define EXPIRE_SYM 427
#define EXPORT_SYM 428
#define EXTENDED_SYM 429
#define EXTENT_SIZE_SYM 430
#define EXTRACT_SYM 431
#define FALSE_SYM 432
#define FAST_SYM 433
#define FAULTS_SYM 434
#define FETCH_SYM 435
#define FILE_SYM 436
#define FIRST_SYM 437
#define FIXED_SYM 438
#define FLOAT_NUM 439
#define FLOAT_SYM 440
#define FLUSH_SYM 441
#define FORCE_SYM 442
#define FOREIGN 443
#define FOR_SYM 444
#define FORMAT_SYM 445
#define FOUND_SYM 446
#define FROM 447
#define FULL 448
#define FULLTEXT_SYM 449
#define FUNCTION_SYM 450
#define GE 451
#define GENERAL 452
#define GEOMETRYCOLLECTION 453
#define GEOMETRY_SYM 454
#define GET_FORMAT 455
#define GET_SYM 456
#define GLOBAL_SYM 457
#define GRANT 458
#define GRANTS 459
#define GROUP_SYM 460
#define GROUP_CONCAT_SYM 461
#define GT_SYM 462
#define HANDLER_SYM 463
#define HASH_SYM 464
#define HAVING 465
#define HELP_SYM 466
#define HEX_NUM 467
#define HIGH_PRIORITY 468
#define HOST_SYM 469
#define HOSTS_SYM 470
#define HOUR_MICROSECOND_SYM 471
#define HOUR_MINUTE_SYM 472
#define HOUR_SECOND_SYM 473
#define HOUR_SYM 474
#define IDENT 475
#define IDENTIFIED_SYM 476
#define IDENT_QUOTED 477
#define IF 478
#define IGNORE_SYM 479
#define IGNORE_SERVER_IDS_SYM 480
#define IMPORT 481
#define INDEXES 482
#define INDEX_SYM 483
#define INFILE 484
#define INITIAL_SIZE_SYM 485
#define INNER_SYM 486
#define INOUT_SYM 487
#define INSENSITIVE_SYM 488
#define INSERT 489
#define INSERT_METHOD 490
#define INSTALL_SYM 491
#define INTERVAL_SYM 492
#define INTO 493
#define INT_SYM 494
#define INVOKER_SYM 495
#define IN_SYM 496
#define IO_AFTER_GTIDS 497
#define IO_BEFORE_GTIDS 498
#define IO_SYM 499
#define IPC_SYM 500
#define IS 501
#define ISOLATION 502
#define ISSUER_SYM 503
#define ITERATE_SYM 504
#define JOIN_SYM 505
#define KEYS 506
#define KEY_BLOCK_SIZE 507
#define KEY_SYM 508
#define KILL_SYM 509
#define LANGUAGE_SYM 510
#define LAST_SYM 511
#define LE 512
#define LEADING 513
#define LEAVES 514
#define LEAVE_SYM 515
#define LEFT 516
#define LESS_SYM 517
#define LEVEL_SYM 518
#define LEX_HOSTNAME 519
#define LIKE 520
#define LIMIT 521
#define LINEAR_SYM 522
#define LINES 523
#define LINESTRING 524
#define LIST_SYM 525
#define LOAD 526
#define LOCAL_SYM 527
#define LOCATOR_SYM 528
#define LOCKS_SYM 529
#define LOCK_SYM 530
#define LOGFILE_SYM 531
#define LOGS_SYM 532
#define LONGBLOB 533
#define LONGTEXT 534
#define LONG_NUM 535
#define LONG_SYM 536
#define LOOP_SYM 537
#define LOW_PRIORITY 538
#define LT 539
#define MASTER_AUTO_POSITION_SYM 540
#define MASTER_BIND_SYM 541
#define MASTER_CONNECT_RETRY_SYM 542
#define MASTER_DELAY_SYM 543
#define MASTER_HOST_SYM 544
#define MASTER_LOG_FILE_SYM 545
#define MASTER_LOG_POS_SYM 546
#define MASTER_PASSWORD_SYM 547
#define MASTER_PORT_SYM 548
#define MASTER_RETRY_COUNT_SYM 549
#define MASTER_SERVER_ID_SYM 550
#define MASTER_SSL_CAPATH_SYM 551
#define MASTER_SSL_CA_SYM 552
#define MASTER_SSL_CERT_SYM 553
#define MASTER_SSL_CIPHER_SYM 554
#define MASTER_SSL_CRL_SYM 555
#define MASTER_SSL_CRLPATH_SYM 556
#define MASTER_SSL_KEY_SYM 557
#define MASTER_SSL_SYM 558
#define MASTER_SSL_VERIFY_SERVER_CERT_SYM 559
#define MASTER_SYM 560
#define MASTER_USER_SYM 561
#define MASTER_HEARTBEAT_PERIOD_SYM 562
#define MATCH 563
#define MAX_CONNECTIONS_PER_HOUR 564
#define MAX_QUERIES_PER_HOUR 565
#define MAX_ROWS 566
#define MAX_SIZE_SYM 567
#define MAX_SYM 568
#define MAX_UPDATES_PER_HOUR 569
#define MAX_USER_CONNECTIONS_SYM 570
#define MAX_VALUE_SYM 571
#define MEDIUMBLOB 572
#define MEDIUMINT 573
#define MEDIUMTEXT 574
#define MEDIUM_SYM 575
#define MEMORY_SYM 576
#define MERGE_SYM 577
#define MESSAGE_TEXT_SYM 578
#define MICROSECOND_SYM 579
#define MIGRATE_SYM 580
#define MINUTE_MICROSECOND_SYM 581
#define MINUTE_SECOND_SYM 582
#define MINUTE_SYM 583
#define MIN_ROWS 584
#define MIN_SYM 585
#define MODE_SYM 586
#define MODIFIES_SYM 587
#define MODIFY_SYM 588
#define MOD_SYM 589
#define MONTH_SYM 590
#define MULTILINESTRING 591
#define MULTIPOINT 592
#define MULTIPOLYGON 593
#define MUTEX_SYM 594
#define MYSQL_ERRNO_SYM 595
#define NAMES_SYM 596
#define NAME_SYM 597
#define NATIONAL_SYM 598
#define NATURAL 599
#define NCHAR_STRING 600
#define NCHAR_SYM 601
#define NDBCLUSTER_SYM 602
#define NE 603
#define NEG 604
#define NEW_SYM 605
#define NEXT_SYM 606
#define NODEGROUP_SYM 607
#define NONE_SYM 608
#define NOT2_SYM 609
#define NOT_SYM 610
#define NOW_SYM 611
#define NO_SYM 612
#define NO_WAIT_SYM 613
#define NO_WRITE_TO_BINLOG 614
#define NULL_SYM 615
#define NUM 616
#define NUMBER_SYM 617
#define NUMERIC_SYM 618
#define NVARCHAR_SYM 619
#define OFFSET_SYM 620
#define OLD_PASSWORD 621
#define ON 622
#define ONE_SYM 623
#define ONLY_SYM 624
#define OPEN_SYM 625
#define OPTIMIZE 626
#define OPTIONS_SYM 627
#define OPTION 628
#define OPTIONALLY 629
#define OR2_SYM 630
#define ORDER_SYM 631
#define OR_OR_SYM 632
#define OR_SYM 633
#define OUTER 634
#define OUTFILE 635
#define OUT_SYM 636
#define OWNER_SYM 637
#define PACK_KEYS_SYM 638
#define PAGE_SYM 639
#define PARAM_MARKER 640
#define PARSER_SYM 641
#define PARTIAL 642
#define PARTITION_SYM 643
#define PARTITIONS_SYM 644
#define PARTITIONING_SYM 645
#define PASSWORD 646
#define PHASE_SYM 647
#define PLUGIN_DIR_SYM 648
#define PLUGIN_SYM 649
#define PLUGINS_SYM 650
#define POINT_SYM 651
#define POLYGON 652
#define PORT_SYM 653
#define POSITION_SYM 654
#define PRECISION 655
#define PREPARE_SYM 656
#define PRESERVE_SYM 657
#define PREV_SYM 658
#define PRIMARY_SYM 659
#define PRIVILEGES 660
#define PROCEDURE_SYM 661
#define PROCESS 662
#define PROCESSLIST_SYM 663
#define PROFILE_SYM 664
#define PROFILES_SYM 665
#define PROXY_SYM 666
#define PURGE 667
#define QUARTER_SYM 668
#define QUERY_SYM 669
#define QUICK 670
#define RANGE_SYM 671
#define READS_SYM 672
#define READ_ONLY_SYM 673
#define READ_SYM 674
#define READ_WRITE_SYM 675
#define REAL 676
#define REBUILD_SYM 677
#define RECOVER_SYM 678
#define REDOFILE_SYM 679
#define REDO_BUFFER_SIZE_SYM 680
#define REDUNDANT_SYM 681
#define REFERENCES 682
#define REGEXP 683
#define RELAY 684
#define RELAYLOG_SYM 685
#define RELAY_LOG_FILE_SYM 686
#define RELAY_LOG_POS_SYM 687
#define RELAY_THREAD 688
#define RELEASE_SYM 689
#define RELOAD 690
#define REMOVE_SYM 691
#define RENAME 692
#define REORGANIZE_SYM 693
#define REPAIR 694
#define REPEATABLE_SYM 695
#define REPEAT_SYM 696
#define REPLACE 697
#define REPLICATION 698
#define REQUIRE_SYM 699
#define RESET_SYM 700
#define RESIGNAL_SYM 701
#define RESOURCES 702
#define RESTORE_SYM 703
#define RESTRICT 704
#define RESUME_SYM 705
#define RETURNED_SQLSTATE_SYM 706
#define RETURNS_SYM 707
#define RETURN_SYM 708
#define REVERSE_SYM 709
#define REVOKE 710
#define RIGHT 711
#define ROLLBACK_SYM 712
#define ROLLUP_SYM 713
#define ROUTINE_SYM 714
#define ROWS_SYM 715
#define ROW_FORMAT_SYM 716
#define ROW_SYM 717
#define ROW_COUNT_SYM 718
#define RTREE_SYM 719
#define SAVEPOINT_SYM 720
#define SCHEDULE_SYM 721
#define SCHEMA_NAME_SYM 722
#define SECOND_MICROSECOND_SYM 723
#define SECOND_SYM 724
#define SECURITY_SYM 725
#define SELECT_SYM 726
#define SENSITIVE_SYM 727
#define SEPARATOR_SYM 728
#define SERIALIZABLE_SYM 729
#define SERIAL_SYM 730
#define SESSION_SYM 731
#define SERVER_SYM 732
#define SERVER_OPTIONS 733
#define SET 734
#define SET_VAR 735
#define SHARE_SYM 736
#define SHIFT_LEFT 737
#define SHIFT_RIGHT 738
#define SHOW 739
#define SHUTDOWN 740
#define SIGNAL_SYM 741
#define SIGNED_SYM 742
#define SIMPLE_SYM 743
#define SLAVE 744
#define SLOW 745
#define SMALLINT 746
#define SNAPSHOT_SYM 747
#define SOCKET_SYM 748
#define SONAME_SYM 749
#define SOUNDS_SYM 750
#define SOURCE_SYM 751
#define SPATIAL_SYM 752
#define SPECIFIC_SYM 753
#define SQLEXCEPTION_SYM 754
#define SQLSTATE_SYM 755
#define SQLWARNING_SYM 756
#define SQL_AFTER_GTIDS 757
#define SQL_AFTER_MTS_GAPS 758
#define SQL_BEFORE_GTIDS 759
#define SQL_BIG_RESULT 760
#define SQL_BUFFER_RESULT 761
#define SQL_CACHE_SYM 762
#define SQL_CALC_FOUND_ROWS 763
#define SQL_NO_CACHE_SYM 764
#define SQL_SMALL_RESULT 765
#define SQL_SYM 766
#define SQL_THREAD 767
#define SSL_SYM 768
#define STARTING 769
#define STARTS_SYM 770
#define START_SYM 771
#define STATS_AUTO_RECALC_SYM 772
#define STATS_PERSISTENT_SYM 773
#define STATS_SAMPLE_PAGES_SYM 774
#define STATUS_SYM 775
#define STDDEV_SAMP_SYM 776
#define STD_SYM 777
#define STOP_SYM 778
#define STORAGE_SYM 779
#define STRAIGHT_JOIN 780
#define STRING_SYM 781
#define SUBCLASS_ORIGIN_SYM 782
#define SUBDATE_SYM 783
#define SUBJECT_SYM 784
#define SUBPARTITIONS_SYM 785
#define SUBPARTITION_SYM 786
#define SUBSTRING 787
#define SUM_SYM 788
#define SUPER_SYM 789
#define SUSPEND_SYM 790
#define SWAPS_SYM 791
#define SWITCHES_SYM 792
#define SYSDATE 793
#define TABLES 794
#define TABLESPACE 795
#define TABLE_REF_PRIORITY 796
#define TABLE_SYM 797
#define TABLE_CHECKSUM_SYM 798
#define TABLE_NAME_SYM 799
#define TEMPORARY 800
#define TEMPTABLE_SYM 801
#define TERMINATED 802
#define TEXT_STRING 803
#define TEXT_SYM 804
#define THAN_SYM 805
#define THEN_SYM 806
#define TIMESTAMP 807
#define TIMESTAMP_ADD 808
#define TIMESTAMP_DIFF 809
#define TIME_SYM 810
#define TINYBLOB 811
#define TINYINT 812
#define TINYTEXT 813
#define TO_SYM 814
#define TRAILING 815
#define TRANSACTION_SYM 816
#define TRIGGERS_SYM 817
#define TRIGGER_SYM 818
#define TRIM 819
#define TRUE_SYM 820
#define TRUNCATE_SYM 821
#define TYPES_SYM 822
#define TYPE_SYM 823
#define UDF_RETURNS_SYM 824
#define ULONGLONG_NUM 825
#define UNCOMMITTED_SYM 826
#define UNDEFINED_SYM 827
#define UNDERSCORE_CHARSET 828
#define UNDOFILE_SYM 829
#define UNDO_BUFFER_SIZE_SYM 830
#define UNDO_SYM 831
#define UNICODE_SYM 832
#define UNINSTALL_SYM 833
#define UNION_SYM 834
#define UNIQUE_SYM 835
#define UNKNOWN_SYM 836
#define UNLOCK_SYM 837
#define UNSIGNED 838
#define UNTIL_SYM 839
#define UPDATE_SYM 840
#define UPGRADE_SYM 841
#define USAGE 842
#define USER 843
#define USE_FRM 844
#define USE_SYM 845
#define USING 846
#define UTC_DATE_SYM 847
#define UTC_TIMESTAMP_SYM 848
#define UTC_TIME_SYM 849
#define VALUES 850
#define VALUE_SYM 851
#define VARBINARY 852
#define VARCHAR 853
#define VARIABLES 854
#define VARIANCE_SYM 855
#define VARYING 856
#define VAR_SAMP_SYM 857
#define VIEW_SYM 858
#define WAIT_SYM 859
#define WARNINGS 860
#define WEEK_SYM 861
#define WEIGHT_STRING_SYM 862
#define WHEN_SYM 863
#define WHERE 864
#define WHILE_SYM 865
#define WITH 866
#define WITH_CUBE_SYM 867
#define WITH_ROLLUP_SYM 868
#define WORK_SYM 869
#define WRAPPER_SYM 870
#define WRITE_SYM 871
#define X509_SYM 872
#define XA_SYM 873
#define XML_SYM 874
#define XOR 875
#define YEAR_MONTH_SYM 876
#define YEAR_SYM 877
#define ZEROFILL 878




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 929 "D:/mysqlDebugSpace/mysql-5.6.7-dev/sql/sql_yacc.yy"

  int  num;
  ulong ulong_num;
  ulonglong ulonglong_number;
  longlong longlong_number;
  LEX_STRING lex_str;
  LEX_STRING *lex_str_ptr;
  LEX_SYMBOL symbol;
  Table_ident *table;
  char *simple_string;
  Item *item;
  Item_num *item_num;
  List<Item> *item_list;
  List<String> *string_list;
  String *string;
  Key_part_spec *key_part;
  TABLE_LIST *table_list;
  udf_func *udf;
  LEX_USER *lex_user;
  struct sys_var_with_base variable;
  enum enum_var_type var_type;
  Key::Keytype key_type;
  enum ha_key_alg key_alg;
  handlerton *db_type;
  enum row_type row_type;
  enum ha_rkey_function ha_rkey_mode;
  enum enum_ha_read_modes ha_read_mode;
  enum enum_tx_isolation tx_isolation;
  enum Cast_target cast_type;
  enum Item_udftype udf_type;
  const CHARSET_INFO *charset;
  thr_lock_type lock_type;
  interval_type interval, interval_time_st;
  timestamp_type date_time_type;
  st_select_lex *select_lex;
  chooser_compare_func_creator boolfunc2creator;
  class sp_condition_value *spcondvalue;
  struct { int vars, conds, hndlrs, curs; } spblock;
  sp_name *spname;
  LEX *lex;
  sp_head *sphead;
  struct p_elem_val *p_elem_value;
  enum index_hint_type index_hint;
  enum enum_filetype filetype;
  enum Foreign_key::fk_option m_fk_option;
  enum enum_yes_no_unknown m_yes_no_unk;
  Diag_condition_item_name diag_condition_item_name;
  Diagnostics_information::Which_area diag_area;
  Diagnostics_information *diag_info;
  Statement_information_item *stmt_info_item;
  Statement_information_item::Name stmt_info_item_name;
  List<Statement_information_item> *stmt_info_list;
  Condition_information_item *cond_info_item;
  Condition_information_item::Name cond_info_item_name;
  List<Condition_information_item> *cond_info_list;



/* Line 1676 of yacc.c  */
#line 1357 "D:/mysqlDebugSpace/mysql-5.6.7-dev/cbuild/sql/sql_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif





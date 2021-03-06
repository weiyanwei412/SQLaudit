/* A Bison parser, made by GNU Bison 2.5.1.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
     AUTOEXTEND_SIZE_SYM = 279,
     AUTO_INC = 280,
     AVG_ROW_LENGTH = 281,
     AVG_SYM = 282,
     BACKUP_SYM = 283,
     BEFORE_SYM = 284,
     BEGIN_SYM = 285,
     BETWEEN_SYM = 286,
     BIGINT = 287,
     BINARY = 288,
     BINLOG_SYM = 289,
     BIN_NUM = 290,
     BIT_AND = 291,
     BIT_OR = 292,
     BIT_SYM = 293,
     BIT_XOR = 294,
     BLOB_SYM = 295,
     BLOCK_SYM = 296,
     BOOLEAN_SYM = 297,
     BOOL_SYM = 298,
     BOTH = 299,
     BTREE_SYM = 300,
     BY = 301,
     BYTE_SYM = 302,
     CACHE_SYM = 303,
     CALL_SYM = 304,
     CASCADE = 305,
     CASCADED = 306,
     CASE_SYM = 307,
     CAST_SYM = 308,
     CATALOG_NAME_SYM = 309,
     CHAIN_SYM = 310,
     CHANGE = 311,
     CHANGED = 312,
     CHARSET = 313,
     CHAR_SYM = 314,
     CHECKSUM_SYM = 315,
     CHECK_SYM = 316,
     CIPHER_SYM = 317,
     CLASS_ORIGIN_SYM = 318,
     CLIENT_SYM = 319,
     CLOSE_SYM = 320,
     COALESCE = 321,
     CODE_SYM = 322,
     COLLATE_SYM = 323,
     COLLATION_SYM = 324,
     COLUMNS = 325,
     COLUMN_SYM = 326,
     COLUMN_FORMAT_SYM = 327,
     COLUMN_NAME_SYM = 328,
     COMMENT_SYM = 329,
     COMMITTED_SYM = 330,
     COMMIT_SYM = 331,
     COMPACT_SYM = 332,
     COMPLETION_SYM = 333,
     COMPRESSED_SYM = 334,
     CONCURRENT = 335,
     CONDITION_SYM = 336,
     CONNECTION_SYM = 337,
     CONSISTENT_SYM = 338,
     CONSTRAINT = 339,
     CONSTRAINT_CATALOG_SYM = 340,
     CONSTRAINT_NAME_SYM = 341,
     CONSTRAINT_SCHEMA_SYM = 342,
     CONTAINS_SYM = 343,
     CONTEXT_SYM = 344,
     CONTINUE_SYM = 345,
     CONVERT_SYM = 346,
     COUNT_SYM = 347,
     CPU_SYM = 348,
     CREATE = 349,
     CROSS = 350,
     CUBE_SYM = 351,
     CURDATE = 352,
     CURRENT_SYM = 353,
     CURRENT_USER = 354,
     CURSOR_SYM = 355,
     CURSOR_NAME_SYM = 356,
     CURTIME = 357,
     DATABASE = 358,
     DATABASES = 359,
     DATAFILE_SYM = 360,
     DATA_SYM = 361,
     DATETIME = 362,
     DATE_ADD_INTERVAL = 363,
     DATE_SUB_INTERVAL = 364,
     DATE_SYM = 365,
     DAY_HOUR_SYM = 366,
     DAY_MICROSECOND_SYM = 367,
     DAY_MINUTE_SYM = 368,
     DAY_SECOND_SYM = 369,
     DAY_SYM = 370,
     DEALLOCATE_SYM = 371,
     DECIMAL_NUM = 372,
     DECIMAL_SYM = 373,
     DECLARE_SYM = 374,
     DEFAULT = 375,
     DEFAULT_AUTH_SYM = 376,
     DEFINER_SYM = 377,
     DELAYED_SYM = 378,
     DELAY_KEY_WRITE_SYM = 379,
     DELETE_SYM = 380,
     DESC = 381,
     DESCRIBE = 382,
     DES_KEY_FILE = 383,
     DETERMINISTIC_SYM = 384,
     DIAGNOSTICS_SYM = 385,
     DIRECTORY_SYM = 386,
     DISABLE_SYM = 387,
     DISCARD = 388,
     DISK_SYM = 389,
     DISTINCT = 390,
     DIV_SYM = 391,
     DOUBLE_SYM = 392,
     DO_SYM = 393,
     DROP = 394,
     DUAL_SYM = 395,
     DUMPFILE = 396,
     DUPLICATE_SYM = 397,
     DYNAMIC_SYM = 398,
     EACH_SYM = 399,
     ELSE = 400,
     ELSEIF_SYM = 401,
     ENABLE_SYM = 402,
     ENCLOSED = 403,
     END = 404,
     ENDS_SYM = 405,
     END_OF_INPUT = 406,
     ENGINES_SYM = 407,
     ENGINE_SYM = 408,
     ENUM = 409,
     EQ = 410,
     EQUAL_SYM = 411,
     ERROR_SYM = 412,
     ERRORS = 413,
     ESCAPED = 414,
     ESCAPE_SYM = 415,
     EVENTS_SYM = 416,
     EVENT_SYM = 417,
     EVERY_SYM = 418,
     EXCHANGE_SYM = 419,
     EXECUTE_SYM = 420,
     EXISTS = 421,
     EXIT_SYM = 422,
     EXPANSION_SYM = 423,
     EXPIRE_SYM = 424,
     EXPORT_SYM = 425,
     EXTENDED_SYM = 426,
     EXTENT_SIZE_SYM = 427,
     EXTRACT_SYM = 428,
     FALSE_SYM = 429,
     FAST_SYM = 430,
     FAULTS_SYM = 431,
     FETCH_SYM = 432,
     FILE_SYM = 433,
     FIRST_SYM = 434,
     FIXED_SYM = 435,
     FLOAT_NUM = 436,
     FLOAT_SYM = 437,
     FLUSH_SYM = 438,
     FORCE_SYM = 439,
     FOREIGN = 440,
     FOR_SYM = 441,
     FORMAT_SYM = 442,
     FOUND_SYM = 443,
     FROM = 444,
     FULL = 445,
     FULLTEXT_SYM = 446,
     FUNCTION_SYM = 447,
     GE = 448,
     GENERAL = 449,
     GEOMETRYCOLLECTION = 450,
     GEOMETRY_SYM = 451,
     GET_FORMAT = 452,
     GET_SYM = 453,
     GLOBAL_SYM = 454,
     GRANT = 455,
     GRANTS = 456,
     GROUP_SYM = 457,
     GROUP_CONCAT_SYM = 458,
     GT_SYM = 459,
     HANDLER_SYM = 460,
     HASH_SYM = 461,
     HAVING = 462,
     HELP_SYM = 463,
     HEX_NUM = 464,
     HIGH_PRIORITY = 465,
     HOST_SYM = 466,
     HOSTS_SYM = 467,
     HOUR_MICROSECOND_SYM = 468,
     HOUR_MINUTE_SYM = 469,
     HOUR_SECOND_SYM = 470,
     HOUR_SYM = 471,
     IDENT = 472,
     IDENTIFIED_SYM = 473,
     IDENT_QUOTED = 474,
     IF = 475,
     IGNORE_SYM = 476,
     IGNORE_SERVER_IDS_SYM = 477,
     IMPORT = 478,
     INCEPTION_START_SYM = 479,
     INCEPTION_COMMIT_SYM = 480,
     INCEPTION_SYM = 481,
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
     OSC_PERCENT_SYM = 634,
     OSC_SYM = 635,
     OUTER = 636,
     OUTFILE = 637,
     OUT_SYM = 638,
     OWNER_SYM = 639,
     PACK_KEYS_SYM = 640,
     PAGE_SYM = 641,
     PARAM_MARKER = 642,
     PARSER_SYM = 643,
     PARTIAL = 644,
     PARTITION_SYM = 645,
     PARTITIONS_SYM = 646,
     PARTITIONING_SYM = 647,
     PASSWORD = 648,
     PHASE_SYM = 649,
     PLUGIN_DIR_SYM = 650,
     PLUGIN_SYM = 651,
     PLUGINS_SYM = 652,
     POINT_SYM = 653,
     POLYGON = 654,
     PORT_SYM = 655,
     POSITION_SYM = 656,
     PRECISION = 657,
     PREPARE_SYM = 658,
     PRESERVE_SYM = 659,
     PREV_SYM = 660,
     PRIMARY_SYM = 661,
     PRIVILEGES = 662,
     PROCEDURE_SYM = 663,
     PROCESS = 664,
     PROCESSLIST_SYM = 665,
     PROFILE_SYM = 666,
     PROFILES_SYM = 667,
     PROXY_SYM = 668,
     PURGE = 669,
     QUARTER_SYM = 670,
     QUERY_SYM = 671,
     QUICK = 672,
     RANGE_SYM = 673,
     READS_SYM = 674,
     READ_ONLY_SYM = 675,
     READ_SYM = 676,
     READ_WRITE_SYM = 677,
     REAL = 678,
     REBUILD_SYM = 679,
     RECOVER_SYM = 680,
     REDOFILE_SYM = 681,
     REDO_BUFFER_SIZE_SYM = 682,
     REDUNDANT_SYM = 683,
     REFERENCES = 684,
     REGEXP = 685,
     RELAY = 686,
     RELAYLOG_SYM = 687,
     RELAY_LOG_FILE_SYM = 688,
     RELAY_LOG_POS_SYM = 689,
     RELAY_THREAD = 690,
     RELEASE_SYM = 691,
     RELOAD = 692,
     REMOVE_SYM = 693,
     RENAME = 694,
     REORGANIZE_SYM = 695,
     REPAIR = 696,
     REPEATABLE_SYM = 697,
     REPEAT_SYM = 698,
     REPLACE = 699,
     REPLICATION = 700,
     REQUIRE_SYM = 701,
     RESET_SYM = 702,
     RESIGNAL_SYM = 703,
     RESOURCES = 704,
     RESTORE_SYM = 705,
     RESTRICT = 706,
     RESUME_SYM = 707,
     RETURNED_SQLSTATE_SYM = 708,
     RETURNS_SYM = 709,
     RETURN_SYM = 710,
     REVERSE_SYM = 711,
     REVOKE = 712,
     RIGHT = 713,
     ROLLBACK_SYM = 714,
     ROLLUP_SYM = 715,
     ROUTINE_SYM = 716,
     ROWS_SYM = 717,
     ROW_FORMAT_SYM = 718,
     ROW_SYM = 719,
     ROW_COUNT_SYM = 720,
     RTREE_SYM = 721,
     SAVEPOINT_SYM = 722,
     SCHEDULE_SYM = 723,
     SCHEMA_NAME_SYM = 724,
     SECOND_MICROSECOND_SYM = 725,
     SECOND_SYM = 726,
     SECURITY_SYM = 727,
     SELECT_SYM = 728,
     SENSITIVE_SYM = 729,
     SEPARATOR_SYM = 730,
     SERIALIZABLE_SYM = 731,
     SERIAL_SYM = 732,
     SESSION_SYM = 733,
     SERVER_SYM = 734,
     SERVER_OPTIONS = 735,
     SET = 736,
     SET_VAR = 737,
     SHARE_SYM = 738,
     SHIFT_LEFT = 739,
     SHIFT_RIGHT = 740,
     SHOW = 741,
     SHUTDOWN = 742,
     SIGNAL_SYM = 743,
     SIGNED_SYM = 744,
     SIMPLE_SYM = 745,
     SLAVE = 746,
     SLOW = 747,
     SMALLINT = 748,
     SNAPSHOT_SYM = 749,
     SOCKET_SYM = 750,
     SONAME_SYM = 751,
     SOUNDS_SYM = 752,
     SOURCE_SYM = 753,
     SPATIAL_SYM = 754,
     SPECIFIC_SYM = 755,
     SQLEXCEPTION_SYM = 756,
     SQLSTATE_SYM = 757,
     SQLWARNING_SYM = 758,
     SQL_AFTER_GTIDS = 759,
     SQL_AFTER_MTS_GAPS = 760,
     SQL_BEFORE_GTIDS = 761,
     SQL_BIG_RESULT = 762,
     SQL_BUFFER_RESULT = 763,
     SQL_CACHE_SYM = 764,
     SQL_CALC_FOUND_ROWS = 765,
     SQL_NO_CACHE_SYM = 766,
     SQL_SMALL_RESULT = 767,
     SQL_SYM = 768,
     SQL_THREAD = 769,
     SSL_SYM = 770,
     STARTING = 771,
     STARTS_SYM = 772,
     START_SYM = 773,
     STATS_AUTO_RECALC_SYM = 774,
     STATS_PERSISTENT_SYM = 775,
     STATS_SAMPLE_PAGES_SYM = 776,
     STATUS_SYM = 777,
     STDDEV_SAMP_SYM = 778,
     STD_SYM = 779,
     STOP_SYM = 780,
     STORAGE_SYM = 781,
     STRAIGHT_JOIN = 782,
     STRING_SYM = 783,
     SUBCLASS_ORIGIN_SYM = 784,
     SUBDATE_SYM = 785,
     SUBJECT_SYM = 786,
     SUBPARTITIONS_SYM = 787,
     SUBPARTITION_SYM = 788,
     SUBSTRING = 789,
     SUM_SYM = 790,
     SUPER_SYM = 791,
     SUSPEND_SYM = 792,
     SWAPS_SYM = 793,
     SWITCHES_SYM = 794,
     SYSDATE = 795,
     TABLES = 796,
     TABLESPACE = 797,
     TABLE_REF_PRIORITY = 798,
     TABLE_SYM = 799,
     TABLE_CHECKSUM_SYM = 800,
     TABLE_NAME_SYM = 801,
     TEMPORARY = 802,
     TEMPTABLE_SYM = 803,
     TERMINATED = 804,
     TEXT_STRING = 805,
     TEXT_SYM = 806,
     THAN_SYM = 807,
     THEN_SYM = 808,
     TIMESTAMP = 809,
     TIMESTAMP_ADD = 810,
     TIMESTAMP_DIFF = 811,
     TIME_SYM = 812,
     TINYBLOB = 813,
     TINYINT = 814,
     TINYTEXT = 815,
     TO_SYM = 816,
     TRAILING = 817,
     TRANSACTION_SYM = 818,
     TRIGGERS_SYM = 819,
     TRIGGER_SYM = 820,
     TRIM = 821,
     TRUE_SYM = 822,
     TRUNCATE_SYM = 823,
     TYPES_SYM = 824,
     TYPE_SYM = 825,
     UDF_RETURNS_SYM = 826,
     ULONGLONG_NUM = 827,
     UNCOMMITTED_SYM = 828,
     UNDEFINED_SYM = 829,
     UNDERSCORE_CHARSET = 830,
     UNDOFILE_SYM = 831,
     UNDO_BUFFER_SIZE_SYM = 832,
     UNDO_SYM = 833,
     UNICODE_SYM = 834,
     UNINSTALL_SYM = 835,
     UNION_SYM = 836,
     UNIQUE_SYM = 837,
     UNKNOWN_SYM = 838,
     UNLOCK_SYM = 839,
     UNSIGNED = 840,
     UNTIL_SYM = 841,
     UPDATE_SYM = 842,
     UPGRADE_SYM = 843,
     USAGE = 844,
     USER = 845,
     USE_FRM = 846,
     USE_SYM = 847,
     USING = 848,
     UTC_DATE_SYM = 849,
     UTC_TIMESTAMP_SYM = 850,
     UTC_TIME_SYM = 851,
     VALUES = 852,
     VALUE_SYM = 853,
     VARBINARY = 854,
     VARCHAR = 855,
     VARIABLES = 856,
     VARIANCE_SYM = 857,
     VARYING = 858,
     VAR_SAMP_SYM = 859,
     VIEW_SYM = 860,
     WAIT_SYM = 861,
     WARNINGS = 862,
     WEEK_SYM = 863,
     WEIGHT_STRING_SYM = 864,
     WHEN_SYM = 865,
     WHERE = 866,
     WHILE_SYM = 867,
     WITH = 868,
     WITH_CUBE_SYM = 869,
     WITH_ROLLUP_SYM = 870,
     WORK_SYM = 871,
     WRAPPER_SYM = 872,
     WRITE_SYM = 873,
     X509_SYM = 874,
     XA_SYM = 875,
     XML_SYM = 876,
     XOR = 877,
     YEAR_MONTH_SYM = 878,
     YEAR_SYM = 879,
     ZEROFILL = 880
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
#define AUTOEXTEND_SIZE_SYM 279
#define AUTO_INC 280
#define AVG_ROW_LENGTH 281
#define AVG_SYM 282
#define BACKUP_SYM 283
#define BEFORE_SYM 284
#define BEGIN_SYM 285
#define BETWEEN_SYM 286
#define BIGINT 287
#define BINARY 288
#define BINLOG_SYM 289
#define BIN_NUM 290
#define BIT_AND 291
#define BIT_OR 292
#define BIT_SYM 293
#define BIT_XOR 294
#define BLOB_SYM 295
#define BLOCK_SYM 296
#define BOOLEAN_SYM 297
#define BOOL_SYM 298
#define BOTH 299
#define BTREE_SYM 300
#define BY 301
#define BYTE_SYM 302
#define CACHE_SYM 303
#define CALL_SYM 304
#define CASCADE 305
#define CASCADED 306
#define CASE_SYM 307
#define CAST_SYM 308
#define CATALOG_NAME_SYM 309
#define CHAIN_SYM 310
#define CHANGE 311
#define CHANGED 312
#define CHARSET 313
#define CHAR_SYM 314
#define CHECKSUM_SYM 315
#define CHECK_SYM 316
#define CIPHER_SYM 317
#define CLASS_ORIGIN_SYM 318
#define CLIENT_SYM 319
#define CLOSE_SYM 320
#define COALESCE 321
#define CODE_SYM 322
#define COLLATE_SYM 323
#define COLLATION_SYM 324
#define COLUMNS 325
#define COLUMN_SYM 326
#define COLUMN_FORMAT_SYM 327
#define COLUMN_NAME_SYM 328
#define COMMENT_SYM 329
#define COMMITTED_SYM 330
#define COMMIT_SYM 331
#define COMPACT_SYM 332
#define COMPLETION_SYM 333
#define COMPRESSED_SYM 334
#define CONCURRENT 335
#define CONDITION_SYM 336
#define CONNECTION_SYM 337
#define CONSISTENT_SYM 338
#define CONSTRAINT 339
#define CONSTRAINT_CATALOG_SYM 340
#define CONSTRAINT_NAME_SYM 341
#define CONSTRAINT_SCHEMA_SYM 342
#define CONTAINS_SYM 343
#define CONTEXT_SYM 344
#define CONTINUE_SYM 345
#define CONVERT_SYM 346
#define COUNT_SYM 347
#define CPU_SYM 348
#define CREATE 349
#define CROSS 350
#define CUBE_SYM 351
#define CURDATE 352
#define CURRENT_SYM 353
#define CURRENT_USER 354
#define CURSOR_SYM 355
#define CURSOR_NAME_SYM 356
#define CURTIME 357
#define DATABASE 358
#define DATABASES 359
#define DATAFILE_SYM 360
#define DATA_SYM 361
#define DATETIME 362
#define DATE_ADD_INTERVAL 363
#define DATE_SUB_INTERVAL 364
#define DATE_SYM 365
#define DAY_HOUR_SYM 366
#define DAY_MICROSECOND_SYM 367
#define DAY_MINUTE_SYM 368
#define DAY_SECOND_SYM 369
#define DAY_SYM 370
#define DEALLOCATE_SYM 371
#define DECIMAL_NUM 372
#define DECIMAL_SYM 373
#define DECLARE_SYM 374
#define DEFAULT 375
#define DEFAULT_AUTH_SYM 376
#define DEFINER_SYM 377
#define DELAYED_SYM 378
#define DELAY_KEY_WRITE_SYM 379
#define DELETE_SYM 380
#define DESC 381
#define DESCRIBE 382
#define DES_KEY_FILE 383
#define DETERMINISTIC_SYM 384
#define DIAGNOSTICS_SYM 385
#define DIRECTORY_SYM 386
#define DISABLE_SYM 387
#define DISCARD 388
#define DISK_SYM 389
#define DISTINCT 390
#define DIV_SYM 391
#define DOUBLE_SYM 392
#define DO_SYM 393
#define DROP 394
#define DUAL_SYM 395
#define DUMPFILE 396
#define DUPLICATE_SYM 397
#define DYNAMIC_SYM 398
#define EACH_SYM 399
#define ELSE 400
#define ELSEIF_SYM 401
#define ENABLE_SYM 402
#define ENCLOSED 403
#define END 404
#define ENDS_SYM 405
#define END_OF_INPUT 406
#define ENGINES_SYM 407
#define ENGINE_SYM 408
#define ENUM 409
#define EQ 410
#define EQUAL_SYM 411
#define ERROR_SYM 412
#define ERRORS 413
#define ESCAPED 414
#define ESCAPE_SYM 415
#define EVENTS_SYM 416
#define EVENT_SYM 417
#define EVERY_SYM 418
#define EXCHANGE_SYM 419
#define EXECUTE_SYM 420
#define EXISTS 421
#define EXIT_SYM 422
#define EXPANSION_SYM 423
#define EXPIRE_SYM 424
#define EXPORT_SYM 425
#define EXTENDED_SYM 426
#define EXTENT_SIZE_SYM 427
#define EXTRACT_SYM 428
#define FALSE_SYM 429
#define FAST_SYM 430
#define FAULTS_SYM 431
#define FETCH_SYM 432
#define FILE_SYM 433
#define FIRST_SYM 434
#define FIXED_SYM 435
#define FLOAT_NUM 436
#define FLOAT_SYM 437
#define FLUSH_SYM 438
#define FORCE_SYM 439
#define FOREIGN 440
#define FOR_SYM 441
#define FORMAT_SYM 442
#define FOUND_SYM 443
#define FROM 444
#define FULL 445
#define FULLTEXT_SYM 446
#define FUNCTION_SYM 447
#define GE 448
#define GENERAL 449
#define GEOMETRYCOLLECTION 450
#define GEOMETRY_SYM 451
#define GET_FORMAT 452
#define GET_SYM 453
#define GLOBAL_SYM 454
#define GRANT 455
#define GRANTS 456
#define GROUP_SYM 457
#define GROUP_CONCAT_SYM 458
#define GT_SYM 459
#define HANDLER_SYM 460
#define HASH_SYM 461
#define HAVING 462
#define HELP_SYM 463
#define HEX_NUM 464
#define HIGH_PRIORITY 465
#define HOST_SYM 466
#define HOSTS_SYM 467
#define HOUR_MICROSECOND_SYM 468
#define HOUR_MINUTE_SYM 469
#define HOUR_SECOND_SYM 470
#define HOUR_SYM 471
#define IDENT 472
#define IDENTIFIED_SYM 473
#define IDENT_QUOTED 474
#define IF 475
#define IGNORE_SYM 476
#define IGNORE_SERVER_IDS_SYM 477
#define IMPORT 478
#define INCEPTION_START_SYM 479
#define INCEPTION_COMMIT_SYM 480
#define INCEPTION_SYM 481
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
#define OSC_PERCENT_SYM 634
#define OSC_SYM 635
#define OUTER 636
#define OUTFILE 637
#define OUT_SYM 638
#define OWNER_SYM 639
#define PACK_KEYS_SYM 640
#define PAGE_SYM 641
#define PARAM_MARKER 642
#define PARSER_SYM 643
#define PARTIAL 644
#define PARTITION_SYM 645
#define PARTITIONS_SYM 646
#define PARTITIONING_SYM 647
#define PASSWORD 648
#define PHASE_SYM 649
#define PLUGIN_DIR_SYM 650
#define PLUGIN_SYM 651
#define PLUGINS_SYM 652
#define POINT_SYM 653
#define POLYGON 654
#define PORT_SYM 655
#define POSITION_SYM 656
#define PRECISION 657
#define PREPARE_SYM 658
#define PRESERVE_SYM 659
#define PREV_SYM 660
#define PRIMARY_SYM 661
#define PRIVILEGES 662
#define PROCEDURE_SYM 663
#define PROCESS 664
#define PROCESSLIST_SYM 665
#define PROFILE_SYM 666
#define PROFILES_SYM 667
#define PROXY_SYM 668
#define PURGE 669
#define QUARTER_SYM 670
#define QUERY_SYM 671
#define QUICK 672
#define RANGE_SYM 673
#define READS_SYM 674
#define READ_ONLY_SYM 675
#define READ_SYM 676
#define READ_WRITE_SYM 677
#define REAL 678
#define REBUILD_SYM 679
#define RECOVER_SYM 680
#define REDOFILE_SYM 681
#define REDO_BUFFER_SIZE_SYM 682
#define REDUNDANT_SYM 683
#define REFERENCES 684
#define REGEXP 685
#define RELAY 686
#define RELAYLOG_SYM 687
#define RELAY_LOG_FILE_SYM 688
#define RELAY_LOG_POS_SYM 689
#define RELAY_THREAD 690
#define RELEASE_SYM 691
#define RELOAD 692
#define REMOVE_SYM 693
#define RENAME 694
#define REORGANIZE_SYM 695
#define REPAIR 696
#define REPEATABLE_SYM 697
#define REPEAT_SYM 698
#define REPLACE 699
#define REPLICATION 700
#define REQUIRE_SYM 701
#define RESET_SYM 702
#define RESIGNAL_SYM 703
#define RESOURCES 704
#define RESTORE_SYM 705
#define RESTRICT 706
#define RESUME_SYM 707
#define RETURNED_SQLSTATE_SYM 708
#define RETURNS_SYM 709
#define RETURN_SYM 710
#define REVERSE_SYM 711
#define REVOKE 712
#define RIGHT 713
#define ROLLBACK_SYM 714
#define ROLLUP_SYM 715
#define ROUTINE_SYM 716
#define ROWS_SYM 717
#define ROW_FORMAT_SYM 718
#define ROW_SYM 719
#define ROW_COUNT_SYM 720
#define RTREE_SYM 721
#define SAVEPOINT_SYM 722
#define SCHEDULE_SYM 723
#define SCHEMA_NAME_SYM 724
#define SECOND_MICROSECOND_SYM 725
#define SECOND_SYM 726
#define SECURITY_SYM 727
#define SELECT_SYM 728
#define SENSITIVE_SYM 729
#define SEPARATOR_SYM 730
#define SERIALIZABLE_SYM 731
#define SERIAL_SYM 732
#define SESSION_SYM 733
#define SERVER_SYM 734
#define SERVER_OPTIONS 735
#define SET 736
#define SET_VAR 737
#define SHARE_SYM 738
#define SHIFT_LEFT 739
#define SHIFT_RIGHT 740
#define SHOW 741
#define SHUTDOWN 742
#define SIGNAL_SYM 743
#define SIGNED_SYM 744
#define SIMPLE_SYM 745
#define SLAVE 746
#define SLOW 747
#define SMALLINT 748
#define SNAPSHOT_SYM 749
#define SOCKET_SYM 750
#define SONAME_SYM 751
#define SOUNDS_SYM 752
#define SOURCE_SYM 753
#define SPATIAL_SYM 754
#define SPECIFIC_SYM 755
#define SQLEXCEPTION_SYM 756
#define SQLSTATE_SYM 757
#define SQLWARNING_SYM 758
#define SQL_AFTER_GTIDS 759
#define SQL_AFTER_MTS_GAPS 760
#define SQL_BEFORE_GTIDS 761
#define SQL_BIG_RESULT 762
#define SQL_BUFFER_RESULT 763
#define SQL_CACHE_SYM 764
#define SQL_CALC_FOUND_ROWS 765
#define SQL_NO_CACHE_SYM 766
#define SQL_SMALL_RESULT 767
#define SQL_SYM 768
#define SQL_THREAD 769
#define SSL_SYM 770
#define STARTING 771
#define STARTS_SYM 772
#define START_SYM 773
#define STATS_AUTO_RECALC_SYM 774
#define STATS_PERSISTENT_SYM 775
#define STATS_SAMPLE_PAGES_SYM 776
#define STATUS_SYM 777
#define STDDEV_SAMP_SYM 778
#define STD_SYM 779
#define STOP_SYM 780
#define STORAGE_SYM 781
#define STRAIGHT_JOIN 782
#define STRING_SYM 783
#define SUBCLASS_ORIGIN_SYM 784
#define SUBDATE_SYM 785
#define SUBJECT_SYM 786
#define SUBPARTITIONS_SYM 787
#define SUBPARTITION_SYM 788
#define SUBSTRING 789
#define SUM_SYM 790
#define SUPER_SYM 791
#define SUSPEND_SYM 792
#define SWAPS_SYM 793
#define SWITCHES_SYM 794
#define SYSDATE 795
#define TABLES 796
#define TABLESPACE 797
#define TABLE_REF_PRIORITY 798
#define TABLE_SYM 799
#define TABLE_CHECKSUM_SYM 800
#define TABLE_NAME_SYM 801
#define TEMPORARY 802
#define TEMPTABLE_SYM 803
#define TERMINATED 804
#define TEXT_STRING 805
#define TEXT_SYM 806
#define THAN_SYM 807
#define THEN_SYM 808
#define TIMESTAMP 809
#define TIMESTAMP_ADD 810
#define TIMESTAMP_DIFF 811
#define TIME_SYM 812
#define TINYBLOB 813
#define TINYINT 814
#define TINYTEXT 815
#define TO_SYM 816
#define TRAILING 817
#define TRANSACTION_SYM 818
#define TRIGGERS_SYM 819
#define TRIGGER_SYM 820
#define TRIM 821
#define TRUE_SYM 822
#define TRUNCATE_SYM 823
#define TYPES_SYM 824
#define TYPE_SYM 825
#define UDF_RETURNS_SYM 826
#define ULONGLONG_NUM 827
#define UNCOMMITTED_SYM 828
#define UNDEFINED_SYM 829
#define UNDERSCORE_CHARSET 830
#define UNDOFILE_SYM 831
#define UNDO_BUFFER_SIZE_SYM 832
#define UNDO_SYM 833
#define UNICODE_SYM 834
#define UNINSTALL_SYM 835
#define UNION_SYM 836
#define UNIQUE_SYM 837
#define UNKNOWN_SYM 838
#define UNLOCK_SYM 839
#define UNSIGNED 840
#define UNTIL_SYM 841
#define UPDATE_SYM 842
#define UPGRADE_SYM 843
#define USAGE 844
#define USER 845
#define USE_FRM 846
#define USE_SYM 847
#define USING 848
#define UTC_DATE_SYM 849
#define UTC_TIMESTAMP_SYM 850
#define UTC_TIME_SYM 851
#define VALUES 852
#define VALUE_SYM 853
#define VARBINARY 854
#define VARCHAR 855
#define VARIABLES 856
#define VARIANCE_SYM 857
#define VARYING 858
#define VAR_SAMP_SYM 859
#define VIEW_SYM 860
#define WAIT_SYM 861
#define WARNINGS 862
#define WEEK_SYM 863
#define WEIGHT_STRING_SYM 864
#define WHEN_SYM 865
#define WHERE 866
#define WHILE_SYM 867
#define WITH 868
#define WITH_CUBE_SYM 869
#define WITH_ROLLUP_SYM 870
#define WORK_SYM 871
#define WRAPPER_SYM 872
#define WRITE_SYM 873
#define X509_SYM 874
#define XA_SYM 875
#define XML_SYM 876
#define XOR 877
#define YEAR_MONTH_SYM 878
#define YEAR_SYM 879
#define ZEROFILL 880




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2072 of yacc.c  */
#line 970 "/opt/inception-master/sql/sql_yacc.yy"

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
  bool is_not_empty;



/* Line 2072 of yacc.c  */
#line 1360 "/opt/inception-master/sql/sql_yacc.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif





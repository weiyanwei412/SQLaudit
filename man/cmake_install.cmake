# Install script for directory: /opt/inception-master/man

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local/inception")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RELEASE-DWITH_ZLIB=bundled-DMY_MAINTAINER_CXX_WARNINGS=-Wall -Wextra -Wunused -Wwrite-strings -Wno-strict-aliasing  -Wno-unused-parameter -Woverloaded-virtual")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "0")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "ManPages")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man1" TYPE FILE FILES
    "/opt/inception-master/man/comp_err.1"
    "/opt/inception-master/man/innochecksum.1"
    "/opt/inception-master/man/msql2mysql.1"
    "/opt/inception-master/man/my_print_defaults.1"
    "/opt/inception-master/man/myisam_ftdump.1"
    "/opt/inception-master/man/myisamchk.1"
    "/opt/inception-master/man/myisamlog.1"
    "/opt/inception-master/man/myisampack.1"
    "/opt/inception-master/man/mysql-stress-test.pl.1"
    "/opt/inception-master/man/mysql-test-run.pl.1"
    "/opt/inception-master/man/mysql.1"
    "/opt/inception-master/man/mysql.server.1"
    "/opt/inception-master/man/mysql_client_test.1"
    "/opt/inception-master/man/mysql_client_test_embedded.1"
    "/opt/inception-master/man/mysql_config.1"
    "/opt/inception-master/man/mysql_config_editor.1"
    "/opt/inception-master/man/mysql_convert_table_format.1"
    "/opt/inception-master/man/mysql_find_rows.1"
    "/opt/inception-master/man/mysql_fix_extensions.1"
    "/opt/inception-master/man/mysql_install_db.1"
    "/opt/inception-master/man/mysql_plugin.1"
    "/opt/inception-master/man/mysql_secure_installation.1"
    "/opt/inception-master/man/mysql_setpermission.1"
    "/opt/inception-master/man/mysql_tzinfo_to_sql.1"
    "/opt/inception-master/man/mysql_upgrade.1"
    "/opt/inception-master/man/mysql_waitpid.1"
    "/opt/inception-master/man/mysql_zap.1"
    "/opt/inception-master/man/mysqlaccess.1"
    "/opt/inception-master/man/mysqladmin.1"
    "/opt/inception-master/man/mysqlbinlog.1"
    "/opt/inception-master/man/mysqlbug.1"
    "/opt/inception-master/man/mysqlcheck.1"
    "/opt/inception-master/man/mysqld_multi.1"
    "/opt/inception-master/man/mysqld_safe.1"
    "/opt/inception-master/man/mysqldump.1"
    "/opt/inception-master/man/mysqldumpslow.1"
    "/opt/inception-master/man/mysqlhotcopy.1"
    "/opt/inception-master/man/mysqlimport.1"
    "/opt/inception-master/man/mysqlman.1"
    "/opt/inception-master/man/mysqlshow.1"
    "/opt/inception-master/man/mysqlslap.1"
    "/opt/inception-master/man/mysqltest.1"
    "/opt/inception-master/man/mysqltest_embedded.1"
    "/opt/inception-master/man/perror.1"
    "/opt/inception-master/man/replace.1"
    "/opt/inception-master/man/resolve_stack_dump.1"
    "/opt/inception-master/man/resolveip.1"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "ManPages")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "ManPages")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man8" TYPE FILE FILES "/opt/inception-master/man/mysqld.8")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "ManPages")


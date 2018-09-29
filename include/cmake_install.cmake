# Install script for directory: /opt/inception-master/include

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

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/opt/inception-master/include/mysql.h"
    "/opt/inception-master/include/mysql_com.h"
    "/opt/inception-master/include/mysql_time.h"
    "/opt/inception-master/include/my_list.h"
    "/opt/inception-master/include/my_alloc.h"
    "/opt/inception-master/include/typelib.h"
    "/opt/inception-master/include/mysql/plugin.h"
    "/opt/inception-master/include/mysql/plugin_audit.h"
    "/opt/inception-master/include/mysql/plugin_ftparser.h"
    "/opt/inception-master/include/mysql/plugin_validate_password.h"
    "/opt/inception-master/include/my_dbug.h"
    "/opt/inception-master/include/m_string.h"
    "/opt/inception-master/include/my_sys.h"
    "/opt/inception-master/include/my_xml.h"
    "/opt/inception-master/include/mysql_embed.h"
    "/opt/inception-master/include/my_pthread.h"
    "/opt/inception-master/include/decimal.h"
    "/opt/inception-master/include/errmsg.h"
    "/opt/inception-master/include/my_global.h"
    "/opt/inception-master/include/my_net.h"
    "/opt/inception-master/include/my_getopt.h"
    "/opt/inception-master/include/sslopt-longopts.h"
    "/opt/inception-master/include/my_dir.h"
    "/opt/inception-master/include/sslopt-vars.h"
    "/opt/inception-master/include/sslopt-case.h"
    "/opt/inception-master/include/sql_common.h"
    "/opt/inception-master/include/keycache.h"
    "/opt/inception-master/include/m_ctype.h"
    "/opt/inception-master/include/my_attribute.h"
    "/opt/inception-master/include/my_compiler.h"
    "/opt/inception-master/include/mysql_com_server.h"
    "/opt/inception-master/include/my_byteorder.h"
    "/opt/inception-master/include/byte_order_generic.h"
    "/opt/inception-master/include/byte_order_generic_x86.h"
    "/opt/inception-master/include/byte_order_generic_x86_64.h"
    "/opt/inception-master/include/little_endian.h"
    "/opt/inception-master/include/big_endian.h"
    "/opt/inception-master/include/mysql_version.h"
    "/opt/inception-master/include/my_config.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/mysql" TYPE DIRECTORY FILES "/opt/inception-master/include/mysql/" REGEX "/[^/]*\\.h$" REGEX "/psi\\_abi[^/]*$" EXCLUDE)
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Development")


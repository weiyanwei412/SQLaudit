# Install script for directory: /opt/inception-master

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

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/opt/inception-master/zlib/cmake_install.cmake")
  INCLUDE("/opt/inception-master/extra/yassl/cmake_install.cmake")
  INCLUDE("/opt/inception-master/extra/yassl/taocrypt/cmake_install.cmake")
  INCLUDE("/opt/inception-master/cmd-line-utils/libedit/cmake_install.cmake")
  INCLUDE("/opt/inception-master/include/cmake_install.cmake")
  INCLUDE("/opt/inception-master/dbug/cmake_install.cmake")
  INCLUDE("/opt/inception-master/strings/cmake_install.cmake")
  INCLUDE("/opt/inception-master/vio/cmake_install.cmake")
  INCLUDE("/opt/inception-master/regex/cmake_install.cmake")
  INCLUDE("/opt/inception-master/mysys/cmake_install.cmake")
  INCLUDE("/opt/inception-master/mysys_ssl/cmake_install.cmake")
  INCLUDE("/opt/inception-master/libmysql/cmake_install.cmake")
  INCLUDE("/opt/inception-master/client/cmake_install.cmake")
  INCLUDE("/opt/inception-master/sql/cmake_install.cmake")
  INCLUDE("/opt/inception-master/sql/share/cmake_install.cmake")
  INCLUDE("/opt/inception-master/support-files/cmake_install.cmake")
  INCLUDE("/opt/inception-master/sql-bench/cmake_install.cmake")
  INCLUDE("/opt/inception-master/man/cmake_install.cmake")
  INCLUDE("/opt/inception-master/packaging/rpm-uln/cmake_install.cmake")
  INCLUDE("/opt/inception-master/packaging/WiX/cmake_install.cmake")
  INCLUDE("/opt/inception-master/packaging/solaris/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/opt/inception-master/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/opt/inception-master/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)

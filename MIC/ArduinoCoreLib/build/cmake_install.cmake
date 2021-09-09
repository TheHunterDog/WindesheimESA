# Install script for directory: /Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/markheijnekamp/Arduino")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "avr-objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/build/libarduinocore.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/arduino" TYPE FILE FILES
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/variants/standard/pins_arduino.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/Arduino.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/binary.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/Client.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/HardwareSerial.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/HardwareSerial_private.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/IPAddress.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/new.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/PluggableUSB.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/Printable.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/Print.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/Server.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/Stream.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/Udp.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/USBAPI.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/USBCore.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/USBDesc.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/WCharacter.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/wiring_private.h"
    "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/src/cores/arduino/WString.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/markheijnekamp/Windesheim/MIC/ArduinoCoreLib/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")

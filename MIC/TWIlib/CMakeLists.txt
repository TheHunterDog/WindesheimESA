# Just a recent number
cmake_minimum_required(VERSION 3.18)

# Use AVR GCC toolchain definition in your HOME/Arduino directory
if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
    set(ARDUINO_PATH $ENV{HOME}/Arduino)
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    set(ARDUINO_PATH "$ENV{HOMEDRIVE}$ENV{HOMEPATH}/Arduino")
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Darwin")
    set(ARDUINO_PATH $ENV{HOME}/Arduino)

endif()
set(CMAKE_TOOLCHAIN_FILE ${ARDUINO_PATH}/etc/toolchain-avr.cmake)

# Project name
project("Twi")

# The deliverable
set(PRODUCT_NAME TWI)

# Where to install
if(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Linux")
    set(CMAKE_INSTALL_PREFIX  $ENV{HOME}/Arduino)
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Windows")
    set(CMAKE_INSTALL_PREFIX "$ENV{HOMEDRIVE}$ENV{HOMEPATH}/Arduino")
elseif(${CMAKE_HOST_SYSTEM_NAME} STREQUAL "Darwin")
    set(CMAKE_INSTALL_PREFIX  $ENV{HOME}/Arduino)

endif()


# Target: the Arduino core library with all core source files to compile
# To get a list of .c and cpp files in Linux:
#       cd <project directory>
#       find src/cores/arduino -name \*.c\*
# NOTE: Omit hooks.c
add_library(${PRODUCT_NAME} STATIC
    src/twi.c
)


target_include_directories(${PRODUCT_NAME}
    PRIVATE "${ARDUINO_PATH}/include/arduino"
)
target_link_directories(${PRODUCT_NAME}
    PRIVATE "${ARDUINO_PATH}/lib"
)
target_link_libraries(${PRODUCT_NAME}
    arduinocore
)


# Here the compiler finds include files (-I flags)
target_include_directories(${PRODUCT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# All .h files of Arduino core
# To get a list of .h files (in Linux):
#       cd <project directory>
#       find src/cores/arduino -name \*.h
# Also include the pins_arduino.h file
#       src/variants/standard/pins_arduino.h
set(INCLUDES
    src/twi.h
)

# Install the library here (INSTALL_PREFIX_PATH is prepended)
install(TARGETS ${PRODUCT_NAME} ARCHIVE DESTINATION lib)
install(FILES ${INCLUDES} DESTINATION include/arduino)
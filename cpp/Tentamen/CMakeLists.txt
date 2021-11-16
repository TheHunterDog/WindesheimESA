# Just a recent number
cmake_minimum_required(VERSION 3.18)

# Project name
project("Tentamen")

# Product filename
set(PRODUCT_NAME Tentamen)

# Create one target. To generate a list of source files: `find src -name \*.c\*`
add_executable(${PRODUCT_NAME}
	opdracht1.cpp
	opdracht2.cpp
	opdracht3.cpp
	opdracht4.cpp
	opdracht5.cpp
	main.cpp
	Siamees.cpp
	Kat.cpp
)


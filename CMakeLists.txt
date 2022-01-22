cmake_minimum_required ( VERSION 3.1.0 )

project ( TINYDB
  VERSION 3.0.0
  LANGUAGES C
)

# # Set to c++11
# set ( CMAKE_CXX_STANDARD 11 )

# Source
set ( SOURCE_CODE
  src/db.c
  src/defs.h
  src/exec.c
  src/connect.c
  src/decl.h
)

# Executables
add_executable(tiny_db      ${SOURCE_CODE})
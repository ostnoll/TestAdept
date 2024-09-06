# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TestAdept_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TestAdept_autogen.dir\\ParseCache.txt"
  "TestAdept_autogen"
  )
endif()

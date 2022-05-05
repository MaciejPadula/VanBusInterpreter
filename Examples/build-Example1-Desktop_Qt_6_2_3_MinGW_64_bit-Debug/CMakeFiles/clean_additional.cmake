# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Example1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Example1_autogen.dir\\ParseCache.txt"
  "Example1_autogen"
  "VanBus\\CMakeFiles\\VanBus_autogen.dir\\AutogenUsed.txt"
  "VanBus\\CMakeFiles\\VanBus_autogen.dir\\ParseCache.txt"
  "VanBus\\VanBus_autogen"
  )
endif()

# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/To-Do-List_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/To-Do-List_autogen.dir/ParseCache.txt"
  "To-Do-List_autogen"
  )
endif()

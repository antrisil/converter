# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "MinSizeRel")
  file(REMOVE_RECURSE
  "CMakeFiles/appconversor_frequencias_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appconversor_frequencias_autogen.dir/ParseCache.txt"
  "appconversor_frequencias_autogen"
  )
endif()

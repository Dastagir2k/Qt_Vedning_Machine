# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\VendingMachineStore_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\VendingMachineStore_autogen.dir\\ParseCache.txt"
  "VendingMachineStore_autogen"
  )
endif()

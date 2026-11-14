cmake_minimum_required(VERSION 3.16)
project(coop_lab CXX)
set(CMAKE_CXX_STANDARD 17)

set(VEHICLE "" CACHE STRING "vehicle: sentry / infantry / hero")
if(VEHICLE STREQUAL "sentry")
  add_definitions(-DVEHICLE_SENTRY)
elseif(VEHICLE STREQUAL "infantry")
  add_definitions(-DVEHICLE_INFANTRY)
endif()

add_executable(app src/main.cpp)
target_compile_definitions(app PRIVATE VEHICLE_NAME="${VEHICLE}")

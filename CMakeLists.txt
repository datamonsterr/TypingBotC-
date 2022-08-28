# CMakeList.txt : CMake project for SpamBot, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("SpamBot")

# Add source to this project's executable.
set (source_dir "${PROJECT_SOURCE_DIR}")
file (GLOB robot "${source_dir}/Robot/*.cc")
add_executable (SpamBot "SpamBot.cpp" "SpamBot.h" ${robot})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET SpamBot PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

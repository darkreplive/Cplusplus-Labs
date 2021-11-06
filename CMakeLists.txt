# CMakeList.txt : CMake project for Lab2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Lab2")

# Add source to this project's executable.
add_executable (Lab2 "Week2.cpp" "Vehicle.h" "Vehicle.cpp" "GasolineVehicle.h" "GasolineVehicle.cpp" "ElectricVehicle.h" "ElectricVehicle.cpp" "HybridVehicle.h" "HybridVehicle.cpp")

# TODO: Add tests and install targets if needed.

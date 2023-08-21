# Gtest-using-CMake-and-Docker
i created a successfully running gtest implemtation using Cmake and Docker.
i used macros inside my test and main file to remove the conflict of multiple main while building using cmake.
when Gtest_enabled it will compile both main and test but will generate only one executable which is of gtest.
if you want to build this using cmake only - cd gtest-docker -> mkdir build -> cd build -> cmake -DGTEST_ENABLED=ON or OFF ..
when build then just run make in build directory .
According to the flag provided you will see corresponding executable.

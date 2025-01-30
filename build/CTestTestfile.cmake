# CMake generated Testfile for 
# Source directory: /home/leo/MathLib
# Build directory: /home/leo/MathLib/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[AllTests]=] "/home/leo/MathLib/build/test_suite")
set_tests_properties([=[AllTests]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/leo/MathLib/CMakeLists.txt;42;add_test;/home/leo/MathLib/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")

# CMakeの最小バージョンを指定
cmake_minimum_required(VERSION 3.10)

# プロジェクト名を設定
project(CITest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 実行可能ファイルを作成
# add_executable(<実行ファイル名> <ソースファイル...>)
add_executable(app main.cpp src/calculator.cpp)

# ===================================================================
# Testing
# ===================================================================
enable_testing()

# Add the 'src' directory to the include path so we can find calculator.hpp
include_directories(src)

# Create the test executable
add_executable(runTests
    tests/test_main.cpp
    tests/test_calculator.cpp
    src/calculator.cpp
)

# Add the test to CTest
add_test(NAME CalculatorTest COMMAND runTests)

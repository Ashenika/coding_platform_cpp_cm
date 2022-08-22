# coding_platform C++ Template - Using CMake

**Note:** This project is created using cmake. And projects created as Microsoft Visual Studio solution (.sln) will not support for the available Github actions workflow template.

### Folder Structure
```
 project
 |__ build
 |__ CMakeLists.txt
 |__ lib
    |__ googletest
 |__ src
    |__ CMakeLists.txt
    |__ FileOne.h
    |__ FileOne.cpp
    |__ main.cpp (Code for Functions goes there. If multiple files, goes under same directory src/)
 |__ tests
    |__ CMakeLists.txt
    |__ main.cpp
    |__ FileOne_test.cpp
 |__ README.md
```
For more details: https://medium.com/swlh/c-project-structure-for-cmake-67d60135f6f5

## Setup Project in VScode
https://code.visualstudio.com/docs/languages/cpp

## Install GoogleTest
`git clone https://github.com/google/googletest/ `

## Build and Run Unit Tests
### Build
`cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" `

`make all`

### Run the program
  - `./src/template_cmake_run`     Ex: ./src/<project_name>_run    OR     as specified in './src/CMakeLists.txt'

 The following bash command is needed to test. 
 
 It will consider files start with `test_` naming convention which is inside `./tests` directory.
 
 `./tests/template_cmake_test`  Ex: ./tests/<project_name>_test    OR    as specified in './tests/CMakeLists.txt'
 

cmake_minimum_required(VERSION 3.5.0)
project(main VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread") 

add_executable(main input.cpp main.cpp solve.cpp str.cpp)


#find_program(CLANG_TIDY_EXE NAMES clang-tidy)
#if(CLANG_TIDY_EXE)
    #set(CMAKE_CXX_CLANG_TIDY "${CLANG_TIDY_EXE}")
#endif()

#set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


#add_custom_target(lint_test
    #COMMAND ${CLANG_TIDY_EXE} -p ${CMAKE_BINARY_DIR} input.cpp main.cpp solve.cpp str.cpp -- -I/usr/include -I/usr/include/c++/v1
    #WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    #COMMENT "Running clang-tidy"
#)

#find_package(GTest REQUIRED) 

#add_executable(a.out test.cpp)

#target_link_libraries(a.out $(GTEST_LIBRARIES))

#enable_testing()

#add_test(add a.out)

cmake_minimum_required(VERSION 3.20)
project(ads_week2 C)

set(CMAKE_C_STANDARD 11)

add_executable(ads_week2 main.c array.c array.h easy_input.c easy_input.h test_array.c test_array.h)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic -Werror)

IF (NOT WIN32)
    message("Enabling address sanitizer")
    # The address sanitizer helps tracking down bugs related to memory, such as memory leaks,
    # reads/writes from/to invalid addresses, etc..

    target_compile_options(${PROJECT_NAME} PRIVATE -fsanitize=address)
    target_link_options(${PROJECT_NAME} PRIVATE -fsanitize=address)
ENDIF()

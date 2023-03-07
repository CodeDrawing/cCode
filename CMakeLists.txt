cmake_minimum_required(VERSION 3.24)
project(cCode C)

set(CMAKE_C_STANDARD 99)

add_executable(cCode main.c)

add_executable(main main.c)

add_executable(a "Day08_the count of show of number in array.c")
include_directories(outputArray.h)

add_executable(bubble_sort bubble_sort.c)
add_executable(Day09_01 Day09_01.c)
add_executable(Day09_02 Day09_02.c)
add_executable(Day09_03 Day09_03.c)

add_executable(Day_10_the_effective_num Day10_the_effective_num.c)
add_executable(Day10_point_array Day10_point_array.c)
add_executable(login Day10_login.c)
add_executable(Day11_compress_string Day11_compression_string.c)
add_executable(Day11_bubble_sort_pointer Day11_bubble_sort_pointer.c)
add_executable(Day11_decompression_string Day11_decompression_string.c)
add_executable(Day11_test_compression_and_decompression Day11_test_compression_and_decompression.c)
add_executable(Day12_visit_two_dimension_array Day12_visit_two_dimension_array_use_array_pointer.c)
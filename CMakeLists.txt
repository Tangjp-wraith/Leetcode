cmake_minimum_required(VERSION 3.9)
project(LeetCode)
set(CMAKE_CXX_STANDARD 11)

#链接库
aux_source_directory(leetcode/editor/cn/include LEETCODE)
add_library(leetcode ${LEETCODE})
LINK_LIBRARIES(leetcode)




add_executable(146-lru-cache leetcode/editor/cn/146-lru-cache.cpp)
add_executable(206-reverse-linked-list leetcode/editor/cn/206-reverse-linked-list.cpp)
add_executable(21-merge-two-sorted-lists leetcode/editor/cn/21-merge-two-sorted-lists.cpp)
add_executable(24-swap-nodes-in-pairs leetcode/editor/cn/24-swap-nodes-in-pairs.cpp)
add_executable(160-intersection-of-two-linked-lists leetcode/editor/cn/160-intersection-of-two-linked-lists.cpp)
add_executable(234-palindrome-linked-list leetcode/editor/cn/234-palindrome-linked-list.cpp)
add_executable(Offer-09 leetcode/editor/cn/Offer-09.cpp)
add_executable(Offer-30 leetcode/editor/cn/Offer-30.cpp)
project(sample)
cmake_minimum_required(VERSION 3.7)
include(conan_include.cmake)

add_executable(${PROJECT_NAME} 
	src/mytest.cpp
)

target_link_libraries(${PROJECT_NAME}
	CONAN_PKG::Boost
)

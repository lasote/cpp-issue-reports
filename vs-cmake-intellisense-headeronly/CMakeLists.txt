project(sample)
cmake_minimum_required(VERSION 3.7)

add_library(${PROJECT_NAME} 
	INTERFACE
)


target_include_directories(${PROJECT_NAME}
    INTERFACE 
		${PROJECT_SOURCE_DIR}/include
)

add_library(jsonformoderncpp 
	INTERFACE 
)

target_include_directories(jsonformoderncpp 
	INTERFACE
	libs/json/include 
)

target_link_libraries(${PROJECT_NAME}
    INTERFACE 
		jsonformoderncpp
)

add_library(${PROJECT_NAME}_fixer 
	src/my-header-only-fix.cpp
)

target_link_libraries(${PROJECT_NAME}_fixer
	${PROJECT_NAME}
)
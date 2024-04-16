cmake_minimum_required(VERSION 3.29.2)
project(planning
    VERSION 1.0.1
    DESCRIPTION "complex demo for cmake planning"
    HOMEPAGE_URL "https://github.com/hanburger2000/cmake_planning_demo"    
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)

#设置动态库与可执行文件的输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

#添加子目录
add_subdirectory(src)

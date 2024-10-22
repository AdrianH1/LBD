cmake_minimum_required(VERSION 3.27.0)
project(DefaultProj VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(HEADERS
    ExampleProject/Example.hpp
)
    
set(SOURCES
    main.cpp
    ExampleProject/Example.cpp
)

add_executable(DefaultProj ${HEADERS} ${SOURCES} )

target_link_libraries(DefaultProj wsock32 ws2_32)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

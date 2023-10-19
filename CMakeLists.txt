cmake_minimum_required(VERSION 3.0.0)
project(BTKTLT VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

file(GLOB BTKTLT_SRC
        "*.c"
        "*.h"
)

add_executable(BTKTLT ${BTKTLT_SRC})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

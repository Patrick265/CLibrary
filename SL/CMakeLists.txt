message(DEBUG "In SL directory")

set(HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/Include/")
set(SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/Source/Filter/ComplimentaryFilter.c"
            "${CMAKE_CURRENT_SOURCE_DIR}/Source/Math/Vector.c")

add_library(SLTarget "${SOURCE}")

target_include_directories(SLTarget PUBLIC "${HEADERS}")

source_group(
        TREE "${CMAKE_CURRENT_SOURCE_DIR}/include"
        PREFIX "Header Files"
        FILES ${HEADER_LIST})

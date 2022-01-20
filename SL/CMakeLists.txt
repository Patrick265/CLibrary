message(DEBUG "In SL directory")

set(HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/Include/")
set(SOURCE	"${CMAKE_CURRENT_SOURCE_DIR}/Source/Filter/ComplimentaryFilter.c"
			"${CMAKE_CURRENT_SOURCE_DIR}/Source/Math/Vector.c"
			"${CMAKE_CURRENT_SOURCE_DIR}/Source/Data/LinkedList.c"
			"${CMAKE_CURRENT_SOURCE_DIR}/Source/Numeric/Generator.c"
			"${CMAKE_CURRENT_SOURCE_DIR}/Source/Numeric/Conversion.c"
			"${CMAKE_CURRENT_SOURCE_DIR}/Source/Numeric/Bits.c")

add_library(SL "${SOURCE}")

target_link_libraries(SL m)
target_include_directories(SL PUBLIC "${HEADERS}")

source_group(
        TREE "${CMAKE_CURRENT_SOURCE_DIR}/include"
        PREFIX "Header Files"
        FILES ${HEADER_LIST})

message(DEBUG "In SL Test directory")

add_executable(SLTest Main.c
                    "Source/Math/TestVector.c"
                    "Source/Data/TestLinkedList.c"
                    "Source/Numeric/TestGenerator.c"
                    "Source/Numeric/TestBits.c")



target_link_libraries(SLTest PRIVATE SL unity)

target_include_directories(SLTest PUBLIC "${CMAKE_SOURCE_DIR}/SL/Include"
                                            "${CMAKE_CURRENT_SOURCE_DIR}/Include")



add_test(NAME SLTestRunner COMMAND SLTest)
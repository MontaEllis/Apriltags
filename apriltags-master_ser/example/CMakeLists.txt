cmake_minimum_required (VERSION 2.6)

link_libraries(apriltags)

add_executable(apriltags_demo apriltags_demo.cpp serial.cpp)
target_link_libraries(apriltags_demo apriltags ${APRILTAG_LIBS})


#add_executable(BenchmarkDetections BenchmarkDetections.cc)
#target_link_libraries(BenchmarkDetections apriltags ${APRILTAG_LIBS})

install(TARGETS apriltags_demo 
    RUNTIME DESTINATION bin
)

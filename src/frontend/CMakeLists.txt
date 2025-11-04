add_library(scheme_frontend STATIC input_reader.cpp)

target_include_directories(scheme_frontend PUBLIC ${PROJECT_SOURCE_DIR}/include)
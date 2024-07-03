add_library(fetch STATIC fetch.c)
target_include_directories(fetch PUBLIC ${PROJECT_SOURCE_DIR}/include)

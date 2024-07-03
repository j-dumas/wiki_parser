add_library(fetch_wiki STATIC fetch.c)
target_include_directories(fetch_wiki PUBLIC ${PROJECT_SOURCE_DIR}/include)

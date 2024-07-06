add_library(fetch_wiki STATIC fetch.c)
target_include_directories(fetch_wiki PUBLIC ${PROJECT_SOURCE_DIR}/include)

if(WIN32)
  target_link_libraries(fetch_wiki ws2_32)
endif()

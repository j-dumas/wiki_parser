add_executable(${PROJECT_NAME} main.c)

add_subdirectory(fetch_wiki)
target_link_libraries(${PROJECT_NAME} fetch_wiki)

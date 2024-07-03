add_executable(${PROJECT_NAME} main.c)

add_subdirectory(fetch)
target_link_libraries(${PROJECT_NAME} fetch)

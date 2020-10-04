# == Project setup ==

project(exam-var-generator)

include_directories(include)

set(PROJECT_SOURCES
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

# == Tests ==
# add_subdirectory(tests)

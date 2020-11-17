set(TEST_APP_NAME ${APP_NAME}_tests)
set(TEST_SOURCES
    test-my_sum.c
)

add_executable(${TEST_APP_NAME} ${TEST_SOURCES})
target_link_libraries(${TEST_APP_NAME} ${APP_LIB_NAME} criterion)

add_custom_command(TARGET ${TEST_APP_NAME} COMMAND ./${TEST_APP_NAME} POST_BUILD)
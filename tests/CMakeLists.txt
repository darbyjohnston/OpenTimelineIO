file(GLOB tests ${CMAKE_CURRENT_SOURCE_DIR}/test_*.py)
foreach(test ${tests})
    get_filename_component(test_target ${test} NAME_WLE)
    add_test(
        NAME ${test_target}
        COMMAND
            ${CMAKE_COMMAND} -E env PYTHONPATH=${CMAKE_BINARY_DIR}:${CMAKE_SOURCE_DIR}
            ${CMAKE_COMMAND} -E env OTIO_DISABLE_SHELLOUT_TESTS=true
            ${PYTHON_EXECUTABLE} ${test})
endforeach()


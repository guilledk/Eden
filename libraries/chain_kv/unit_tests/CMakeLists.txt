enable_testing()
file(GLOB UNIT_TESTS "*.cpp")
add_executable(chain-kv-tests ${UNIT_TESTS})
target_link_libraries(chain-kv-tests chain_kv)
set_target_properties(chain-kv-tests PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${ROOT_BINARY_DIR})
native_test(chain-kv-tests)

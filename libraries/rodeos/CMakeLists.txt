enable_testing()

if(DEFINED IS_NATIVE)
    add_library(rodeos_lib
        embedded_rodeos.cpp
        rodeos.cpp
        wasm_ql.cpp
    )
    target_link_libraries(rodeos_lib PUBLIC abieos chain_kv chain)
    target_include_directories(rodeos_lib PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
    )
endif()

add_subdirectory(tests)

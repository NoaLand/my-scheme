add_executable(scheme_repl repl.cpp)
target_link_libraries(scheme_repl
    PRIVATE
    scheme_frontend
)
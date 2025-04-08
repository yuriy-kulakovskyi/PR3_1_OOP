add_test([=[Tests.TriangleTest]=]  [==[/Users/yura_kulakovskyi/Documents/C++/OOP/PR3/PR3_1/cmake-build-debug/PR3_1_tests]==] [==[--gtest_filter=Tests.TriangleTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Tests.TriangleTest]=]  PROPERTIES WORKING_DIRECTORY [==[/Users/yura_kulakovskyi/Documents/C++/OOP/PR3/PR3_1/cmake-build-debug]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  PR3_1_tests_TESTS Tests.TriangleTest)

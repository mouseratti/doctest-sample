## how to build
```
cmake -B build
cmake --build build
```
## how to run tests
1. build
1. then
```
export CTEST_OUTPUT_ON_FAILURE=1
cd build
make test
```

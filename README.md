# ACA_BigInt
C++ BigInt implementation

## build
```
$ cmake -B [build directory] -S . -DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake
$ cmake --build [build directory]
```

## Run tests
```
$ ctest -C Debug
```

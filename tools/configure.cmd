@ECHO OFF

SETLOCAL
SET prev=%cd%

echo Configuring LLVM/Clang ...

IF NOT EXIST "%~dp0llvm\tools\clang" mklink /D "%~dp0llvm\tools\clang" "%~dp0clang"
IF NOT EXIST "%~dp0llvm\projects\compiler-rt" mklink /D "%~dp0llvm\projects\compiler-rt" "%~dp0compiler-rt"
IF NOT EXIST "%~dp0llvm\build" mkdir "%~dp0llvm\build"
cd "%~dp0llvm\build"
cmake^
 -DCMAKE_BUILD_TYPE="Release"^
 -DLLVM_TARGETS_TO_BUILD=""^
 -DLLVM_EXPERIMENTAL_TARGETS_TO_BUILD="WebAssembly"^
 -DLLVM_DEFAULT_TARGET_TRIPLE="wasm32-unknown-unknown"^
 ..
cd "%~dp0"

echo Configuring binaryen ...

IF NOT EXIST "%~dp0binaryen\build" mkdir "%~dp0binaryen\build"
cd "%~dp0binaryen\build"
cmake^
 -DCMAKE_BUILD_TYPE="Release"^
 ..

cd "%prev%"
echo Done.

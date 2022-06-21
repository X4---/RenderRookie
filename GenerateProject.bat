
set curdir=%~dp0
set cmakesourcedir=%curdir%
set cmakebuilddir=%curdir%Engine\Build

cmake -S %cmakesourcedir% -B %cmakebuilddir%
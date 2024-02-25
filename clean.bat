@cd src
@set ZGB_PATH=C:\gb\development\EXAMPLES\Zalo\ZGB\common\
@set GBDK_HOME=C:\gb\gbdk-2020\build\gbdk\
make clean BUILD_TYPE=Release
make clean BUILD_TYPE=Debug
make clean BUILD_TYPE=ReleaseColor
make clean BUILD_TYPE=DebugColor
@cd ..

cd "../Release/bin/x64/app/"

C:/local/Qt/5.15.2/msvc2019_64/bin/windeployqt.exe --dir "../../../../WinDeployQT/qtdata" --libdir . --plugindir "../../../../WinDeployQT/plugins" --no-system-d3d-compiler --compiler-runtime --no-opengl-sw --qmldir "../../../../WinDeployQT/res/qml" --release "OpenVR-MotionCompensationOverlay.exe"

@REM Debug:
@REM windeployqt.exe --dir qtdata --libdir . --plugindir qtdata/plugins --no-system-d3d-compiler --compiler-runtime --no-opengl-sw --debug  --qmldir res/qml OpenVR-MotionCompensationOverlay.exe

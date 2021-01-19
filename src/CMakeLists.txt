set(CLSOURCES
${CMAKE_SOURCE_DIR}/src/main.cpp
${CMAKE_SOURCE_DIR}/src/gui/MainWindow.h
${CMAKE_SOURCE_DIR}/src/gui/MainWindow.cpp
${CMAKE_SOURCE_DIR}/src/gui/SettingsDialog/SettingsDialog.h
${CMAKE_SOURCE_DIR}/src/gui/SettingsDialog/SettingsDialog.cpp
${CMAKE_SOURCE_DIR}/src/gui/About/AboutDialog.h
${CMAKE_SOURCE_DIR}/src/gui/About/AboutDialog.cpp
${CMAKE_SOURCE_DIR}/src/gui/About/HelpDialog.h
${CMAKE_SOURCE_DIR}/src/gui/About/HelpDialog.cpp

)
add_executable(${PROJECT_NAME}
    ${CLSOURCES}
)
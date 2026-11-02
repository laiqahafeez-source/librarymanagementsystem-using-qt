cmake_minimum_required(VERSION 3.19)
project(DSAlibrarymanagement LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(DSAlibrarymanagement
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    managebooks.h managebooks.cpp managebooks.ui
    issuebook.h issuebook.cpp issuebook.ui
    seachbook.h seachbook.cpp seachbook.ui
)

target_link_libraries(DSAlibrarymanagement
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS DSAlibrarymanagement
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET DSAlibrarymanagement
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})

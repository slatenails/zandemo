#ifndef MAIN_H
#define MAIN_H

#define APPNAME "ZanDemo"
#define UNIXNAME "zandemo"
#define VERSION_MAJOR 0
#define VERSION_MINOR 0
#define VERSION_PATCH 999
#define BUILD_ID BUILD_INTERNAL
#define RC_ID 0

#define BUILD_INTERNAL 0
#define BUILD_ALPHA    1
#define BUILD_BETA     2
#define BUILD_RC       3
#define BUILD_RELEASE  4

#include <QSettings>

static const std::nullptr_t null = nullptr;

extern QSettings* cfg;
QString versionString();

#endif // MAIN_H
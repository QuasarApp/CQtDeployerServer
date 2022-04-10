#ifndef CONFIG_H
#define CONFIG_H

#include "CQtServer_global.h"

#ifdef Q_OS_LINUX
#define DEFAULT_LOCATION "/var/www/cqt"
#endif

// fix me. for windows showl be selected a new default dirrectory.
#ifdef Q_OS_WIN32
#define DEFAULT_LOCATION "C:/cqt"
#endif

#endif // CONFIG_H

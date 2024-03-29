//#
//# Copyright (C) 2018-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#ifndef CQtDeployerServer_GLOBAL_H
#define CQtDeployerServer_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CQTPROTOCKOL_LIBRARY)
#  define CQTPROTOCKOL_EXPORT Q_DECL_EXPORT
#else
#  define CQTPROTOCKOL_EXPORT Q_DECL_IMPORT
#endif

#endif //CQtDeployerServer_GLOBAL_H


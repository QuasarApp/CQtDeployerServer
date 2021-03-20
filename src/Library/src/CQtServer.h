//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#include "CQtServer_global.h"
inline void initCQtDeployerServerResources() { Q_INIT_RESOURCE(CQT); }

namespace CQT {

/**
 * @brief init This function initialize all resource of the CqtSetver library.
 * @note you should be invoke this method before using the cqt server library.
 * @return true if the initialize finished successful
 */
bool CQtDeployerServer_EXPORT init();

};

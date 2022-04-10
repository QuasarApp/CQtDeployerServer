//#
//# Copyright (C) 2021-2022 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#include "idistributor.h"
#include "iconfiguration.h"

namespace CQT {

iDistributor::~iDistributor() {
    delete _configuration;
}

bool iDistributor::setConfiguraion(const IConfiguration *config) {
    if (!config)
        return false;

    _configuration = config;

    return true;
}

}

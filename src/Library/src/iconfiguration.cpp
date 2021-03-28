//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#include "iconfiguration.h"
namespace CQT {


IConfiguration::IConfiguration(const HostConfiguration &hostConfig) {
    setHostConfig(hostConfig);
}

const HostConfiguration &IConfiguration::hostConfig() const {
    return _hostConfig;
}

void IConfiguration::setHostConfig(const HostConfiguration &hostConfig) {
    _hostConfig = hostConfig;
}

QDataStream &IConfiguration::fromStream(QDataStream &stream) {
    return stream;
}

QDataStream &IConfiguration::toStream(QDataStream &stream) const {
    return stream;

}

}

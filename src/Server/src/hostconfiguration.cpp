//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#include "hostconfiguration.h"
#include "config.h"
namespace CQT {

HostConfiguration::HostConfiguration() {
    _location = DEFAULT_LOCATION;
}

QString HostConfiguration::location() const
{
    return _location;
}

void HostConfiguration::setLocation(const QString &location)
{
    _location = location;
}
}

//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#include "iconfiguration.h"
#include "package.h"

namespace CQT {


Package::Package() {

}

bool Package::isValid() const {
    return AbstractData::isValid() && _config && _packageData.size();
}

bool Package::copyFrom(const QH::PKG::AbstractData *other) {
    AbstractData::copy<Package>(*other);
    return true;
}

QString Package::toString() const {
    return AbstractData::toString() + QString(" Configuration id: %0, Data size: %1").
            arg(_config->name(), _packageData.size());
}

QDataStream &Package::fromStream(QDataStream &stream) {
    stream >> _packageData;
    setConfig(initConfiguration());
    stream >> *_config;

    return stream;
}

QDataStream &Package::toStream(QDataStream &stream) const {
    stream << _packageData;
    stream << *_config;
    return stream;
}

const QByteArray &Package::packageData() const {
    return _packageData;
}

void Package::setPackkageData(const QByteArray &packkageData) {
    _packageData = packkageData;
}

IConfiguration *Package::config() const {
    return _config;
}

void Package::setConfig(IConfiguration *config) {
    if (_config)
        delete _config;

    _config = config;
}
}

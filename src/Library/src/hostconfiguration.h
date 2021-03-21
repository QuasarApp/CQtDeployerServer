//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#ifndef HOSTCONFIGURATION_H
#define HOSTCONFIGURATION_H

#include <QString>
#include "CQtServer_global.h"

namespace CQT {

/**
 * @brief The HostConfiguration class This is host configuration of the ctdeployer server.
 */
class CQTSERVER_EXPORT HostConfiguration
{
public:
    HostConfiguration();

    /**
     * @brief location This method return current value of the repsitories path.
     * @return path to location of the repositories.
     */
    QString location() const;

    /**
     * @brief setLocation This method sets a location of the repositories.
     * @param location This is a new value of the repository location.
     */
    void setLocation(const QString &location);

private:
    QString _location;
};
}
#endif // HOSTCONFIGURATION_H

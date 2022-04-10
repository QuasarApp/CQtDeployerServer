//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#ifndef ICONFIGURATION_H
#define ICONFIGURATION_H
#include "CQtServer_global.h"
#include "hostconfiguration.h"

namespace CQT {

/**
 * @brief The IConfiguration class This is base interface of all configuration.
 * The configuratin received from the main CQtDeployer application.
 */
class CQTSERVER_EXPORT IConfiguration
{
public:
    IConfiguration(const HostConfiguration &hostConfig);

    /**
     * @brief hostConfig This is host configuration of the cqtdeployer server.
     * This configuration received from the config file on the server host.
     * @return constant reference to the host configuration.
     */
    const HostConfiguration& hostConfig() const;

    /**
     * @brief setHostConfig This method sets a new values of the host configuratiun.
     * @param hostConfig This is new value of the host configuration.
     */
    void setHostConfig(const HostConfiguration &hostConfig);

private:
    HostConfiguration _hostConfig;
};
}
#endif // ICONFIGURATION_H

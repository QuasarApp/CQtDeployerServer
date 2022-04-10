//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#ifndef IDISTRIBUTOR_H
#define IDISTRIBUTOR_H

namespace CQT {

class IConfiguration;
/**
 * @brief The iDistributor class This is main interface for deploy repositories on server.
 */
class iDistributor
{
public:
    iDistributor() = default;
    virtual ~iDistributor();


    /**
     * @brief setConfiguraion This method sets confgura
     * @param config This is pointer to the new configuration
     * @return true if the configuration sets successfull.
     * @note The iDistributor object will delete the config object selfly when its will be destroyed
     * @note This method not check config object to compatibility with own implementation.
     *  So you need to validate config object using dynamic_cast operator in a implementation of the deploy method.
     */
    bool setConfiguraion(const IConfiguration* config);

    /**
     * @brief deploy This method deploy new update or release of the deployament application on server.
     * @return true if the application deployed successful
     */
    virtual bool deploy() = 0;

private:
    const IConfiguration* _configuration = nullptr;
};
}
#endif // IDISTRIBUTOR_H

//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#ifndef PACKAGE_H
#define PACKAGE_H
#include <abstractdata.h>
#include "CQtServer_global.h"



namespace CQT {

class IConfiguration;
class iDistributor;

/**
 * @brief The Package class This is class with deployed package. The deployed package should be deploy on the server repository.
 * 1. The cqtdeployer main tool prepare the package.
 * 2. The cqtdeployer main tool send the pacakge to the server cqtdeployer tool.
 * 3. The server tool deploy package on the own host.
 */
class CQTSERVER_EXPORT Package: public QH::PKG::AbstractData {
public:
    Package();

    bool isValid() const override;
    bool copyFrom(const QH::PKG::AbstractData *other) override;
    QString toString() const override;

    // StreamBase interface

    /**
     * @brief config This method return the pointer to the current configuration.
     * @return pointer to the cnfiguration.
     */
    IConfiguration *config() const;

    /**
     * @brief setConfig This method sets new configuration for this package object.
     * @param config pointer to new configuration.
     * @note This method remove old configuration if it exists.
     */
    void setConfig(IConfiguration *config);

    /**
     * @brief packkageData This method retun the physical data of the deployed distribution.
     * @return reference to the physical data.
     */
    const QByteArray& packageData() const;

    /**
     * @brief setPackkageData This method sets new data of the distributionkit.
     * @param packkageData new data of the distributionkeit.
     */
    void setPackkageData(const QByteArray &packkageData);

protected:
    QDataStream &fromStream(QDataStream &stream) override;
    QDataStream &toStream(QDataStream &stream) const override;

    /**
     * @brief initConfiguration This method must be init new object of the Cnfiguration.
     * each package type should be contains own configuration type.
     * @return pointer to the configuration type.
     * @note This method uses for init data object from the bytesaArray.
     */
    virtual IConfiguration * initConfiguration() const = 0;

    /**
     * @brief initDistribute This method must be init distribute of this pacakge data.
     * @return pointer of the distibuteobject.
     */
    virtual iDistributor* initDistribute() const = 0;

private:
    IConfiguration *_config = nullptr;
    QByteArray _packageData;
};
}

#endif // PACKAGE_H

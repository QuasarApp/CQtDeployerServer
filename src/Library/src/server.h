//#
//# Copyright (C) 2021-2021 QuasarApp.
//# Distributed under the lgplv3 software license, see the accompanying
//# Everyone is permitted to copy and distribute verbatim copies
//# of this license document, but changing it is not allowed.
//#

#ifndef SERVER_H
#define SERVER_H

#include "abstractnode.h"
namespace CQT {

/**
 * @brief The Server class  This is implementation of the CQtDeployer Server.
 *  Exmaple of the base implemnentation:
 *
 *  \image html ServerImplementation.svg width=800px

 */
class Server : public QH::AbstractNode
{
    Q_OBJECT
public:
    Server();
};
}
#endif // SERVER_H

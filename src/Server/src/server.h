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
public:
    Server();
};
}
#endif // SERVER_H

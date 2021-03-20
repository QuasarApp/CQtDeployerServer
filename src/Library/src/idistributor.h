#ifndef IDISTRIBUTOR_H
#define IDISTRIBUTOR_H

namespace CQT {

/**
 * @brief The iDistributor class This is main interface for deploy repositories on server.
 */
class iDistributor
{
public:
    iDistributor();
    virtual bool deploy();
};
}
#endif // IDISTRIBUTOR_H

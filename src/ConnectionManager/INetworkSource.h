#pragma once

#include "INetworkSource.h"

namespace gmockdemo
{
namespace network{
    enum class ConnectionState
    {
        undefined,
        open,
        transferring,
        closed
    };
    class INetworkSource
    {
    public:
        virtual ~INetworkSource(){};
        virtual void open() = 0;
        virtual void transferData(char data, unsigned int size) = 0;
        virtual void close() = 0;
    };
}
}

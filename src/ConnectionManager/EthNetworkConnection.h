#pragma once

#include <string>

#include "INetworkSource.h"

namespace gmockdemo
{
namespace network
{
    class EthNetworkConnection : public INetworkSource
    {
        uint transmitSize;
    public:
        EthNetworkConnection(std::string);
        //virtual ~EthNetworkConnection();
        void open();
        void transferData(char data, unsigned int size);
        void close();
    };
}
}

#include "EthNetworkConnection.h"

namespace gmockdemo
{
namespace network
{
    EthNetworkConnection::EthNetworkConnection(std::string ident)
    {
        transmitSize = 1024;
    }

    //virtual EthNetworkConnection::~EthNetworkConnection()
    //{
    //
    //}

    void EthNetworkConnection::open()
    {
        ;
    }
    void EthNetworkConnection::transferData(char data, unsigned int size)
    {
        ;
    }
    void EthNetworkConnection::close()
    {
        ;
    }
}
}

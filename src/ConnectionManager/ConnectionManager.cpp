#include "ConnectionManager.h"
namespace gmockdemo
{
namespace network{

ConnectionManager::ConnectionManager(){
    auto sources = std::vector<INetworkSource>();
}

void ConnectionManager::addSource(std::shared_ptr<INetworkSource> const iSource)
{
    sources.push_back(iSource);
}

void ConnectionManager::sendData()
{
    ;
}

void ConnectionManager::removeSource()
{
    ;
}
}
}

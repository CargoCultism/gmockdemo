#pragma once

#include <memory>
#include <vector>

#include "INetworkSource.h"

namespace gmockdemo
{
namespace network{
    class ConnectionManager
    {
        std::vector<std::shared_ptr<INetworkSource>> sources;
    public:
        ConnectionManager();
        void addSource(std::shared_ptr<INetworkSource> const);
        void sendData();
        void removeSource();
    };
}
}

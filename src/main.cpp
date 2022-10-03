#include <iostream>

#include "ConnectionManager/ConnectionManager.h"
#include "ConnectionManager/EthNetworkConnection.h"

using namespace gmockdemo::network;

int main(int argc, char* argv[])
{
    std::cout<<"In main"<<std::endl;

    //std::shared_ptr<IConnectionInterface> ci = new ConcreteConnectionInterface();
    auto mgr = std::make_unique<ConnectionManager>();
    //sources.push_back(std::make_shared(eth));
    mgr->addSource(std::make_shared<EthNetworkConnection>("eth0"));
    mgr->addSource(std::make_shared<EthNetworkConnection>("eth1"));
    //mgr->sendData();

    std::cout<<"Exiting"<<std::endl;
    return 0;
}

#include <iostream>
#include <string>
#include <memory>
#include <thrift/transport/TSocket.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/protocol/TBinaryProtocol.h>

using namespace apache::thrift;
using namespace apache::thrift::transport;
using namespace apache::thrift::protocol;

int main(){


    std::cout << "Chat App v0.1" << std::endl;

    
    while(true){

    std::cout << "-------------------" << std::endl;
    std::cout << "1. Login" << std::endl;
    std::cout << "2. Register" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "> ";

    int choice;
    std::cin >> choice;
    
    if(choice == 1) {
        std::cout << "Insert username: ";
        std::string username;
        std::cin >> username;

        std::shared_ptr<TTransport> socket(new TSocket("localhost", 9090));
        std::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
        // Erstellen des Protokolls
        std::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));

        // Erstellen des Client-Objekts
        bankServerClient client(protocol);

        // Öffnen der Verbindung
        transport->open();
  
    }

    if(choice == 3) break;

    }


}
#include <iostream>


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
  
    }

    if(choice == 3) break;

    }


}
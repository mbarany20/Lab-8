//include headers and libraries
#include "Library.h"
#include <cstring>
#include <iostream>
#include <algorithm>

Library myLibrary;

int main(){
   int final;
   while (true){
    // std::cout<<"What operation would you like to do?"<<std::endl;
    char input;
    std::cin >> input;
    std::string bookName;
    std::getline(std::cin, bookName);

     switch (input) {
        case 'a': {
            // std::string bookName;
            // std::cout << "Enter the name of the book to add: ";
            // std::getline(std::cin, bookName);
            myLibrary.addBook(bookName);
            break;
        }
        case 'r': {
            // std::string bookName;
            // std::cout << "Enter the name of the book to remove: ";
            // std::getline(std::cin, bookName);
            myLibrary.removeBook(bookName);
            break;
        }
        case 'p':
            std:cout << "\n\nLibrary Contents" <<endl;
            myLibrary.print();
            break;
        case 'q':
            return 0;
    }
   }
    return 0;
}

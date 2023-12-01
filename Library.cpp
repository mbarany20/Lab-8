#include "Library.h"
#include <iostream>
#include <unordered_set>

Library::Library() {
    books.reserve(100); // Reserve space for 100 books
}

bool Library::addBook(const std::string& bookName) {
    if (books.count(bookName) > 0) {
        return false;
    }

    books.insert(bookName);
    return true;
}

bool Library::removeBook(const std::string& bookName) {
    if (books.erase(bookName) > 0) {
        return true;
    }
    return false;
}

void Library::print() const {
    for (const std::string& book : books) {
        std::cout << book << std::endl;
    }
}

// Library Management System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Book.h"

const int LIBRARY_SIZE = 5;

void initializeLibrary(Book library[]) {
    library[0].setBookDetails("1984", "George Orwell", "12345");
    library[1].setBookDetails("To Kill a Mockingbird", "Harper Lee", "23456");
    library[2].setBookDetails("The Great Gatsby", "F. Scott Fitzgerald", "34567");
    library[3].setBookDetails("Moby Dick", "Herman Melville", "45678");
    library[4].setBookDetails("Pride and Prejudice", "Jane Austen", "56789");
}

int main() {
    Book library[LIBRARY_SIZE];
    initializeLibrary(library);

    std::string isbn;
    while (true) {
        std::cout << "Enter the ISBN of the book you wish to borrow (or '0' to quit): ";
        std::cin >> isbn;

        if (isbn == "0") {
            std::cout << "Exiting the system. Goodbye!\n";
            break;
        }

        bool found = false;
        for (int i = 0; i < LIBRARY_SIZE; i++) {
            if (library[i].isAvailable() && library[i].borrowBook()) {
                std::cout << "Book borrowed successfully!\n";
                found = true;
                break;
            }
            else if (!library[i].isAvailable()) {
                std::cout << "The book is unavailable.\n";
                found = true;
                break;
            }
        }

        if (!found) {
            std::cout << "No book found with the given ISBN.\n";
        }
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

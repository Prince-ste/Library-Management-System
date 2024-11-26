#include "Book.h"
#include <iostream>

// Default constructor
Book::Book() : title(""), author(""), isbn(""), availability(true) {}

// Method to set book details
void Book::setBookDetails(const std::string& title, const std::string& author, const std::string& isbn) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->availability = true; // By default, the book is available
}

// Method to display book details
void Book::displayBookDetails() const {
    std::cout << "Title: " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "ISBN: " << isbn << "\n";
    std::cout << "Availability: " << (availability ? "Available" : "Borrowed") << "\n";
}

// Method to borrow the book
bool Book::borrowBook() {
    if (availability) {
        availability = false;
        std::cout << "The book has been borrowed successfully.\n";
        return true;
    }
    else {
        std::cout << "The book is already borrowed and unavailable.\n";
        return false;
    }
}

// Method to return the book
void Book::returnBook() {
    availability = true;
    std::cout << "The book has been returned successfully.\n";
}

// Method to check availability
bool Book::isAvailable() const {
    return availability;
}



#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool availability;

public:
    // Constructor
    Book();

    // Methods to set and get book details
    void setBookDetails(const std::string& title, const std::string& author, const std::string& isbn);
    void displayBookDetails() const;

    // Methods to borrow and return the book
    bool borrowBook();
    void returnBook();

    // Method to check availability
    bool isAvailable() const;
};



#pragma once
#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& b);

    void showReviewsOfBook(std::string title) const;

    void searchInReviewText(std::string text) const;
    void searchByReviewer(std::string name) const;
};

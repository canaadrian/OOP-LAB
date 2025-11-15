#include "Library.h"
#include <iostream>

void Library::addBook(const Book& b) {
    books.push_back(b);
}

void Library::showReviewsOfBook(std::string title) const {
    for (auto& b : books) {
        if (b.getTitle() == title) {
            for (auto& r : b.getReviews()) {
                std::cout << "[" << r.getReviewer() << "] "
                          << r.getContent() << "\n";
            }
        }
    }
}

void Library::searchInReviewText(std::string text) const {
    for (auto& b : books) {
        for (auto& r : b.getReviews()) {
            if (r.getContent().find(text) != std::string::npos) {
                std::cout << b.getTitle() << " - " 
                          << r.getReviewer() << ": " 
                          << r.getContent() << "\n";
            }
        }
    }
}

void Library::searchByReviewer(std::string name) const {
    for (auto& b : books) {
        for (auto& r : b.getReviews()) {
            if (r.getReviewer() == name) {
                std::cout << b.getTitle() << " -> " << r.getContent() << "\n";
            }
        }
    }
}

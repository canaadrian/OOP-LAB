#include "Book.h"

Book::Book(std::string title) {
    this->title = title;
}

void Book::addReview(const Review& r) {
    reviews.push_back(r);
}

std::string Book::getTitle() const { return title; }

const std::vector<Review>& Book::getReviews() const {
    return reviews;
}

#pragma once
#include <string>
#include <vector>
#include "Review.h"

class Book {
private:
    std::string title;
    std::vector<Review> reviews;

public:
    Book(std::string title = "");

    void addReview(const Review& r);
    std::string getTitle() const;
    const std::vector<Review>& getReviews() const;
};

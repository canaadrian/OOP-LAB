#include "Review.h"

Review::Review(std::string reviewer, std::string content) {
    this->reviewer = reviewer;
    this->content = content;
}

std::string Review::getReviewer() const { return reviewer; }
std::string Review::getContent() const { return content; }

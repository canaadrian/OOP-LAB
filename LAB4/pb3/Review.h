#pragma once
#include <string>

class Review {
private:
    std::string reviewer;
    std::string content;

public:
    Review(std::string reviewer = "", std::string content = "");
    std::string getReviewer() const;
    std::string getContent() const;
};

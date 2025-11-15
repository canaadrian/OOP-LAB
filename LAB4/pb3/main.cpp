#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    Library lib;

    Book b1("Harry Potter");
    b1.addReview(Review("Alex", "Amazing book!"));
    b1.addReview(Review("Mara", "Loved the magic scenes."));

    Book b2("Dune");
    b2.addReview(Review("Alex", "A masterpiece. The world-building is great."));
    b2.addReview(Review("George", "Too complex but interesting."));

    lib.addBook(b1);
    lib.addBook(b2);

    cout << "\n=== Reviews for Harry Potter ===\n";
    lib.showReviewsOfBook("Harry Potter");

    cout << "\n=== Search text 'great' ===\n";
    lib.searchInReviewText("great");

    cout << "\n=== Reviews left by Alex ===\n";
    lib.searchByReviewer("Alex");

    return 0;
}

#include <iostream>

// Toggle this between 1 and 0
#define USE_HEADER1 1  

#if USE_HEADER1 == 1
    #include "header1.h"
#else
    #include "header2.h"
#endif

using namespace std;

int main() {
    cout << "Calling f(): ";
    f();    // automatically calls the version from the included header
    return 0;
}

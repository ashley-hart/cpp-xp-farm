
// Preprocessor stateements are not just for including header!
// A preprocessor statement that replaces every instance of
// 'INTEGER' in our code with 'int'
// #define INTEGER int
# include <iostream> // ads over 50K lines of code.
#include "log.h"

// void log(const char* message);

//# if 1  // true, saying 0 will cause this code to be ignored.
int multiply(int a, int b) {
    log("Multiply!");
    return a * b;
}
//# endif

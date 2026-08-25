#include <iostream>
# include "log.h"

//Const char* == a type that can hold a string of text
void log(const char* message)
{
    std::cout << message << std::endl;
}

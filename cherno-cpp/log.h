# pragma once 
// Ensures that code in a file is only ever compiled once, does not prevent us 
// from using this header in multiple translation units... but it does prevent 
// it from being included 2 or more times in the same translation unit.
// VERY USEFUL, for cases where we have a chain of includes, where one or more of the 
// includes redefines a function with the same signature (leaving you with duplicate functions)

// This is another way of ensuring that code was compiled only once...
// Dont foget the endif at the end of the file.
// This is still viable, but pragma once is the new way of doing it, watch out for 
// this pattern in legacy code though
// #ifndef _LOG_H
// #define _LOG_H

// BRACKETS VS QUOTES FOR #include STATEMENTS
// #include <iostream> // files inside of certain folders on our system
// #include "header_name.h" // files relative to the current file.

// IMPORTANT: C stdlib files typically have a .h at the end, but C++ stdlib files do NOT
// #include <stdio.h>  // C
// #include <iostream> // C++ (yes, iostream IS a file!)


// Using static here ensures that any file that imports log.h 
// will have their own internal (local) copy of the methods in 
// this header file. This prevents us from getting duplicate symbol 
// errors during the compilation stage, and makes it so that the 
// link can properly "hook up" our code when we want a single function 
// to be availible to multiple files.
// static void log(const char* message)
// {
//     std::cout << message << std::endl;
// }


// We can also make it inline --> this takes out fucntion body and just drops the code from the function directly into the code block (its like a statement replacement).
// inline void log(const char* message)
// {
//     std::cout << message << std::endl;
// }

// We can also move this defintion into its own transition unit and leave the declaration here. 
// THis way, we can assure any units that want to use this header that "Yes, log() will return 
// in Avengers Doomsday!" (i.e. you will be given the full function definition when all of the 
// object files are linked together - we swear it!)

// This lets us keep code out of the header and in the translation units instead. :)
void log(const char* message);

// #endif
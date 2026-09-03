// PREPROCESSING STATEMENTS
// Anything beginning with a # is a preprocessor statement.
// These get executed just before compilation.

// include - finds a file called iostream and pastes all the
// code in it to the head of this document.
// iostream is an examaple of a header file.
// iostream lets us use the cout() and cin() methods
#include <iostream>

void log(const char* message);
int multiply(int a, int b);
// Function declaration to bypass the compiler... it is up to us though to make sure the linker can run the right code later on. If the linker can't find the right code, we ger a liner error.

int add(int a, int b) {
    log("Addition!");
    return a + b;
}

int subtract(int a, int b) {
    log("Subtraction!");
    return a - b;
}

// Static functions are only accessible from the file they are currently in.
// They CANNOT be called/used from other cpp files (Q: does this apply to classes too? I think in Java it does -- or was that private?)
static float divide(float num, float denom){
    log("Division!");
    return num / denom;
}

class Player {
    public: 
        int x, y;
        int speed;

        // int getX() {
        //     return x;
        // }
        // int getY(){
        //     return y;
        // }

    Player() {
        x = 0;
        y = 0;
        speed = 100;
        std::cout << "New player obj instantiated." << std::endl;
    }

    Player(int xStartPos, int yStartPos, int baseSpeed) {
        x = xStartPos;
        y = yStartPos;
        speed = baseSpeed;
        // std::cout << "New player obj instantiated w/ custom coords. \d \d", xStartPos, yStartPos << std::endl;
    }

    // Pass in player by reference since we will 
    // be modifyig the player object.
    void Move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }

    int getSpeed() {
        return speed;
    }

    void setSpeed(int newSpeed) {
        speed = newSpeed;
    }
};



// Entry point of the application.
// The main function is a special exception when it comes down to
// return types. By default a retval of 0 is assumed and it does
// not need to be explicilty stated.
int main(int argc, const char* argv[]) {

    Player player = Player(10, 11);
    player.Move(-1, -1);
    std::cout << "Player postion: " << player.x << " " << player.y << std::endl;

    // char, short, int, long, long long;
    // How we use these is really up to us --there are very little rules in C++ after all. :)
    // However, bear in mind that the biggest difference with all of these is the size of the data that they can support & represent.
    // char c = 'A'; // MUST use single quotes
    // char c_num = 65; // Prints 'A' due to ASCII values (65 = 'A')
    // std::cout << c << std::endl;
    // std::cout << c_num << std::endl;

    // float (4 bytes), double (8 bytes), long double (16 -- usually... depends on system)
    // IMPORTANT: float values MUST tack on the f at the end to make into a float... otherwise it will be logged as a bool.
    // float f = 5.5f; 
    // double var = 5.2;

    // bool - T/F (1 byte of memory, even tho we technically need a single bit to represent it. We still use a byte though due to mem addressing)
    // bool b = false;

    // The sizeof() operator allows us to see the size of a datatype
    // std::cout << sizeof(bool) << std::endl;

    // Declaring Pointers & References 
    // bool* b_ptr = ...;
    // bool& b_ref = ...;

    // int x = 8; // -2B to +2B, due to data size limits and the fact that it is signed.
    // unsigned int y = 10; // 0 to 4.29B
    // std::cout << x << std::endl; 
    // Think of operators such as '<<' as functions (because they
    // are basically shorthand for functions!)
    // std::cout << "Hello, World!\n" << std::endl;
    // std::cin.get(); // Hitting ENTER makes the program terminate.
    // log("Hello, World! From CMake! :D");
    // std::cout << add(5, 8) << std::endl;
    // std::cout << subtract(5, 8) << std::endl;
    // std::cout << multiply(5, 8) << std::endl;
    // std::cout << divide(5, 8) << std::endl;
    return 0;
}


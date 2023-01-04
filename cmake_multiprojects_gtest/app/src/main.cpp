#include <iostream>
#include <awesomeLib/awesomeHeader.h>

int main(int argc, char* argv[]) {
    std::cout << "Not Hello World! The random number is " << getRandomNumber() << std::endl;

    //clear the input stream and wait for any key press.
    std::cin.sync();
    std::cin.get();
    return 0;
}
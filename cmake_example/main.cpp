#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Hello World" << std::endl;

    //clear the input stream and wait for any key press.
    std::cin.sync();
    std::cin.get();
    return 0;
}
#include <iostream>
#include <openssl/ssl.h>

int main(int argc, char* argv[]) {

    SSL_library_init();
    std::cout << "SSL_library_init is called" << std::endl;

    return 0;
}
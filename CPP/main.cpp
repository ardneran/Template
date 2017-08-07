#include <iostream>

int main(int argc, char** argv) {
    for (int index = 0; index < argc; ++index) {
        std::cout << index << ":" << argv[index] << std::endl;
    }
    return 0;
}

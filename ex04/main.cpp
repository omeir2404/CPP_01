#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
    std::ifstream file;
    std::string s1;
    std::string s2;

    file.open(argv[1]);
    if (!file.is_open()) {
        std::cout << "Error opening file" << std::endl;
        return 1;
    }
    s1 = argv[2];
    s2 = argv[3];
    
    return 0;
}
#include "header.hpp"

int main() {

    std::ifstream *input = new std::ifstream("input.txt", std::ifstream::in);
    int result = calculateCalibrationValueSum(input);


    std::cout << result << std::endl;
    input->close();
    delete input;

    return 0;
}



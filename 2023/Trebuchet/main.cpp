#include "header.hpp"

int main() {

    std::ifstream* input = new std::ifstream("input.txt", std::ifstream::in);
    int result = calculateCalibrationValueSum(input);

    std::cout << result << std::endl;
    input->close();
    delete input;

    return 0;
}

int calculateCalibrationValueSum(std::ifstream* input){
    int sum = 0;
    std::string* line = new std::string();
    while (std::getline(*input,*line)){
        sum += getCalibrationValueFromLine(line);
    }
    
    delete line;
    return sum;
}

int getCalibrationValueFromLine(std::string* line){

    int left = 0;
    int right = line->length()-1;
    int calibration_value = 0;

    while (!(std::isalnum((*line)[left]) && std::isalnum((*line)[right])))
    {
        if (!std::isalnum((*line)[left]))
            left++;
        if (!std::isalnum((*line)[right]))
            right--;
    }

    calibration_value = int((*line)[left]) + int((*line)[right]);

    return calibration_value;


}
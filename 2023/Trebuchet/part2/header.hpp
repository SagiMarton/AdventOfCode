#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

int getCalibrationValueFromLine(std::string* line);
int calculateCalibrationValueSum(std::ifstream* input);


#endif
// Copyright (c) 2022 Ferdous Sediqi All rights reserved.
// Created by: Ferdous
// Created on: May 27. 2022
// In this program we ask user for their marks
// then, push user marks to a listusing a function CalcAverage find the average marks.


#include <iostream>
#include <ctime>
#include <list>
#include <iomanip>
#include <string>
using  std::string;


float CalcAverage(std::list<float> listOfInt) {
    float  sum = 0;
    float average;
    for(int aNum : listOfInt) {
        sum = sum + aNum;
        average = sum / listOfInt.size();
    }
    std::cout << "Total Mark " <<sum<< std::endl;
    return average;
}

int main() {
    // list and vairables
    std::list<float> listOfInt;
    std::string num_string;
    float FindAvg;
    int num_int;
    // do while to ask user input and push it to list
    do {
        std::cout << "Enter your mark: ";
        std::cin >> num_string;
        if (num_string == "-1" ){
                break;
            }else{
            // cast user input to int
                try {
                    num_int = std::stof(num_string);
                    if (num_int > 0 and num_int <= 100) {
                        listOfInt.push_back(num_int);
                    } else{
                        std::cout <<"Marks cannot be over 100 and below 0." << std::endl;
                        break;
                    }
            }
            // catch invalid input 
                catch (std::invalid_argument) {
                    std::cout <<"Invalid Input. Input was not an integer" << std::endl;
    }
}

}
    // loop back
    while (true);
    // call the function
    FindAvg = CalcAverage(listOfInt);
    std::cout << std::fixed << std::setprecision(1)  
    << "Your average mark is " << FindAvg<<"%" << std::endl;

}

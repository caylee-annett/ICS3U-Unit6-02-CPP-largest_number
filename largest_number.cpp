// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on June 2021
// This program finds the largest number from an array of random numbers

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int CalculateNumber(std::array<int, N> listOfNumbers) {
    // This function finds the largest number

    int largest_number = 0;

    for (int loopCounter = 0; loopCounter < listOfNumbers.size();
         loopCounter++) {
        if (listOfNumbers[loopCounter] >= largest_number) {
            largest_number = listOfNumbers[loopCounter];
        }
    }

    return largest_number;
}

int main() {
    // This function generates the random numbers
    std::array<int, 10> numberList;
    int randomNumber;
    int number;

    // Process
    std::cout << "This program prints the largest number from a list."
        << std::endl;
    std::cout << "" << std::endl;
    for (int loopCounter = 0; loopCounter < numberList.size(); loopCounter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumber = idist(rgen);
        std::cout << "The random number is: " << randomNumber << std::endl;
        numberList[loopCounter] = randomNumber;
    }

    // Call functions
    number = CalculateNumber(numberList);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The largest number is: " << number << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}

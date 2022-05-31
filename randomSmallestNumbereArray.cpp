// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On May 2022
// this program is a biggest number array finder

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int BiggestNumber(std::array<int, N> randomNum) {
    // this function will find the largest number out of the 10
    int smallestNumber = randomNum[10];
    // process
    for (int minVal : randomNum) {
        if (minVal < smallestNumber) {
            smallestNumber = minVal;
        }
    }
    return smallestNumber;
 }


main() {
    // this function will gather the 10 random numbers
    std::array<int, 10> randomNum;
    int randomNumber;
    int smallestNum = 0;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 100);  // [0,9]


    // output
    for (int counter = 0; counter < 10; counter++) {
        randomNumber = idist(rgen);
        randomNum[counter] = randomNumber;
        std::cout << "The random number is " << randomNumber << std::endl;
    }

        smallestNum = BiggestNumber(randomNum);

        std::cout << "\nThe smallest number is " << smallestNum << std::endl;

    std::cout << "\nDone." << std::endl;
}

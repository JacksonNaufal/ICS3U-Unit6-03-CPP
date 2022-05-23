// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022

#include <iostream>
#include <random>
#include <array>

template<size_t N>
int BiggestNumber(std::array<int, N> array) {
    // this function will find the largest number out of the 10
    int biggestNumber = 0;
    // process
    for (int counter = 0; counter < array.size(); counter++) {
        if (biggestNumber < array[counter]) {
            biggestNumber = array[counter];
        }
    }
    return biggestNumber;
 }


main() {
    // this function will gather the 10 random numbers
    std::array<int, 10> randomNum;
    int randomNumber;
    int biggestNum = 0;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 100);  // [0,9]


    // output
    for (int counter = 0; counter <= 11; counter++) {
        randomNumber = idist(rgen);
        randomNum[counter] = randomNumber;
        std::cout << "The random number is " << randomNumber << std::endl;
    }

        biggestNum = BiggestNumber(randomNum);

        std::cout << "\nThe biggest number is " << biggestNum << std::endl;

    std::cout << "\nDone." << std::endl;
}

#include <iostream>
#include <array>
#include <random>
#include <ctime>

// Constants for grid size
int const maxH = 4;
int const maxW = 4;

// Unicode symbols array (using UTF-8 string literals)
std::string const unicodeArray[10] = {
    u8"🍉", // Watermelon
    u8"🍌", // Banana
    u8"🍍", // Pineapple
    u8"🍏", // Green Apple
    u8"🌭", // Hot Dog
    u8"🌮", // Taco
    u8"🌽", // Ear of Corn
    u8"🍄", // Mushroom
    u8"🍅", // Tomato
    u8"🍆"  // Eggplant
};

int main() {
    // Initialize random seed
    std::srand(time(NULL));

    // Create a 4x4 grid
    std::array<std::array<std::string, maxW>, maxH> gav;

    // Fill the grid with random symbols
    for (int i = 0; i < maxH; i++) {
        for (int j = 0; j < maxW; j++) {
            gav.at(i).at(j) = unicodeArray[rand() % 10];
        }
    }

    // Display the 4x4 grid
    for (int i = 0; i < maxH; i++) {
        for (int j = 0; j < maxW; j++) {
            std::cout << gav.at(i).at(j) << " ";
        }
        std::cout << std::endl;
    }

    // Pause to keep the console open
    int test;
    std::cin >> test;

    return 0;
}

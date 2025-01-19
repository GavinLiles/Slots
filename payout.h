#ifndef PAYOUT_H
#define PAYOUT_H

#include <string>
#include <array>

constexpr int maxW = 4;
constexpr int maxH = 4;
extern std::array<std::array<std::string, maxW>, maxH> gav;
extern std::string const unicodeArray[10] = {
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

#endif
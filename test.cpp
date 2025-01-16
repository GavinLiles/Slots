#include<iostream>
#include <array>
#include <random>
#include <ctime>
int const maxH = 4;
int const maxW = 4;
std::wstring const  unicodeArray[10] = {
        L"\U0001F349", // Watermelon
        L"\U0001F34C", // Banana
        L"\U0001F34D", // Pineapple
        L"\U0001F34F", // Green Apple
        L"\U0001F32D", // Hot Dog
        L"\U0001F32E", // Taco
        L"\U0001F33D", // Ear of Corn
        L"\U0001F344", // Mushroom
        L"\U0001F345", // Tomato
        L"\U0001F346"  // Eggplant
    };
int main(){
    //random seed
    std::srand(time(NULL));

// 4*4 GAME
//symbols 10
//symbol 1 = U+1F349
//symbol 2 = U+1F34C
//symbol 3 = U+1F34D
//symbol 4 = U+1F34F
//symbol 5 = U+1F32D
//symbol 6 = U+1F32E
//symbol 7 = U+1F33D
//symbol 8 = U+1F344
//symbol 9 = U+1F345
//symbol 10 = U+1F346


//code
//an array to do the slots
std::array<std::array<std::wstring,maxH>,maxW> gav;
for(int i=0; i < maxH; i++ ){
    for(int j=0; j < maxH; j++ ){
        gav.at(i).at(j) = unicodeArray[rand() %10];
    }
}
for(int i=0; i < maxH; i++ ){
    for(int j=0; j < maxH; j++ ){
       std::wcout << gav.at(i).at(j);
    }
}
}
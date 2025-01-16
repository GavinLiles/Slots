#include<iostream>
#include <array>
int maxH = 4;
int maxW = 4;
int main(){
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
std::array<std::array<int,4>,4> gav;
for(int i=0; i < maxH; i++ ){
    for(int j=0; j < maxH; j++ ){
        gav.at(i).at(j) = 1;
    }
}
}
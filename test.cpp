#include<iostream>
#include <array>
int maxH = 4;
int maxW = 4;
int main(){
// 4*4 GAME
//symbols 10
//symbol 1 = U+1F4A3


//code
//an array to do the slots
std::array<std::array<int,4>,4> gav;
for(int i=0; i < maxH; i++ ){
    for(int j=0; j < maxH; j++ ){
        gav.at(i).at(j) = 1;
    }
}
}
#include <iostream>
#include <string>
#include <array>
#include "payout.h"
#include <random>

//initialize needed variables
//int pay_array_H = 4, pay_array_L = 4;
int low_pay = 0, med_pay = 0, high_pay = 0;
//import external variables
//extern const int maxW;
//extern const int maxH;
extern std::array<std::array<std::string, maxW>, maxH> gav;

int main(){
    for (int i = 0; i < maxH; ++i) {
        for (int j = 0; j < maxW; ++j) {
            std::cout << gav[i][j] << " ";
        }
        std::cout << std::endl;
    }
    //initialize random seed
    //std::random_device rd;
    //generate random number using mt19937 dont ask me wtf that is
    //std::mt19937 gen(rd());
    //generate number between 0 and 9
    //std::uniform_int_distribution<> dis(0, 9);
    //initialize callable random number
    //int randomNumber = dis(gen);
    //generate framework for 4x4 grid
    //std::vector<std::vector<int>> pay_line(pay_array_H, std::vector<int>(pay_array_L));
    //this NOW fills the grid with random numbers
    //for (int i=0; i<maxH; i++) {
        //for(int j=0; j<maxW; j++){
            //pay_line[i][j] = dis(gen);

    //this should print the grid, stolen code from main for learning
    for (int i=0; i<maxH; i++) {
        for (int j=0; j<maxW; j++){
            std::cout << gav.at(i).at(j) << " ";
}
        //starts new line after first row is generated
        std::cout << std::endl;
}   //check for matches
    for (int i=0; i < maxH; i++){
        for (int j=0; j < maxW; j++){
            //pay tracks total match count
            int pay = 0;
            //stops when checking j 2 & 3 and checks for match
            while (j < (maxW - 1) && gav.at(i).at(j) == gav.at(i).at(j+1)){
                //move to next check after finding match
                j++;
                pay++;
            }
            switch(pay){
                //if 2 match
                case(1):
                low_pay++;
                break;
                //if 3 match
                case(2):
                med_pay++;
                break;
                //if 4 match
                case(3):
                high_pay++;
                break;
            }
        }
    }
    std::cout << "Low: " << low_pay << std::endl;
    std::cout << "Medium: " << med_pay << std::endl;
    std::cout << "High: " << high_pay << std::endl;

    return 0;
}
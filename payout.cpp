#include <iostream>
#include <string>
#include <array>
#include "payout.h"
#include <random>

//initialize needed variables
int pay_array_H = 4, pay_array_L = 4;
int low_pay = 0, med_pay = 0, high_pay = 0;

int main(){
    //initialize random seed
    std::random_device rd;
    //generate random number using mt19937 dont ask me wtf that is
    std::mt19937 gen(rd());
    //generate number between 0 and 9
    std::uniform_int_distribution<> dis(0, 9);
    //initialize callable random number
    int randomNumber = dis(gen);
    //generate framework for 4x4 grid
    std::vector<std::vector<int>> pay_line(pay_array_H, std::vector<int>(pay_array_L));
    //this NOW fills the grid with random numbers
    for (int i=0; i<pay_array_H; i++) {
        for(int j=0; j<pay_array_L; j++){
            pay_line[i][j] = dis(gen);
}
}
    //this should print the grid, stolen code from main for learning
    for (int i=0; i<pay_array_H; i++) {
        for (int j=0; j<pay_array_L; j++){
            std::cout << pay_line[i][j] << " ";
}
        //starts new line after first row is generated
        std::cout << std::endl;
}
    for (int i=0; i < pay_array_H; i++){
        for (int j=0; j < pay_array_L; j++){
            int pay = 0;
            while (j < (pay_array_L - 1) && pay_line[i][j] == pay_line[i][j+1]){
                
                j++;
                pay++;          
            }
            switch(pay){
                case(1):
                low_pay++;
                break;
                case(2):
                med_pay++;
                break;
                case(3):
                high_pay++;
                break;
            }
        }
    }
    std::cout << "Low: " << low_pay << std::endl;
    std::cout << "Medium: " << med_pay << std::endl;
    std::cout << "High: " << high_pay << std::endl;
}
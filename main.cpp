#include <iostream>
#include <array>
#include <random>
#include <ctime>

// Constants for grid size
int const maxH = 4;
int const maxW = 4;
int low_pay = 0, med_pay = 0, high_pay = 0;


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

    //Calculate Payout
    for (int i=0; i <= (maxH-1); i++){
        for (int j=0; j < 1; j++){
            //pay tracks total match count
            int pay = 0;
            //while i & j are in bounds
            while ((j < (maxW) && i < (maxH))){
                //if i is on final line
                if (i == maxW){
                    //check matches for only final line
                    for (int x=3; x < (maxW - 1); x++){
                        for (int y=0; y < (maxH - 1); y++){
                            if ((gav.at(x).at(y) == gav.at(x).at(y+1))){
                                std:: cout << "Final line match x: " << x << "y: " << y << "\n";
                                y++;
                                pay++;
                            }
                        }
                        break;
                    }
                }
                //if icons in 1st & 2nd position on Line 'x' AND Line 'x' 1st pos & Line 'x+1' 2nd pos DO NOT MATCH, skip iteration
                if ((gav.at(i).at(j) != gav.at(i).at(j+1)) && (gav.at(i).at(j) != gav.at(i+1).at(j+1))){
                    i++;
                    continue;
                }
                //if icons in 1st & 2nd position on line 'x' match
                if ((gav.at(i).at(j) == gav.at(i).at(j+1))){
                    //if icons on Line 'x' 1st pos & Line 'x+1' 2nd pos match, increase counter
                    if ((gav.at(i).at(j) == gav.at(i+1).at(j+1))){
                    std:: cout << "If 0,0 and 1,1 match i: " << i << "j: " << j << "\n";
                    j++;
                    pay++;
                }
                //increase counter
                    std:: cout << "If 0,0 and 0,1 match i: " << i << "j:" << j << "\n";
                    j++;
                    pay++;
                //2nd check for if Line 'x' 1st pos & Line 'x+1' 2nd pos match but Line 'x' pos 1 & 2 DO NOT MATCH, increase counter
                }else if ((gav.at(i).at(j) == gav.at(i+1).at(j+1))){
                    std:: cout << "If 0,0 and 1,1 match i: " << i << "j: " << j << "\n";
                    j++;
                    pay++;
                }
                //next iteration if no matches
                std:: cout << "No match i: " << i << "j: " << j << "\n";
                j++;
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

    // Pause to keep the console open
    int test;
    std::cin >> test;

    return 0;
}

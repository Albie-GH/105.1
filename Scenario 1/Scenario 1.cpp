// Albie Ng
// Scenario 1

#include <iostream>
#include "Yacht.h"
#include "Location.h"

int Yacht::yachtCount = 0; // Initilize static member variable of Yacht Count

int main()
{
    Yacht yachts[3]; // used an array for fixed number of yachts 

    std::cout << "**************Ocean Race 2023-24**************\n\n";

    // loop through each yacht to input locations
    for (int i = 0; i < 3; i++) {
        std::cout << "**************************************\n";
        if (i == 0) {
            std::cout << "Enter the Location of the first ship:\n";
        }
        else if (i == 1) {
            std::cout << "Enter the Location of the second ship:\n";
        }
        else if (i == 2) {
            std::cout << "Enter the Location of the third ship:\n";
        }
        yachts[i].get_pos(yachts[i]); // call function to input locations
    }

    std::cout << "\n**************Welcome to Ocean Race 2023-24**************\n";

    // loop through and print all yacht's locations
    for (int i = 0; i < 3; i++) {
        yachts[i].print(yachts[i]);
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

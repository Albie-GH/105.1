// Albie Ng
// Scenario 1

#include <iostream>

class Yacht
{
private:
    int number;
    class Location
    {
    public:
        int degrees;
        float minutes;
        char direction;

    public:
        void getpos(int degs, float mins, char dir) {
            std::cout << "Input degrees between 0 and 180: ";
            std::cin >> degs;
            std::cout << "Input minutes between 0 and 60: ";
            std::cin >> mins;
            std::cout << "Input direction (E/W/N/S): ";
            std::cin >> dir;
            degrees = degs;
            minutes = mins;
            direction = dir;
        }
    };
    Location locations[2];

public:
    void print() {
        std::cout << locations[0].degrees;
    }

};


int main()
{
    std::cout << "Hello World!\n";
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

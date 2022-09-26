// program used to calculate the area of one of three shapes given in a menu. 
#include <iostream> 
#include <iomanip>
using namespace std;
 
int main()
{
    const double PI = 3.14159;  // defines PI as a constant and assigns its value to 3.14159
    int userInput;              // used to take a numerical value
    double numValue;            // records the value of the length / radius

// variables used specifically for the right triangle calculations
    double base;                // records the base of a right triangle
    double height;              // records the height of a right triangle

    double area;                // stores the final calculated area of chosen shape

// MENU
    cout << "Program to calculate areas of objects" << endl
         << "1 -- square" << endl
         << "2 -- circle" << endl
         << "3 -- right triangle" << endl
         << "4 -- quit" << endl;
    cin >> userInput;   // recieves user input

// checks which menu option is selected, then executes the appropriate calculations based on userInput
    if (userInput == 1) // calculates area of square
    {
	    cout << "Length of the Square: ";
	    cin >> numValue;
	    area = (numValue * numValue);
	    cout << "Area = " << fixed << setprecision(2) << area << endl;
    }

    else if (userInput == 2)    // calculates area of circle
    {
	    cout << "Radius of the Circle: ";
	    cin >> numValue;
	    area = (PI * (numValue * numValue));
	    cout << "Area = " << fixed << setprecision(2) << area << endl;
    }

    else if (userInput == 3)    // calculates area of a right triangle
    {
	    cout << "Base of the right triangle: ";
	    cin >> base;
	    cout << "Height of the right triangle: ";
	    cin >> height;
	    area = (.5 * (base * height));
	    cout << "Area = " << fixed << setprecision(2) << area << endl;
    }

    else if (userInput == 4) {} // quits the menu and proceeds to end the program

    else                        // input validation
        { cout << "You entered an invalid choice. Good bye!" << endl; }

    return 0;
}
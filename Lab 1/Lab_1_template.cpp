/***
 * CSE 2010 Fall 2023
 * Lab #1
 * Jeremiah Rivera 007634309
 * 9/15/2023
 * 
 * This lab involves compliling and executing C++ programs using I/O commands and control flow statements.
 * 
 * 1. The most challenging part of this lab was forgetting to compile the code everytime I attempt to run the program.
 * 2. The solution to this problem was after every adjustment I make, I have to recompile the code so it will run with the most recent edit.
 *
 * 
***/


#include <iostream>
#include <cmath>
using namespace std;

// main() takes in no arguments and performs the arithmetic operations based on user selection
// returns 0 when the program terminates without errors. 
// otherwise it returns the number where an invalid selection was made
int main() {
    cout << "Select a number from 1-6.\n \
            1) sqrt(x)\n \
            2) pow(x,y)\n \
            3) ceil(x/y)\n \
            4) floor(x/y)\n \
            5) x/y\n \
            6) x%y\n";

    // instantiate your variables, x and y as int of value 0  
    // make modifications from int to doubles for section 5.2 here
    double x = 0;
    double y = 0;
    int user_selection = 0;

    cin >> user_selection;

    if (cin.fail()) {
        cerr << "Invalid\n";
        return -1;
        cout << "You selected " << user_selection << endl;
    }
    else if (user_selection == 1){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 1;
            }
            cout << "sqrt(" << x << ") is " << sqrt(x) << endl;
        }
    else if (user_selection == 2){
            cout << "Requesting x\n";
            cin >> x;
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 2;
            }
            cout << "pow of " << x << "to" << y << "is" << pow(x,y) << endl;
        // This function calculates the power of given variable.
        }        
    else if (user_selection == 3){
            cout << "Requesting x\n";
            cin >> x;
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 3;
            }
            cout << "ceiling of " << x << "/" << y << "is" << ceil(x/y) << endl;
        // This function calculates the ceiling of given variable and rounds the numbers up.
        }        
    else if (user_selection == 4){
            cout << "Requesting x\n";
            cin >> x;
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 4;
            }
            cout << "floor of " << x << "/" << y << "is" << floor(x/y) << endl;
        // This function calculates the floor of the variable and rounds number down.
        }        
    else if (user_selection == 5){
            cout << "Requesting x\n";
            cin >> x;
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 5;
            }
            cout << x << " / " << y << " is " << x/y << endl;
        // This function divides the two given variables without rounding.
        }
        /*****
         *  Provide your own code for when the user selects numbers 2 to 5. 
         *  You should NOT have to create your own functions. 
         *  As indicated in sqrt(x), you should call pow(x,y), ceil(x/y), floor(x/y). 
         * 
         *  Make sure to understand what each function does. 
         *  (Hint: ceil() will not behave as expected when x and y are ints. You 
         *  should see the distinction between ceil() and floor() 
         *  when doubles are involved.)
         * 
         * 
         * 
        *****/
        else if (user_selection == 6){
            cout << "Requesting x\n";
            // the reason we created distinct x and y variables (mod_x, mod_y) 
            // is because '%' only expects int and never doubles. 
            int mod_x = 0.0;
            int mod_y = 0;
            cin >> mod_x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 6;
            }
            cout << "Requesting y\n";
            cin >> mod_y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 6;
            }

            cout << mod_x << "/ " << mod_y  << " is " << mod_x%mod_y << endl;
        } else {
            printf("Invalid selection\n");
        }
    return 0;
}

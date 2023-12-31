/***
* CSE 2010 Fall 2023
* Lab #2
* Jeremiah Rivera 007634309
* 9/29/2023
*
* In this program, I am organizing code into functions and apply those functions to different data types.
*
* The most difficult challenge for me was trying to understand the underlying issue with the call function in int main(). Learning how to correctly code string operations would most likely fix the print under int main().
*
***/
#include <iostream>
#include <string>
using namespace std;
/**
* @brief power(): calculates and returns the base to the power of exponent
*
* @param base int: base number that is positive
* @param exponent int: exponent that is positive that the base is raised to
* @return int
*/
int power (int base, int exponent){
    int power_output = 1;
    for(int i = 0; i < exponent; i++){
        power_output *= base;
    }
    return power_output;
}
/**
* @brief floorDivision(): calculates and returns the dividend / divisor using for
loops
*
* @param dividend int: whole number to be dividend that is positive
* @param divisor int: whole number that is positive to divide the dividend by
* @return int
*/
int floorDivision(int dividend, int divisor){
    int floor_div_output = 0;
    while (dividend - divisor >= 0) {
        dividend -= divisor; // dividend = dividend - divisor;
        floor_div_output += 1;
}
    return floor_div_output;
}
/**
* @brief modDivision(): returns the remainder from dividend / divisor
*
* @param dividend int: whole number to be dividend that is positive
* @param divisor int: whole number that is positive to divide the dividend by
* @return int
*/
int modDivision(int dividend, int divisor){
    int mod_output = dividend;
    while (mod_output - divisor >= 0) {
        mod_output -= divisor; // dividend = dividend - divisor;
}
    return mod_output;
}
/**
* @brief print(): prints out the statement "Output of {operation} between {x}
* and {y} is {output}"
*
* @param operation string: which should be any of the following: power,
floorDivision,
* modDivision
* @param x int: first variable that is positive
* @param y int: second variable that is positive
* @param output int: output from conducting the operaiton
*/
void print(string operation, int x, int y, int output){
    cout << "Output of " << operation << " between " << x << " and " << \
    y << " is : " << output << endl;
}
/**
* @brief op(): returns the name of the operation based on the following cases:
* 1 : power
* 2 : floorDivision
* 3 : modDivision
* All other cases: invalid
* This function supplies the operation to print()
* @param selection int: ranging from 1 to 3 that specifies the operation. All
other cases results
* in "invalid"
* @return string
*/
string operation(int selection){
    if (selection == 1){
        return "power";
    } else if (selection == 2){
        return "floorDivision";
    } else if (selection == 3){
        return "modDivision";
    } else {
        return "invalid";
    }
}

int main()
{
// test input for power
int x = 2;
int y = 5;
int base = x;
int exponent = y;
// power
int power_output = power(base, exponent);
// print
string operation = operation(1);
print(operation, x, y, output);

// test input for floor and modulos
x = 65;
y = 11;
// floor division
int dividend = x;
int divisor = y;
int floor_div_output = floorDivision(dividend, divisor);
//print
string operation = operation(2);
print(operation, x, y, output);

// reset test input for modulos division
// for Section 5.2 where pass by reference is use, do NOT reset
// divend and divisor to x and y in order to get the example
dividend = x;
divisor = y;
// modulos division
int mod_output = modDivision(dividend, divisor);
}
//print
string operation = operation(3);
print(operation, x, y, output);
}
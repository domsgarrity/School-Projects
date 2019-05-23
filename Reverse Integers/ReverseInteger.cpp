/*
 * Name: Dominic Garrity, CS202, Assignment 7
 * Description: Reverse digits using recursion
 * Input: any int number, for example 8675309
 * Output: 9035768
 */

#include <iostream>

using namespace std;

int reverseDigit(int n);

int main(){

int num;
    
    cout << endl << endl;
    cout << "Please enter a positive integer > ";
    cin >> num;
    
    cout << endl << endl;
    
    cout << "Reverse is " << reverseDigit(num) << endl << endl;
    
    return 0;
}

/*
* function_identifier: will return input integer in reverse order
* parameters: a positive integer value
* return value: integer value in reverse order
*/ 
int reverseDigit(int n){
    static int rem, rev;
    
    if (n == 0)
        return rev;
    else{
        rem = n%10;
        rev = rev*10 + rem;
        reverseDigit(n/10);
    }
 }

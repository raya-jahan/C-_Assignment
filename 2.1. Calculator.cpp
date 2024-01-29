#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
    //Declaration section
    float result, num1, num2;
    int opt;
    
    //Menu section
    cout << "Welcome to the Calculator program" << endl;
    cout << "\nSelect one option from the list below:\n" ;
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    
    //Get operation
    cout << "Please enter your selection:\n";
    cin >> opt;
    
    //Checking if user gave right selection
    if (opt == 1 || opt == 2 || opt == 3 || opt == 4 ){
        
    //Input first number
    cout << "Enter first number:\n";
    cin >> num1;
    
    //Input second number
    cout << "Enter second number:\n";
    cin >> num2;
    
    //Calculate result based on option
    if (opt == 1){
        result = num1 + num2;
    }
    
    else if ( opt == 2){
        result = (num1) - (num2);
        }
    else if (opt == 3){
        result = num1 * num2;
         }
    else if (opt == 4){
         //Checking if division by 0
        if (num2 == 0 ){
            cout << "\nDivision by 0" << endl;
            result = num1/num2;
        }
         else {
            result = num1/num2;
}
     }
      //Output result
    cout << "\nThe result is :" << result << endl; 
}   
    else {
        cout << "\nPlease select an option from 1 to 4 \n";
    }
    return 0;  
}

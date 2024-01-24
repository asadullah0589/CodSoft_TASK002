/*#include<iostream>


using namespace std;

int main()
{

	    cout << "________SIMPLE CALCULATOR__________";

        double num1, num2, result;
        char operation;

        cout << "\nEnter first number: ";
        cin >> num1;

        

        cout << "Enter second number: ";
        cin >> num2;


        cout << "\nEnter operator (+, -, *, /): ";
        cin >> operation;

        
        switch (operation)
        {
        case '+':

            result = num1 + num2;
            break;


        case '-':

            result = num1 - num2;
            break;


        case '*':
            result = num1 * num2;
            break;
        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
            }
            else
            {
                cout << "Error: Division by zero is not possible!" << endl;
                
            }
            break;

        default:
            cout << "Error: Invalid operator!" << endl;
            
        }

        
        cout << "Result: " << result << endl;

        return 0;
    }
    */



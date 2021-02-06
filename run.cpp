#include <iostream>
#include <math.h>
using namespace std;

int main(){
	cout << "============= Calculator ===============" << endl;
	cout << "Author: r4sso | github.com/r4sso\n";
	cout << "========================================" << endl;
	
	char op;
	float num1, num2;
	
	cout << "Enter operator [+] [-] [*] [/]: ";
	cin >> op;
	
	cout << "Example: 10 5" << endl;
	cout << "Enter two operands: ";
    cin >> num1 >> num2;
    
    switch(op)
    {
		case '+':
            cout << num1+num2 << endl;
            break;

        case '-':
            cout << num1-num2 << endl;
            break;

        case '*':
            cout << num1*num2 << endl;
            break;

        case '/':
            cout << num1/num2 << endl;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
	}
}

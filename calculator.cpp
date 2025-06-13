#include<iostream>
using namespace std;
class calculator {
private:
	double a, b;
public:
	calculator(double x = 0, double y = 0) : a(x), b(y) {}
	double add() const { return a + b; }
	double subtract() const { return a - b; }
	double multiply() const { return a * b; }
	double divide() const {
		if (b != 0) return a / b;
		else cout << "cannot divide by zero" << endl;
		return 0;
	}
};
int main() {
	double x, y;
	char choice, e;
	bool flag = true,flag2 = true;
	while (flag2) {
		cout << "\t\tCALCULATOR" << endl;
		cout << "---------------------------------------------------------------------------------\n";
		cout << "Enter first number: ";
		cin >> x;
		cout << "Enter second number: ";
		cin >> y;
		calculator calc(x, y);
		flag = true;
		while (flag) {
			cout << "select operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
			cin >> choice;
			switch (choice) {
			case '1':
			case'+':
				cout << x << " + " << y << " = " << calc.add() << endl;
				break;
			case '2':
			case '-':
				cout << x << " - " << y << " = " << calc.subtract() << endl;
				break;
			case '3':
			case '*':
				cout << x << " * " << y << " = " << calc.multiply() << endl;
				break;
			case '4':
			case '/':
				if (y != 0) {
					cout << x << " / " << y << " = " << calc.divide() << endl;
				}
				else {
					cout << "Cannot divide by zero." << endl;
				}
				break;
			case '5':
			case 'e':
			case 'E':
				cout << "Exiting calculator." << endl;
				flag = false;
				break;
			default:
				cout << "Invalid choice. Please select a valid operation." << endl;
				break;
			}
		}
			cout << "do you want to continue? (y/n): ";
			cin >> e;
			if (e == 'n' || e == 'N') {
				flag2 = false;
			}
			else if (e != 'y' && e != 'Y') {
				cout << "Invalid input. Exiting calculator." << endl;
				flag2 = false;
			}
		
	}
	return 0;
}

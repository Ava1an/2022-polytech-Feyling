#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int x;
	cin >> x;

	char z;
	cin >> z;

	int y;
	cin >> y;

	switch (z) {
	case '+':
		cout << x + y;
		break;
	case '-':
		cout << x - y;
		break;
	case '*':
		cout << x * y;
		break;
	case '/':
		cout << x / y;
		break;
	case '^':
		cout << pow(x, y);
		break;
	default:
		cout << "No values entered.";
		break;
	}
	cout << endl;
	return 0;
}


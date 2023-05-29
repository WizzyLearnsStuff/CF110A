#include<iostream>

using namespace std;

int main() {
	long int n = 0;
	char c;
	while(cin.get(c) && c != '\n') {
		if (c == '4' || c == '7') n++;
	}

	do {
		int tmp = n % 10;
		if (tmp != 4 && tmp != 7) {
			cout << "NO";
			return 0;
		}
		n = n / 10;
	} while (n > 0);

	cout << "YES";
	return 0;
}

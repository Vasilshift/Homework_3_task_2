#include <iostream>
using namespace std;

int main() {

	int i, a, b, c, s = 0;

	for (i = 100; i <= 999; i++) {

		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;

		if (a == b || a == c || c == b) {
			
				s++;

		}
	
	}
	
	cout << s;
	
	return 0;
}
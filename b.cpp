#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int c = 1;
	while(true) {
		if(a/(c*10) < 1) {
			break;
		}
		c *= 10;
	}

	int e = a;
	int d = 0;
	for(int n = c;n <= 1;n /= 10) {
		d += e/n;
		e -= n*d;
		cout << d << e << endl;

	}
	if(a%d == 0) {
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
}




		



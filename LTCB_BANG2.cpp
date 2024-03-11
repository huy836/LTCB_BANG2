#include <iostream>
using namespace std;
int main() {
	int sonhap; cout << "nhap so\n"; cin >> sonhap;
	for (int i = 1; i <= 10; i++) {
		cout << sonhap << "*" << i << "=" << sonhap * i << endl;
	}
	return 0;
}
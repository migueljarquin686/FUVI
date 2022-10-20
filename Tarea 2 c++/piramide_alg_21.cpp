// Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	int altura;
	int i;
	int j;
	cin >> altura;
	for (i=altura;i>=1;i--) {
		for (j=0;j<=(altura-i-1);j++) {
			cout << "";
		}
		for (j=1;j<=i;j++) {
			cout << "*";
		}
		cout << "" << endl;
	}
	return 0;
}


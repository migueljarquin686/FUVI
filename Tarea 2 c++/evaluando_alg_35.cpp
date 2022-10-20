//Autor Miguel Flores

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float f;
	int x;
	cout << "Ingrese el valor de de el numero X" << endl;
	cin >> x;
	if (x>0) {
		f = ((pow((x-2),2))/2)+((pow((x-4),4))/4)+((pow((x-6),6))/6);
		cout << "Para X positivo el valor es: " << f << endl;
	} else {
		if (x<0) {
			f = ((pow((x+2),2))/2)+((pow((x+4),4))/4)+((pow((x+6),6))/6);
			cout << f << endl;
			cout << "Para X negativo el valor es: " << f << endl;
		}
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}


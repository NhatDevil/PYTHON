#include <iostream>
#include <cmath>
using namespace std;

int main () {
	float xa, ya, xb, yb, xc, yc, r, ab, ac, bc, p;
	cout << "nhap x a ";
	cin >> xa;
	cout << "nhap y a ";
	cin >> ya;
	cout << "nhap x b ";
	cin >> xb;
	cout << "nhap y b ";
	cin >> yb;
	cout << "nhap x c ";
	cin >> xc;
	cout << "nhap y c ";
	cin >> yc;
	ac = sqrt(pow((xc-xa),2) + pow((yc-ya),2));
	bc = sqrt(pow((xc-xb),2) + pow((yc-yb),2));
	ab = sqrt(pow((xb-xa),2) + pow((yb-ya),2));
	p = (ab + ac + bc)/3;
	if( ((xc-xa)*(yc-yb) != (yc-ya)*(xc-xb)) && (ac < bc + bc)){
		cout << "YES";
		cout << sqrt(p*(p-ac)*(p-bc)*(p-ab));
		cout << ((ab*ac*bc)/(sqrt(p*(p-ac)*(p-bc)*(p-ab))))/4;
	} else {
		cout << " NO ";
	}
}

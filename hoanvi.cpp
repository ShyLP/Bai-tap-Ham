#include<iostream>
using namespace std;
void hv(int& a, int& b) 
{
	int temp = a;
	a = b;
	b = temp;
}
int main() 
{
	int a, b;
	cout << " a ";
	cin >> a;
	cout << " b ";
	cin >> b;
	hv(a,b);
	cout << a << b;
}

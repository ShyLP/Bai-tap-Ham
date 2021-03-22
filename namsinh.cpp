int tinhtuoi(int tuoi)
{return 2021 - tuoi;}
int main() 
{
	int n;
	cout << " nhap tuoi ";
	cin >> n;
	int namsinh = tinhtuoi(n);
	cout << " nam sinh : "<< namsinh;
}

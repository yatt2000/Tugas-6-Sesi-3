#include <iostream>
using namespace std;

int S (int n);
main()
{
	int n;
	cout<<"Masukkan n = "; cin>>n;
	cout<<"Deret S = 2+4+6+8+10+....+n \n";
	cout<<"Jumlah deret S = "<<S(n);
}
int S (int n)
{
	if (n==1)
	return (1);
	else 
	return (n + S (n-1));
}

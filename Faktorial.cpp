#include <iostream>
#include <conio.h>
using namespace std;

int faktorial (int bil)
{
	if(bil==1)
	return 1;
	else
	return bil*faktorial(bil-1);
}
int main ()
{
	int n;
	cout<<"\tFungsi Rekursif - FAKTORIAL"<<endl;
	cout<<"\t==========================="<<endl;
	cout<<"\nMasukkan nilai n : ";
	cin>>n;
	cout<<"\nFaktorial "<<n<<"! = "<<faktorial(n)<<endl;
	_getche();
	return 0;
}

#include <iostream>
#include <string>
#include <ctime>
using namespace std;
string genrandom ()
{
	string arl = "";
	string cadena = "123456789abcdefghijklmnopqrstuvwxyz";
	for (int i = 0 ; i <= 193 ; i++)
		{
			arl += cadena.at(rand() % 35);
		}
	return arl;
}

int main ()
{
	srand(time(NULL));
	string cadenaFinal ;
	cadenaFinal =	genrandom();

	cout << cadenaFinal << endl;

	return 0;
}

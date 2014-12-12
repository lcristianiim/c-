#include<iostream>
#include<ctime>
#include<cstdlib>
#include <algorithm>
#include <iterator>

using namespace std;




//Main program
int main()
{
int v1[50], v2[50], v3[50],x,y, contor;

cout << "Introduceti doua numere mari dimensiune maxima 50 cifre.";
cout << endl;

//Initializarea primului vector
cout << "Introduceti lungimea primului numar:  ";
cin >> x;

for (int i = 0; i < 50; ++i)
{
	v1[i] = 0;
}

contor = 0;
for (int i = 50; i > 0 ; i=i-1)
{
	if (i > 50 - x)
	{
		
		cout << "v1[" << 51 - x + contor << "] = ";
		cin >> v1[51 - x + contor];
		contor++;
	} else {
		v1[i] = 0;
	}
}

//Initializarea celui de al doilea vector
cout << "Introduceti lungimea celui de al doilea numar:  ";
cin >> y;

for (int i = 0; i < 50; ++i)
{
	v2[i] = 0;
}

contor = 0;
for (int i = 50; i > 0 ; i=i-1)
{
	if (i > 50 - y)
	{
		
		cout << "v1[" << 51 - y + contor << "] = ";
		cin >> v2[51 - y + contor];
		contor++;
	} else {
		v2[i] = 0;
	}
}

for (int i = 0; i <= 50; i=i+1)
{
	cout << v1[i];
}
cout << endl;

for (int i = 0; i <= 50; i=i+1)
{
	cout << v2[i];
}

//OPERATIA DE ADUNARE
	int rest = 0;
//implementam v3 cu 0;
	for (int i = 0; i <= 50; ++i)
	{
		v3[i] = 0;
	}
cout << endl;


//little design
for (int i = 0; i < 51; ++i)
	{
		cout << "_";
	}
cout << endl;

//suma vectorilor
for (int i = 50; i > 0; i=i-1)
{
	if ( (v2[i] + v1[i]) < 10 ) {
		v3[i] = v3[i] + v2[i] + v1[i];
	} else {
		v3[i] = (v3[i] + v2[i] + v1[i]) % 10;
		v3[i-1] = (v3[i] + v2[i] + v1[i]) / 10;
	}
}

for (int i = 0; i <= 50; ++i)
{
	cout << v3[i];
}

};

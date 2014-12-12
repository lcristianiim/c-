// mai trebuie facut *,/,% 

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
int v[50], v1[50], n, m, r[50], r1[50] ,t = 0;
cout << "n = ";
cin >> n;
cout << "m = ";
cin >> m;
for (int i = 0; i < n; i++)
{
cout << "v[" << i << "] = ";
cin >> v[i];

}
for (int j = 0; j < n; j++)
{
v1[j] = 0;
}
for (int i = 0; i <m; i++)
{
cout << "v1[" << i << "] = ";
cin >> v1[i];


}
for (int i = 0; i < n; i++)
{
r1[i] = v[i] + v1[i] + t;
r1[i] = r1[i] % 10;
t = (v[i] + v1[i] + t) / 10;
}

for (int i = 0; i < n; i++)
{
if ((v[i] - v1[i]) < 0)
{
v[i] += 10;
v[i + 1] -= 1;
r[i] = v[i] - v1[i];
v[i] -= 10;
//v[i + 1] += 1;
}
else
{
r[i] = v[i] - v1[i];
}
}

cout << "v1[]={";
for (int i = 0; i < n; i++)
{
cout << v[i] << " ";
}
cout << "}";
cout << endl;
cout << "v2[]={";
for (int i = 0; i < n; i++)
{
cout << v1[i] << " ";
}
cout << "}";
cout << endl;
cout << "R1[+] = ";
for (int i = 0; i < n; i++)
{
cout << r1[i] << " ";
}
cout << endl;
cout << "R[-] = ";
for (int i = 0; i < n; i++)
{
cout << r[i] << " ";
}
system("pause");
}

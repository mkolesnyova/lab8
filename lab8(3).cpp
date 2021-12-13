#include <iostream>
using namespace std;
int main()
{
	const int d = 15;
	string s[d];
	char a;
	int i, n, m;
	cout << " vvedite slovo : ";
	for (i = 0; i < d - 1; i++)
		cin >> s[i];
	s[d - 1] = '\0';
	cout << " m= ";
	cin >> m;
	cout << " n= ";
	cin >> n;
	a = s[m];
	s[m] = s[n];
	s[n] = a;
	cout << " novoe slovo :" << s;

}

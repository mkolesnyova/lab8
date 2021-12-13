#include <iostream>
using namespace std;
int main()
{
	const int d = 10;
	char s[d];
	char i;
	int n, m;
	cout << " vvedite slovo : ";
	for (i = 0; i < d - 1; i++)
		cin >> s[i];
	s[d - 1] = '\0';
	cout << " m= ";
	cin >> m;
	cout << " n= ";
	cin >> n;
	i = s[m];
	s[m] = s[n];
	s[n] = i;
	cout << " novoe slovo :" << s;

}

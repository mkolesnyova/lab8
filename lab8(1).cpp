#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, i, d;
	char str[20];
	cout << " n= ";
	cin >> n;
	cout << " name : ";
	cin >> str;
	d = strlen(str);
	cout << "d =" << d << endl;
	str[d] = '\0';
	for (i = 0; i < n; i++)
		cout << str << endl;
	return(0);
}

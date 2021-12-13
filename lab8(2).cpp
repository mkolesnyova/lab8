#include <iostream>
using namespace std;
int main()
{
	int k = 0, i;
	const int n = 20;
	char str[n];
	char a('y');
	cout << " vvedite predlozhenye : ";
	for (int i = 0; i < n - 1; i++)
	{
		cin >> str[i];
		if ((str[i] == a) && ((i + 1) % 2 != 1) && (i > 0)) k++;
	}
	str[n - 1] = '\0';
	cout << "vy vveli :" << str << endl;
	for (i = 0; i < k; i++)
		cout << a << endl;
}





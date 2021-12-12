#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int k=0, i;
	const int n = 20;
	char str[n];
	char a ;
	a = 'и';
	cout << "Введите предложение : ";
	for (int i = 0; i < n-1; i++)
	{
		cin >> str[i];
		if ((str[i] == a) && ((i + 1) % 2 != 1) && (i > 0)) k++;
	}
	str[n-1] = '\0';
	cout << "Вы ввели:" << str << endl;
	for (i = 0; i < k; i++)
		cout << a << endl;
	return 0;
}





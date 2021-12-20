#include <iostream>
using namespace std;
int main()
{
	char a[10], b[10], f;
	int i, k=0, j, v=0;
	cout << "vvedite 1 slovo: ";
	for (i = 0; i < 10; i++)
		cin >> a[i];
	a[9] = '/0';
	cout << "vvedite 2 slovo: ";
	for (i = 0; i < 10; i++)
		cin >> b[i];
	b[9] = '/0';
	for (i = 0; i < 10; i++)
	{
		f = a[i];
		for (j = 0; j < 10; j++)
			if (f == a[j]) k++;
		if (k == 1) for (j = 0; j < 10; j++) if (f == b[i]) v++;
		if (v == 1) cout << f << " ";
	}

}
/*#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int M(int G[],int i, bool &log, int &size)
{
	int size2, dop2;

	if (G[i] < 100 && G[i] > 9)
	{
		size++;
		log = true;
	}
	else log = false;
	return log, size;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	bool log;
	int P[40], i, size, G[40], j=0, dop;
	cout << "Начальный массив\n";
	for (i = 0; i < 40; i++)
	{
		G[i] = rand() % 1000 + 1;
		cout << setw(10) << G[i]; 
		M(G, i, log, size);
		if (log == true)
		P[j++] = G[i];
	}
		// cout << "\n" << dop << " " << j << " " << P[j++] << "\n";
			cout << "\n" << size << "\n";
	if (size != 0)
	{
		cout << "\nМассив P\n";
		for (i = 0; i < size; i++)
			cout << setw(5) << P[i];
	}
	else cout << "В массиве нет двузначных чисел";

}*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
using namespace std;
auto M(int G[], int i, bool& r, int& size)
{
	int size2, dop2;

	if (G[i] < 100 && G[i] > 9)
	{
		size++;
		r = true;
	}
	else r = false;
	return r;
	//return size;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	bool r;
	int P[40], i, size = 0, G[40], j = 0, dop;
	cout << "Начальный массив\n";
	for (i = 0; i < 40; i++)
	{
		G[i] = rand() % 1000 + 1;
		cout << setw(10) << G[i];
		M(G, i, r, size);
		if (r == true)
			P[j++] = G[i];
	}
	// cout << "\n" << dop << " " << j << " " << P[j++] << "\n";
//	cout << size << "\n";
	if (size != 0)
	{
		cout << "\nМассив P\n";
		for (i = 0; i < size; i++)
			cout << setw(5) << P[i];
	}
	else cout << "В массиве нет двузначных чисел";
}


//	cout << P[j++] << " " << G[i] << " " << j << " " << i << " "<<dop << "\n";

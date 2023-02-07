#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <math.h>
using namespace std;
// cоздание массива
void createArray(int mas[], int n)
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 49 - 5;
	}
}
// вывод массива
void printArray(int mus[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << mus[i] << "   ";
	}
	cout << endl; 
}
// среднее арифметическое 
float crArofm(int mus[], int n)
{
	int kol = 0;
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (mus[i] > 0)
		{
			kol++;
			sum += mus[i];
		}
		return (float) sum / kol;
	}
}
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int tik[20], tak[25], musiv[25];
	//cout << "Введите количество элементов: "; cin >> n; 
	createArray(musiv, 25);
	cout << "Массив \n"; 
	printArray(musiv, 25); 

	createArray(tik, 20);
	cout << "\nМассив tik \n";
	printArray(tik, 20);

	createArray(tak, 25);
	cout << "\nМассив tak \n";
	printArray(tak, 25);
	cout << "\nСреднее арифметическое положительных значений массива mus " << crArofm(musiv, 25);
	cout << "\nСреднее арифметическое положительных значений массива tik " << crArofm(tik, 20);
	cout << "\nСреднее арифметическое положительных значений массива tak " << crArofm(tak, 25);


}


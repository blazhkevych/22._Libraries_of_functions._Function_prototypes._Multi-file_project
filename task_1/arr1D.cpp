#include <iostream>
#include <iomanip> // Содержит setw.
using namespace std;

void Init1DArrayRandom(int arr[], int size, int min, int max) // Функция инициализирует одномерный массив псевдослучайными числами с заданным диапазоном.
{
	for (int i = 0; i < size; i++) // Заполняем одномерный массив псевдослучайными числами.
		arr[i] = rand() % (max - min + 1) + min;
}

void Print1DArray(int arr[], int size) // Функция выводит одномерный массив на экран.
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << arr[i]; // setw(4) - Задает ширину поля отображения для следующего элемента в потоке.
}

void Reverses1DElemArray(int arr[], int size) // Функция меняющая порядок следования элементов передаваемого ей одномерного массива на противоположный.
{
	for (int i = 0; i < size / 2; i++)
	{
		int temp{ arr[i] };
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}
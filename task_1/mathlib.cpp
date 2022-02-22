#include <iostream>
using namespace std;

bool IsPrime(int number) // Функция проверяющая является ли число простым.
{
	if (number < 2)
		return false;
	for (int i = 2; i * i <= number; i++) // Проверка до квадратного корня из number.
		if (number % i == 0) // Если найден другой делитель числа number.
			return false;
	return true;
}

int NumberOfPrimesIn1DArr(int arr[], int size) // Функция возвращающая количество простых чисел в одномерном массиве.
{
	int count{ 0 };

	for (int i = 0; i < size; i++)
		if (IsPrime(arr[i]))
			count++;

	return count;
}

int Factorial(int number) // Функция, вычисляющая факториал переданного ей числа.
{
	int result{ 1 };

	for (int i = 1; i <= number; i++)
	{
		result = result * i;
	}
	return result;
}

int DegreeOfNumber(int base_of_degree, int exponent) // Функция, вычисляет степень числа.
{
	long long unsigned int result{ 1 }, i{ 0 };
	do
	{
		result = result * base_of_degree;
		i++;
	} while (i < exponent);
	return result;
}

int SumOfNumbersBetweenStartEnd(int start, int end) // Функция, вычисляет сумму чисел из диапазона между ними.
{
	int sum{ 0 }, i = start + 1;
	while (i < end)
	{
		sum += i;
		i++;
	}
	return sum;
}

bool PerfectNumber(int number) // Функция проверки на совершенное число.
{
	int sum{ 0 };
	for (int j = 1; j < number; j++)
	{
		if (number % j == 0)
		{
			sum += j;
		}
	}
	if (number == sum)
		return true;
	return false;
}

void PrintPerfectNumber(int start, int end) // Функция печати совершенного числа
{
	for (int i = start; i < end; i++) // Числа из диапазона.
	{
		if (PerfectNumber(i))
		{
			cout << i << ' ';
		}
	}
	/*
	Известные баги:
	При начале 1 и конце 1 ничего не выводит
	*/
}
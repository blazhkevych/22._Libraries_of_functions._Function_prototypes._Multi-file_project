#include <iostream>
using namespace std;

bool IsPrime(int number) // ������� ����������� �������� �� ����� �������.
{
	if (number < 2)
		return false;
	for (int i = 2; i * i <= number; i++) // �������� �� ����������� ����� �� number.
		if (number % i == 0) // ���� ������ ������ �������� ����� number.
			return false;
	return true;
}

int NumberOfPrimesIn1DArr(int arr[], int size) // ������� ������������ ���������� ������� ����� � ���������� �������.
{
	int count{ 0 };

	for (int i = 0; i < size; i++)
		if (IsPrime(arr[i]))
			count++;

	return count;
}

int Factorial(int number) // �������, ����������� ��������� ����������� �� �����.
{
	int result{ 1 };

	for (int i = 1; i <= number; i++)
	{
		result = result * i;
	}
	return result;
}

int DegreeOfNumber(int base_of_degree, int exponent) // �������, ��������� ������� �����.
{
	long long unsigned int result{ 1 }, i{ 0 };
	do
	{
		result = result * base_of_degree;
		i++;
	} while (i < exponent);
	return result;
}

int SumOfNumbersBetweenStartEnd(int start, int end) // �������, ��������� ����� ����� �� ��������� ����� ����.
{
	int sum{ 0 }, i = start + 1;
	while (i < end)
	{
		sum += i;
		i++;
	}
	return sum;
}

bool PerfectNumber(int number) // ������� �������� �� ����������� �����.
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

void PrintPerfectNumber(int start, int end) // ������� ������ ������������ �����
{
	for (int i = start; i < end; i++) // ����� �� ���������.
	{
		if (PerfectNumber(i))
		{
			cout << i << ' ';
		}
	}
	/*
	��������� ����:
	��� ������ 1 � ����� 1 ������ �� �������
	*/
}
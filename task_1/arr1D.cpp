#include <iostream>
#include <iomanip> // �������� setw.
using namespace std;

void Init1DArrayRandom(int arr[], int size, int min, int max) // ������� �������������� ���������� ������ ���������������� ������� � �������� ����������.
{
	for (int i = 0; i < size; i++) // ��������� ���������� ������ ���������������� �������.
		arr[i] = rand() % (max - min + 1) + min;
}

void Print1DArray(int arr[], int size) // ������� ������� ���������� ������ �� �����.
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << arr[i]; // setw(4) - ������ ������ ���� ����������� ��� ���������� �������� � ������.
}

void Reverses1DElemArray(int arr[], int size) // ������� �������� ������� ���������� ��������� ������������� �� ����������� ������� �� ���������������.
{
	for (int i = 0; i < size / 2; i++)
	{
		int temp{ arr[i] };
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}
#include <iostream>
using namespace std;

void PrintPlayingCard(int number) // Функция выводящая на экран переданную ей игральную карту.
{
	switch (number % 9)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
		cout << number % 9 + 6;
		break;
	case 5:
		cout << 'J';
		break;
	case 6:
		cout << 'Q';
		break;
	case 7:
		cout << 'K';
		break;
	case 8:
		cout << 'A';
		break;
	}
	cout << char(6 - number / 9);
}
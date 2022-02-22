bool IsItALeapYear(int year) // �������, ����������� �������� �� ��� ����������.
{
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		return true;
	else
		return false;
}

enum Months
{
	January = 1, // ������, 31 ����
	February = 2, // �������, 28 ���� (� ���������� ���� �������� �������������� ���� � 29 �������.)
	March = 3, // ����, 31 ���� 
	April = 4, // ������, 30 ���� 
	May = 5, // ���, 31 ���� 
	June = 6, // ����, 30 ���� 
	July = 7, // ����, 31 ���� 
	August = 8, // ������, 31 ���� 
	September = 9, // ��������, 30 ���� 
	October = 10, // �������, 31 ���� 
	November = 11, // ������, 30 ���� 
	December = 12 // �������, 31 ���� 
};

bool DateValidationCheck(int day, int month, int year) // �������, ����������� ������������ ��������� �������� ����.
{
	if (year > 0)
	{
		if (month > 0 && month < 13)
		{
			if (
				((IsItALeapYear(year))
					&& (month == February) && (day == 29)) // ���� 29 ������� � ���������� ����.
				|| ((IsItALeapYear(year))
					&& (month == February) && (day > 0 && day < 29)) // ���� 1-28 �������, ���������� ���.
				|| (!(IsItALeapYear(year))
					&& (month == February) && (day > 0 && day < 29)) // ���� 1-28 �������, ������� ���.
				|| ((month == January
					|| month == March
					|| month == May
					|| month == July
					|| month == August
					|| month == October
					|| month == December) && (day > 0 && day < 32)) // ��� ������, � ������� 31 ����.
				|| ((month == April
					|| month == June
					|| month == September
					|| month == November) && (day > 0 && day < 31)) // ��� ������, � ������� 30 ����.
				)
			{
				return true; // ��� �������� �������� ���������.
			}
			else
				return false; // ������ �� ���������� ����.
		}
		else
			return false; // ������ �� ���������� �����. 
	}
	else
		return false; // ������ �� ���������� ���. 
}

int DiffInDaysBetwDates(
	int day1, int month1, int year1,
	int day2, int month2, int year2) // �������, ��������� �������� � ���� ����� ����� ������.
{
	int differenceIs{ 0 }; // ������� �������� � ���� ����� ����� ������.

	if (year1 == year2 && month1 == month2 && day1 == day2) // ���� ���� �����.
	{
		return differenceIs = 0;
	}
	else
	{
		while (!(year1 == year2 && month1 == month2 && day1 == day2)) // ���� ���� �� �����, ��������� ��������� ����.
		{
			switch (month1)
			{
			case April: // ������ ��������� ���� �� ���������, ��� ������� c 30 �����.
			case June:
			case September:
			case November:
				day1++;
				if (day1 > 30)
				{
					day1 = 1;
					month1++;
					if (month1 > 12)
					{
						month1 = 1;
						year1++;
					}
				}
				break;

			case January: // ������ ��������� ���� �� ���������, ��� ������� c 31 ����.
			case March:
			case May:
			case July:
			case August:
			case October:
			case December:
				day1++;
				if (day1 > 31)
				{
					day1 = 1;
					month1++;
					if (month1 > 12)
					{
						month1 = 1;
						year1++;
					}
				}
				break;

			case February: // ������ ��������� ���� �� ���������, ��� ������� (��� ����������� ��� � �� �����������).
				day1++;
				if (!(year1 % 400 == 0 || (year1 % 100 != 0 && year1 % 4 == 0)) && (day1 > 28)) // �� ����������.
				{
					day1 = 1;
					month1++;
					if (month1 > 12)
					{
						month1 = 1;
						year1++;
					}
				}
				else if ((year1 % 400 == 0 || (year1 % 100 != 0 && year1 % 4 == 0)) && (day1 > 29)) // ����������.
				{
					day1 = 1;
					month1++;
					if (month1 > 12)
					{
						month1 = 1;
						year1++;
					}
				}
				break;
			}
			//cout << "��������� ����: " << day1 << '.' << month1 << '.' << year1 << endl;
			differenceIs++;
		}
	}
	return differenceIs;
}

int Get_DOW(int year, int month, int day) // ������� ���������� ���� ������.
{
	int a = (14 - month) / 12;
	int y = year - a;
	int m = month + 12 * a - 2;
	int d = (7000 + (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12)) % 7;

	return d ? d : 7;
}
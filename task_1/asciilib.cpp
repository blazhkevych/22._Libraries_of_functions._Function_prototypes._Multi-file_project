bool alphanumeric(char x) // ������� ����������� �������� �� ���������� �� �������� ��������� - ��������.
{
	if (x >= '0' && x <= '9' || x >= 'A' && x <= 'Z' || x >= 'a' && x <= 'z')
		return true;
	return false;
}
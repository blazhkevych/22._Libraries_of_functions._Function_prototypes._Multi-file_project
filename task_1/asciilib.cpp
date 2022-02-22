bool alphanumeric(char x) // ‘ункци€ провер€юща€ €вл€етс€ ли переданный ей параметр алфавитно - цифровым.
{
	if (x >= '0' && x <= '9' || x >= 'A' && x <= 'Z' || x >= 'a' && x <= 'z')
		return true;
	return false;
}
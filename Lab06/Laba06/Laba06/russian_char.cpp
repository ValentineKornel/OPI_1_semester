#include "russian_char.h"
void codeOfRussianChar()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");
	unsigned char russianchar, bigchar, smallchar;
	cout << "������� ����� �������� �������� ";
	cin >> russianchar;
	if (russianchar < 256 && russianchar > 192)
	{
		bigchar = toupper(russianchar);
		smallchar = tolower(russianchar);
		cout << "��� ��������� ����� " << bigchar << " ����� " << int(bigchar) << endl;
		cout << "��� �������� ����� " << smallchar << " ����� " << int(smallchar) << endl;
		cout << "������� �������� ����� ����� " << smallchar - bigchar << endl;
	}
	else
		cout << "�������� ������ �� �������� �������� �������� ��������" << endl;
}
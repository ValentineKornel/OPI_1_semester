#include "russian_char.h"
void codeOfNumberChar()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");
	unsigned char numberchar;
	cout << "������� ����� ";
	cin >> numberchar;
	if (numberchar > 47 && numberchar < 58)
	{
		cout << "��� ��������� ����� " << numberchar << " ����� " << int(numberchar) << endl;
	}
	else
		cout << "��������� ������ �� �������� ������" << endl;
}
#include "latin_char.h"
void codeOfLatinChar()
{
	setlocale(LC_CTYPE, "Russian");
	char latchar, bigchar, smallchar;
	cout << "������� ����� ���������� �������� ";
	cin >> latchar;
	if (latchar < 123 && latchar > 64)
	{
		bigchar = toupper(latchar);
		smallchar = tolower(latchar);
		cout << "��� ��������� ����� " << bigchar << " ����� " << int(bigchar) << endl;
		cout << "��� �������� ����� " << smallchar << " ����� " << int(smallchar) << endl;
		cout << "������� �������� ����� ����� " << smallchar - bigchar << endl;
	}
	else
		cout << "�������� ������ �� �������� �������� ���������� ��������" << endl;
}
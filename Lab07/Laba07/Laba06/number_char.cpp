#include "russian_char.h"
void codeOfNumberChar()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");
	unsigned char numberchar;
	cout << "Введите число ";
	cin >> numberchar;
	if (numberchar > 47 && numberchar < 58)
	{
		cout << "Код введенной цифры " << numberchar << " равен " << int(numberchar) << endl;
	}
	else
		cout << "Введенный символ не является числом" << endl;
}
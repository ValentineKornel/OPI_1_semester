#include "russian_char.h"
void codeOfRussianChar()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");
	unsigned char russianchar, bigchar, smallchar;
	cout << "Введите букву русского алфавита ";
	cin >> russianchar;
	if (russianchar < 256 && russianchar > 192)
	{
		bigchar = toupper(russianchar);
		smallchar = tolower(russianchar);
		cout << "Код прописной буквы " << bigchar << " равен " << int(bigchar) << endl;
		cout << "Код строчной буквы " << smallchar << " равен " << int(smallchar) << endl;
		cout << "Разница значений кодов равна " << smallchar - bigchar << endl;
	}
	else
		cout << "Введеный символ не является символом русского алфавита" << endl;
}
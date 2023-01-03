#include "latin_char.h"
void codeOfLatinChar()
{
	setlocale(LC_CTYPE, "Russian");
	char latchar, bigchar, smallchar;
	cout << "Введите букву латинского алфавита ";
	cin >> latchar;
	if (latchar < 123 && latchar > 64)
	{
		bigchar = toupper(latchar);
		smallchar = tolower(latchar);
		cout << "Код прописной буквы " << bigchar << " равен " << int(bigchar) << endl;
		cout << "Код строчной буквы " << smallchar << " равен " << int(smallchar) << endl;
		cout << "Разница значений кодов равна " << smallchar - bigchar << endl;
	}
	else
		cout << "Введеный символ не является символом латинского алфавита" << endl;
}
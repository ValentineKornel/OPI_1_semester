#include "latinChar.h"
#include "russianChar.h"
#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int condition;
	cout << "Кодировку символа какого алфавита нужно вывести? (1 - Латиеского, любая другая цифра - Русского)";
	cin >> condition;
	if (condition == 1)
		getUtf8LatinChar();
	else
		getUtf8RussianChar();
}

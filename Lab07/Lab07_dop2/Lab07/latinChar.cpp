#include "latinChar.h"

void getUtf8LatinChar()
{
	setlocale(LC_CTYPE, "Russian");
	int dec_latin_char;
	wchar_t latin_char[] = L"H";
	dec_latin_char = int(latin_char[0]);

	cout << "H  -Latin char" << endl;

	cout << dec_latin_char << " -Demical latin char" << endl;

	char arr[33];
	_itoa_s(dec_latin_char, arr, 2);
	cout << "Представление символа Юникода в кодировке UTF-8: ";
	cout << arr << endl;
}
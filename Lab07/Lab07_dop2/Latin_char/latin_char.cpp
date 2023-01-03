#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int dec_latin_char;
	wchar_t latin_char[] = L"H";
	dec_latin_char = int(latin_char[0]);
	cout << dec_latin_char << " -Demical latin char" << endl;
	char arr[33];
	_itoa_s(dec_latin_char, arr, 2);
	cout << "Представление символа Юникода в кодировке UTF-8: ";
	cout << arr << endl;
}
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int dec_russian_char;
	wchar_t russian_char[] = L"Ш";
	dec_russian_char = int(russian_char[0]);
	cout << dec_russian_char << "  demical char" << endl;

	int delta_octet1, delta_octet2;
	int char_in_utf8 = 128;                           // 128 == 1000 0000
	int mask_for_oct2 = 63;                            // 63 == 11 1111
	int octet1 = 192;                                  // 192 == 1100 0000
	int octet2 = 128;                                  // 128 == 1000 0000
	int mask_for_outp = 1<<15;
	int i;
	char arr[33];
	_itoa_s(dec_russian_char, arr, 2);
	cout << arr << "  binary russian char" << endl;

	delta_octet2 = (dec_russian_char & mask_for_oct2);      // Выделям последние 6 битов
	_itoa_s(delta_octet2, arr, 2);
	cout << arr << "  delta_actet2" << endl;

	delta_octet1 = dec_russian_char >> 6;             // Выделяем первые 5 битов
	_itoa_s(delta_octet1, arr, 2);
	cout << arr << "  delta_actet1" << endl;

	octet1 = (octet1 | delta_octet1);                // Формируем 1(старший) октет
	_itoa_s(octet1, arr, 2);
	cout << arr << "  actet1" << endl;

	octet2 = (octet2 | delta_octet2);                // Формируем 2 октет
	_itoa_s(octet2, arr, 2);
	cout << arr << "  actet2" << endl;

	char_in_utf8 = (char_in_utf8 | octet1);
	char_in_utf8 = char_in_utf8 << 8;
	char_in_utf8 = (char_in_utf8 | octet2);
	
	cout << "Представление символа Юникода в кодировке UTF-8: ";
	for (i = 1; i <= 15; i++)
	{
		cout << (mask_for_outp & char_in_utf8 ? '1' : '0');
		char_in_utf8 <<= 1;
		if (i % 8 == 0)
			cout << " ";
	}
	cout << endl;


}
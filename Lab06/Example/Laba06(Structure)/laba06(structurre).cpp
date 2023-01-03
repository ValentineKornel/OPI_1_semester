#include <iostream>
#include <Windows.h>
void main()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");
	int numzad, usl, amount_of_chars, i;
	unsigned char num, latsim, russim, bigsim, smsim;
	do
	{
		cout << "Выберите номер задания(1, 2, 3 или 4)" << endl;
		cin >> numzad;
		switch (numzad)
		{
		case 1: 
		{
			cout << "Введите букву латинского алфавита";
			cin >> latsim;
			if (latsim < 123 && latsim > 64)
			{
				bigsim = toupper(latsim);
				smsim = tolower(latsim);
				cout << "Код прописной буквы " << bigsim << " равен " << int(bigsim) << endl;
				cout << "Код строчной буквы " << smsim << " равен " << int(smsim) << endl;
				cout << "Разница значений кодов равна " << smsim - bigsim << endl;
				cout << "Продолжить это задание? (1 - Да, 2 - Нет)";
				cin >> usl;
				if (usl == 1)
				{
					cout << "Сколько символов будем проверять?";
					cin >> amount_of_chars;
					for (i = 0; i < amount_of_chars; i++)
					{
						cout << "Код прописной буквы " << bigsim << " равен " << int(bigsim) << endl;
						cout << "Код строчной буквы " << smsim << " равен " << int(smsim) << endl;
						cout << "Разница значений кодов равна " << smsim - bigsim << endl;
					}
				}
				else
				{
					break;
				}
			}
			else
				cout << "Введенное число не является символом латинского алфавита" << endl;
			break; 
		}
		case 2:
		{
			cout << "Введите букву русского алфавита";
			cin >> russim;
			if (russim < 256 && russim > 192)
			{
				bigsim = toupper(russim);
				smsim = tolower(russim);
				cout << "Код прописной буквы " << bigsim << " равен " << int(bigsim) << endl;
				cout << "Код сточной буквы " << smsim << " равен " << int(smsim) << endl;
				cout << "Разница значений кодов равна " << smsim - bigsim << endl;
				cout << "Продолжить это задание? (1 - Да, 2 - Нет)";
				cin >> usl;
				if (usl == 1)
				{
					cout << "Сколько символов будем проверять?";
					cin >> amount_of_chars;
					for (i = 0; i < amount_of_chars; i++)
					{
						cout << "Код прописной буквы " << bigsim << " равен " << int(bigsim) << endl;
						cout << "Код строчной буквы " << smsim << " равен " << int(smsim) << endl;
						cout << "Разница значений кодов равна " << smsim - bigsim << endl;
					}
				}
				else
				{
					break;
				}
			}
			else
				cout << "Введенное число не равняется символом русского алфавита" << endl;
			break; 
		}
		case 3:
		{
			cout << "Введите число" << endl;
			cin >> num;
			if (num > 47 && num < 58)
			{
				cout << "Код введенной цифры " << num << " равен " << int(num) << endl;
				cout << "Продолжить это задание? (1 - Да, 2 - Нет)";
				cin >> usl;
				if (usl == 1)
				{
					cout << "Сколько символов будем проверять?";
					cin >> amount_of_chars;
					for (i = 0; i < amount_of_chars; i++)
					{
						cout << "Код введенной цифры " << num << " равен " << int(num) << endl;
					}
				}
				else
				{
					break;
				}
			}
			else
				cout << "Введенный символ не является числом" << endl;
			break; 
		}
		case 4: 
		{
			break;
		}
		default:
			cout << "Неверный номер задания";
		}
		cout << "Выбрать задание снова? (1 - Да, 2 - Нет)";
		cin >> usl;
	} while (usl == 1);
}
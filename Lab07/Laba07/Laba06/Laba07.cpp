#include <Windows.h>
#include <iostream>
#include "latin_char.h"
#include "russian_char.h"
#include "number_char.h"
void main()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_CTYPE, "Russian");
	int tasknumber;
	int decision, i;
	int amount_of_chars = 1;
	bool flag = false;
	do
	{
		cout << "Выберите номер задания(1, 2, 3 или 4)" << endl;
		cin >> tasknumber;

		switch (tasknumber)
		{
		case 1:
		{
			do
			{
				for (i = 0; i < amount_of_chars; i++)
				{
					codeOfLatinChar();
				}
				cout << "Продолжить это задание? (1 - Да, любле другое число - Нет) ";
				cin >> decision;
				if (decision == 1)
				{
					cout << "Сколько символов будем проверять? ";
					cin >> amount_of_chars;
					flag = true;
				}
				else
				{
					flag = false;
				}
			} while (flag == true);
			break;
		}

		case 2:
		{
			do
			{
				for (i = 0; i < amount_of_chars; i++)
				{
					codeOfRussianChar();
				}
				cout << "Продолжить это задание? (1 - Да, любле другое число - Нет) ";
				cin >> decision;
				if (decision == 1)
				{
					cout << "Сколько символов будем проверять? ";
					cin >> amount_of_chars;
					flag = true;
				}
				else
				{
					flag = false;
				}
			} while (flag == true);
			break;
		}

		case 3:
		{
			do
			{
				for (i = 0; i < amount_of_chars; i++)
				{
					codeOfNumberChar();
				}
				cout << "Продолжить это задание? (1 - Да, любле другое число - Нет) ";
				cin >> decision;
				if (decision == 1)
				{
					cout << "Сколько символов будем проверять? ";
					cin >> amount_of_chars;
					flag = true;
				}
				else
				{
					flag = false;
				}
			} while (flag == true);
			break;
		}

		case 4:
		{
			break;
		}
		default:
			cout << "Неверный номер задания";
		}
		cout << "Выбрать номер задания снова? (1 - Да, любле другое число - Нет)";
		cin >> decision;
	} while (decision == 1);
}
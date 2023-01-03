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
		cout << "�������� ����� �������(1, 2, 3 ��� 4)" << endl;
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
				cout << "���������� ��� �������? (1 - ��, ����� ������ ����� - ���) ";
				cin >> decision;
				if (decision == 1)
				{
					cout << "������� �������� ����� ���������? ";
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
				cout << "���������� ��� �������? (1 - ��, ����� ������ ����� - ���) ";
				cin >> decision;
				if (decision == 1)
				{
					cout << "������� �������� ����� ���������? ";
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
				cout << "���������� ��� �������? (1 - ��, ����� ������ ����� - ���) ";
				cin >> decision;
				if (decision == 1)
				{
					cout << "������� �������� ����� ���������? ";
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
			cout << "�������� ����� �������";
		}
		cout << "������� ����� ������� �����? (1 - ��, ����� ������ ����� - ���)";
		cin >> decision;
	} while (decision == 1);
}
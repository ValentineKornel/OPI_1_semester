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
		cout << "�������� ����� �������(1, 2, 3 ��� 4)" << endl;
		cin >> numzad;
		switch (numzad)
		{
		case 1: 
		{
			cout << "������� ����� ���������� ��������";
			cin >> latsim;
			if (latsim < 123 && latsim > 64)
			{
				bigsim = toupper(latsim);
				smsim = tolower(latsim);
				cout << "��� ��������� ����� " << bigsim << " ����� " << int(bigsim) << endl;
				cout << "��� �������� ����� " << smsim << " ����� " << int(smsim) << endl;
				cout << "������� �������� ����� ����� " << smsim - bigsim << endl;
				cout << "���������� ��� �������? (1 - ��, 2 - ���)";
				cin >> usl;
				if (usl == 1)
				{
					cout << "������� �������� ����� ���������?";
					cin >> amount_of_chars;
					for (i = 0; i < amount_of_chars; i++)
					{
						cout << "��� ��������� ����� " << bigsim << " ����� " << int(bigsim) << endl;
						cout << "��� �������� ����� " << smsim << " ����� " << int(smsim) << endl;
						cout << "������� �������� ����� ����� " << smsim - bigsim << endl;
					}
				}
				else
				{
					break;
				}
			}
			else
				cout << "��������� ����� �� �������� �������� ���������� ��������" << endl;
			break; 
		}
		case 2:
		{
			cout << "������� ����� �������� ��������";
			cin >> russim;
			if (russim < 256 && russim > 192)
			{
				bigsim = toupper(russim);
				smsim = tolower(russim);
				cout << "��� ��������� ����� " << bigsim << " ����� " << int(bigsim) << endl;
				cout << "��� ������� ����� " << smsim << " ����� " << int(smsim) << endl;
				cout << "������� �������� ����� ����� " << smsim - bigsim << endl;
				cout << "���������� ��� �������? (1 - ��, 2 - ���)";
				cin >> usl;
				if (usl == 1)
				{
					cout << "������� �������� ����� ���������?";
					cin >> amount_of_chars;
					for (i = 0; i < amount_of_chars; i++)
					{
						cout << "��� ��������� ����� " << bigsim << " ����� " << int(bigsim) << endl;
						cout << "��� �������� ����� " << smsim << " ����� " << int(smsim) << endl;
						cout << "������� �������� ����� ����� " << smsim - bigsim << endl;
					}
				}
				else
				{
					break;
				}
			}
			else
				cout << "��������� ����� �� ��������� �������� �������� ��������" << endl;
			break; 
		}
		case 3:
		{
			cout << "������� �����" << endl;
			cin >> num;
			if (num > 47 && num < 58)
			{
				cout << "��� ��������� ����� " << num << " ����� " << int(num) << endl;
				cout << "���������� ��� �������? (1 - ��, 2 - ���)";
				cin >> usl;
				if (usl == 1)
				{
					cout << "������� �������� ����� ���������?";
					cin >> amount_of_chars;
					for (i = 0; i < amount_of_chars; i++)
					{
						cout << "��� ��������� ����� " << num << " ����� " << int(num) << endl;
					}
				}
				else
				{
					break;
				}
			}
			else
				cout << "��������� ������ �� �������� ������" << endl;
			break; 
		}
		case 4: 
		{
			break;
		}
		default:
			cout << "�������� ����� �������";
		}
		cout << "������� ������� �����? (1 - ��, 2 - ���)";
		cin >> usl;
	} while (usl == 1);
}
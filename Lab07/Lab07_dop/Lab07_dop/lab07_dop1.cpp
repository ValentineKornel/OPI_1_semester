#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float period_of_time, percent, year_number, price, total_price;
	total_price = 0;
	cout << "�� ���������� ������� ��� ����� �������� ������������?" << endl;
	cin >> period_of_time;;
	cout << "�� ������� ��������� ����������� ������?" << endl;
	cin >> percent;
	for (year_number = 1; year_number < period_of_time + 1; year_number++)
	{
		cout << "�������� ����� ������� ������������ �� " << year_number << " ���" << endl;
		cin >> price;
		total_price = total_price * (percent * 0.01);
		price -= price * (percent * 0.01);
		total_price += price;
	}
	cout << "��������� ������������ ������������ �� " << period_of_time
		<< " ��� ����� " << total_price;
}
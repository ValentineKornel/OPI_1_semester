#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float period_of_time, percent, year_number, price, total_price;
	total_price = 0;
	cout << "На протяжении скольки лет фирма закупала оборудование?" << endl;
	cin >> period_of_time;;
	cout << "На сколько процентов уценивается мебель?" << endl;
	cin >> percent;
	for (year_number = 1; year_number < period_of_time + 1; year_number++)
	{
		cout << "Ввдедите сумму закупки оборудования на " << year_number << " Год" << endl;
		cin >> price;
		total_price = total_price * (percent * 0.01);
		price -= price * (percent * 0.01);
		total_price += price;
	}
	cout << "Стоимость накопленного оборудования за " << period_of_time
		<< " лет равно " << total_price;
}
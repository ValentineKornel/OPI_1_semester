#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float sum = 0, cost;
	string tovar;
	int i = 1;
	while (sum < 5)
	{
		cout << "¬ведите название " << i << " товара ";
		cin >> tovar;
		cout << "¬ведите стоимость" << i << " товара ";
		cin >> cost;
		sum += cost;
		i += 1;
	}
	sum -= cost;
	cout << "—умма товаров равна" << sum;
}
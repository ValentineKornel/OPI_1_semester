#include <iostream>
#include "purchase.h"
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	float sum = 0, cost;
	string tovar;
	while (sum < 5)
	{
		cost = costOfPurchase();
		sum += cost;
	}
	sum -= cost;
	cout << "Сумма товаров равна " << sum;
}
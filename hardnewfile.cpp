#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int n, k = 1, f, y;
//	float s = 0.0, eps, p = 1.0, a, b, t;
//	cout << "Знаменатель" << endl;
//	cin >> y;
//	cout << "Точность" << endl;
//	cin >> eps;
//	t = y * y * y;
//	b = 2 / (y * y * y);
//	do
//	{
//		a = b;
//		p *= k;
//		k++;
//		t *= y;
//		b = (p + 1) / t;
//		s += (p + 1) / t;
//	} 
//	while (abs(a - b) > eps);
//	cout << s;
//}

//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int n, k = 1, f, y;
//	float s = 0.0, eps, p = 1.0, a, b, t;
//	cout << "Введите знаменатель" << endl;
//	cin >> y; //знаменатель
//	cout << "Укажите точночть" << endl;
//	cin >> eps; //точночть
//	t = y * y * y;
//	b = 2 / (y * y * y);
//		do
//		{
//			a = b;
//			p *= k; k++; //факториал k -> типо (k!+1)
//			t *= y; //имеется ввиду  y^(k+3) -> тоже самое, что (y^k)*(y^3) | это строка обозначает y^4, в 4 степени т.к k=1 и стпень = 1+3
//			b = (p + 1) / t; //это что получается после сигмы -> тоесть p=k! , а t=y^4
//			s += (k + 1) / t; //это что получается в итоге | s=сигма если правильно понимаю, то тут k=1 и числитель у нас без факториала
//		} 
//		while (abs(a - b) < eps);
//	cout << s;
//}

int main()
{
	setlocale(LC_ALL, "Rus");
	int n = 1, f, y, x;
	float s = 0.0, eps, p = 1.0, a, b, t;
	double sinus;
	cout << "Введите числитель x" << endl;
	cin >> x;
	cout << "Введите точность" << endl;
	cin >> eps;
	f = (2 * n + 1);
	sinus = sin(x);
	t = x * x * x;
	b = (x * x * x) / 6;
	do
	{
		a = b;
		p *= f; ++n;
		b = t / p;
		s += t / (2*n + 1);
	} 
	while (abs(a - b) < eps);
	if (sinus == s)
	{
		cout << "Ответ"<< s << endl;
	}
	else
	{
		cout << "Не существует" << endl;
	}
}
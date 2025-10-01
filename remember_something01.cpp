#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

//1

//1.1

//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	int a;
//	double s;
//	cin >> a;
//	s = a * a;
//	cout << "Площадь квадрата = " << s << endl;
//}

//1.2

//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	int a, b, c;
//	double p, s;
//	cin >> a >> b >> c;
//	p = (a + b + c) / 2;
//	s = sqrt(p * (p - a) * (p - b) * (p - c));
//	cout << "Площадь треугольника равна = "<< s << endl;
//}

//1.1

//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	int a, b;
//	float r, p;
//	cin >> a >> b;
//	r = a - b;
//	p = a * b;
//	cout << "Разность = " << r << endl;
//	cout << "Произведение = " << p << endl;
//}

//1.2
//void main()
//{
//	setlocale(LC_ALL, "Rus");
//	int r;
//	float pi, s;
//	cin >> r;
//	s = 3.14 * r * r;
//	cout << s << endl;
//}

//1.3
//void main()
//{
//	int a, b;
//	float d, p;
//	cin >> a >> b;
//	d = (a + b) / 2;
//	p = sqrt(a * b);
//	cout << d << "pp" << endl;
//	cout << p << endl;
//}

//2

//2.1
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	double x, y;
//	long double sinus, cosinus;
//	cin >> x;
//	sinus = sin(x);
//	cosinus = cos(x);
//	y = sinus * cosinus - 3 * x * x;
//	cout << y << endl;
//}

//2.2 немного не то!!!
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	long double x, y, z;
//	float s;
//	cin >> x >> y >> z;
//	s = x + y + z;
//	cout << s << endl;
//}

//2.3
//int main()
//{
//	int a, a1, a2, a3, a4, a5;
//	cin >> a;
//	a1 = a /10000;
//	a2 = (a/1000)%10;
//	a3 = (a/100)%10;
//	a4 = (a/10)%10;
//	a5 = a % 10;
//		cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
//		cout << a1 * a5 << endl;
//}

//2.4
//int main()
//{
//	long double x, y;
//	cin >> x;
//	double tangens = tan(x);
//	y = abs(x - tangens);
//	cout << y << endl;
//}

//3

//3.1
//int main()
//{
//	int a, a1, a2, a3;
//	cin >> a;
//	a1 = (a / 100) % 10;
//	a2 = (a / 10) % 10;
//	a3 = a % 10;
//	//cout << a1 << " " << a2 << " " << a3;
//	if (a1 > a2)
//	{
//		if (a1 > a3)
//		{
//			cout << a1;
//		}
//		else
//		{
//			cout << a3;
//		}
//	}
//	else if (a2 > a3)
//	{
//		cout << a2;
//	}
//	else
//	{
//		cout << a3;
//	}
//}

//3.2
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int a, a1, a2, a3, a4;
//	cin >> a;
//	a1 = (a / 1000) % 10;
//	a2 = (a / 100) % 10;
//	a3 = (a / 10) % 10;
//	a4 = a % 10;
//	if (a1 == a4 && a2 == a3)
//	{
//		cout << "Число является палиндромом" << endl;
//	}
//	else
//	{
//		cout << "Число не является палиндромом" << endl;
//	}
//}

//3.3
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int a, a1, a2, a3, a4, a5;
//	cin >> a;
//	a1 = (a / 10000) % 10;
//	a2 = (a / 1000) % 10;
//	a3 = (a / 100) % 10;
//	a4 = (a / 10) % 10;
//	a5 = a % 10;
//	if ((a1 + a2) > (a4 + a5))
//	{
//		cout << "Сумма первых двух цифр" << endl;
//	}
//	else
//	{
//		cout << "Сумма последних двух цифр" << endl;
//	}
//}

//3.6
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	double a, b, c, x, f;
//	cin >> a >> b >> c >> x;
//	if (c < 0 && b != 0)
//	{
//		cout << -a * x - c;
//	}
//	else
//		if (c > 0 && x == 0)
//		{
//			cout << (x - a) / (-c);
//		}
//		else
//			if (c != 0)
//			{
//				cout << (x / c);
//			}
//}

//4

//4.1
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int x, c = 0;
//	cin >> x;
//	if (x != 0)
//	{
//		while (x != 0)
//		{
//			x /= 10;
//			if (x % 2 != 0) c++;
//		}
//	}
//	else
//		c = 0;
//	cout << "Количество = " << c;
//}

//4.2 не до конца
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int x, c = 0;
//	cin >> x;
//	if (x != 0)
//	{
//		while (x != 0)
//		{
//			x /= 10;
//			if (x == 2) c++;
//		}
//	}
//	else
//		c = 0;
//	if (c > 0)
//		cout << "Нет не верно";
//	else
//		cout << "Да верно";
//}

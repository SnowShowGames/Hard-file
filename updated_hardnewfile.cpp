#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main()
{
        setlocale(LC_ALL, "Rus");
        int n = 1, f, y, x, l;
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
                if (n%2==0)
                {
                	f=1;
                }
                else
                {
                	f=-1;
                }
                a = b;
                p *= f; ++n;
                b = t / p;
                s +=f*(t / (2*n + 1));
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
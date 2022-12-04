#include <iostream>
using namespace std;
double my_pow(double b, unsigned int e) {
    double v = 1.0;
    while (e != 0) {
        if ((e & 1) != 0) {
            v *= b;
        }
        b *= b;
        e >>= 1;
    }
    return v;
}
int main()
{
    setlocale(LC_ALL, "Russian");
        int N;
        double F;
        cout << "Введите число (дробное): " << endl;
        cin >> F;
        cout << "Введите степень числа (положительную): " << endl;
        cin >> N;
        if (N < 0)
        {
            cout << "Ошибка" << endl;
            system("pause");
        }
        cout << my_pow(F, N) << endl;
        return 0;
}
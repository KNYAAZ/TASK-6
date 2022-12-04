#include <iostream>
using namespace std;
double my_pow(double F, unsigned int N)
{
	double pow;
	pow = F;
	for (int i = 1;i < N; ++i)
	{
		F *= pow;
	}
	return F;
}
int main ()
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
#include <iostream>
using namespace std;
double my_pow(double F, int N)
{
	double pow;
	pow = 1;
	for (int i = 0; i < abs(N); ++i)
	{
			pow *= F;
	}
	if (N < 0)
	{
		pow = 1 / pow;
	}
	return pow;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	double F;
	cout << "Введите число (дробное): " << endl;
	cin >> F;
	cout << "Введите степень числа: " << endl;
	cin >> N;
	cout << my_pow(F, N) << endl;
	return 0;
}

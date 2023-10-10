#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, i;
	double S;
	cout << "k = "; cin >> k;
	S = 0;
	i = k;
	while (i <= 15)
	{
		S += (sin(i)*cos(i))/(1+sin(i)*sin(i));
		i++;
	}
	cout << S << endl;
		S = 0;
	i = k;
	do {
		S += (sin(i) * cos(i)) / (1 + sin(i) * sin(i));
		i++;
	} while (i <= 15);
	cout << S << endl;
	S = 0;
	for (i = k; i <= 15; i++)
	{
		S += (sin(i) * cos(i)) / (1 + sin(i) * sin(i));
	}
	cout << S << endl;
	S = 0;
	for (i = 15; i >= k; i--)
	{
		S += (sin(i) * cos(i)) / (1 + sin(i) * sin(i));
	}
	cout << S << endl;
	return 0;
}
#include "Array.h"
#include <iostream>
#include <time.h>
#include <stdexcept>
#include <exception>
#include <cmath>
using namespace std;
typedef Array::value_type* TArray;

Array func(TArray arr, Array::size_type size)
{
	Array a(size);
	Array::iterator iter = a.begin();
	Array::value_type sum = 0;
	Array::value_type min = a[0], max = a[0];
	for (Array::size_type i = 0; i < a.size(); i++, iter++) {
		*iter = arr[i];
		min = std::min(a[i], min);
		max = std::max(a[i], max);
	}
	cout << a;
	cout << min << " " << max << endl;
	for (Array::size_type i = 0; i < a.size(); i++)
	{
		a[i] = a[i] / min + max;
		sum += a[i];
	}

	a.push_back(sum);
	a.push_back(sum / a.size());


	return a;
}

int main()
{
	srand((unsigned)time(NULL));
	int n;
	cout << "n= "; cin >> n;
	TArray a = new Array::value_type[n];

	Array::value_type A = -50;
	Array::value_type B = 50;
	
	for (size_t i = 0; i < n; i++)
		a[i] = A + rand() % int(B - A + 1);

	Array arr = func(a, n);
	cout << arr;

	return 0;
}

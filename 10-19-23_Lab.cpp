#include<iostream>
#include<string>
using namespace std;

void countdown(int n)
{
	if (n == 0)
	{
		cout << "Blastoff!" << endl;
	}
	else
	{
		cout << n << endl;
		countdown(n - 1);
	}
	// O(n)
}

int factoral(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * factoral(n - 1);
	}
	// O(n)
}

int power(int n, int m)
{
	if (n == 1 || m == 1)
	{
		return n;
	}
	else
	{
		return n * power(n, m - 1);
	}
	// O(n)
}

double fastrec(double x, int d)
{
	if (x == 0)
	{
		return 1;
	}
	else
	{
		double halfpow = fastrec(x, d / 2);
		if (d % 2 == 0)
			return halfpow * halfpow;
		else
			return x * halfpow * halfpow;
	}
}

void lineofstars(int x)
{
	if (x == 0)
	{
		cout << " " << endl;
	}
	else
	{
		lineofstars(x - 1);
		cout << "*";
	}
}

void star(int x)
{

	if (x == 0 )
	{
	}
	else
	{
		lineofstars(x);
		star(x - 1);
		lineofstars(x);
	}
}

int main()
{
	countdown(10);
	cout << endl;
	cout << factoral(5) << endl;
	cout << power(3, 4) << endl;
	//cout << fastrec(3, 4) << endl;
	lineofstars(5);
	cout << endl;
	star(5);
}
#include<iostream>
#include<string>

using namespace std;

//countdown
void countdownup(int num)
{
	if(num == 0)
		cout << "blastoff!";
	else
	{
		cout << num << "..." << endl;

		countdownup(num - 1); //recursive call 

		cout << num << "..." << endl;
	}
}
//factorial
int fact(int num)
{
	if (num > 0)
		return num * fact(num - 1);
	else
		return 1;
}
//power
int power(double x, int n)
{
	if (n == 1)
		return x;

	return x * power(x, n - 1);
}
//reversal
string reverse(string s)
{
	//base case 
	if (s.length() == 0)
		return " ";

	if(s.length() == 1)
		return s.back() + reverse(s.substr(1, s.length() - 2)) + s.front();
}
//palindrome
bool is_palindrome(string s)
{
	if(s.length() < 2)
		return true;

	if(s.front() != s.back())
		return false;

	return is_palindrome(s.substr(1, s.length() - 2));
}


int main()
{
	countdownup(4);
	cout << endl;
	fact(3);
	cout << endl;
	power(4, 3);
	cout << endl;
	reverse("hello");
	cout << endl;
	is_palindrome("racecar");
	cout << endl;

	return 0;
}
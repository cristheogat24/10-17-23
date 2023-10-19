#include <iostream>
#include <string>

using namespace std;

// Suppose you have a bag that can handle n kilograms, you want to fill it with
// the books
// Each book is b kilograms. Calculate recursively how many books you can fit in
// the bag without it tearing apart.

int FillBag(int n, int b)
{
    if (b == n)
    {
        return 1;
    }
    else
    {
        return FillBag(n, b + 1);
        if (b > n)
            return 1;
        else
            return FillBag(n - 1, b);
    }
}

// ##### REVERSING A STRING #####
//
//string reverse(string s) {}

// ##### CHECKING WHETHER A STRING IS A PALINDROME (the string and its reverse
// are similar) #####
//
// Hint 1: you can call s.front() to get the first character of string and
// s.back() to get the last one Hint 2: s.substr(i,j) gives you the substring of
// s. For example if s = Hello, s(1,s.length()-1) gives you ello
//bool is_palindrome(string s) {}

int main() {

  //  cout << "reverse of Hello is " << reverse("Hello") << endl;
   // cout << "reverse of Student is " << reverse("Student") << endl;
    //cout << "reverse of A is " << reverse("A") << endl;
    //cout << "reverse of Teachers is " << reverse("Teachers") << endl;

    //cout << "RACECAR is Palindrome. Your algorithm says "
      //  << is_palindrome("RACECAR") << endl;
    //cout << "H is Palinrome. Your algorithm says " << is_palindrome("H") << endl;
    //cout << "RACECAR is Palinrome. Your algorithm says "
      //  << is_palindrome("RACCAR") << endl;
    //cout << "Hello is not Palinrome. Your algorithm says "
      //  << is_palindrome("HELLO") << endl;
    //cout << "Hola is not Palinrome. Your algorithm says " << is_palindrome("Hola")
      //  << endl;

    cout << "you can fit " << FillBag(15, 2)
        << " books in the bag (answer should be 7)" << endl;
    cout << "you can fit " << FillBag(16, 2)
        << " books in the bag (answer should be 8)" << endl;
}
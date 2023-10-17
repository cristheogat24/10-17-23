#include <iostream>
using namespace std;

/* Write a method lineOfStars(int n) that prints a line of n stars.  
You may not use a loop.*/

//********TO-DO********
void lineOfStars(int n)
{
    if (n == 0)
        cout << " " << endl;
    else
    {
        lineOfStars(n - 1);
        cout << "*";
    }
}


//Write a method stars(int n) that prints the weird shape below.
//You may not use a loop.  You may call lineOfStars as a subroutine inside this function.
void stars(int n)
{
    if (n == 0)
        cout << " " << endl;
    else
    {
        stars(n - 1);
        cout << "****" << endl;
    }
}
/*
stars(4);

should display:

****
***
**
*
*
**
***
****

*/
//********TO-DO********

//This function calculates the x to the power of n recursively.
// You may not use a loop.
int power(double x, int n) 
{
    //********TO-DO********
}

/*Write a method, factorial, that calculates the factorial of x recursively.
You may not use a loop.*/

//*******TO DO*********


//This function calculates the nth term in the fibonacci sequence recursively. 
//The fibonacci sequence is 0,1,1,2,3,5,8,13,21,34... and so on. 
/* It is calculated by 
                      0 + 1 = 1
                      1 + 1 = 2
                      1 + 2 = 3
                      2 + 3 = 5
*/
//You may not use a loop.
double fib(double n)
{
  //*******TO DO*********
}


int main() {
    cout << endl; 
    lineOfStars(5);  //   should display: *****
    cout << endl<<endl;
    stars(4);

  /* should display:
    ****
    ***
    **
    *
    *
    **
    ***
    ****
  */
  /*
    cout << endl;
    cout << "3 to the power of 3 is 27, your answer is ";
    cout << power(3, 3) << endl << endl;
    cout << "10 to the power of 3 is 1000, your answer is "; 
    cout << power(10, 3) << endl << endl;
    cout << "7 to the power of 6 is 117649, your answer is "; 
    cout << power(7, 6) << endl << endl;
    cout << "The factorial of 5 is 120, your answer is ";
    cout << factorial(5)<< endl << endl;
    cout << "The factorial of 20 is 2.4329e+18, your answer is ";
    cout << factorial(20)<< endl << endl;
    cout << "The 2nd term in the fibonacci sequence is 1, your answer is ";
    cout << fib(2) << endl << endl;
    cout << "The 10th term in the fibonacci sequence is 55, your answer is ";
    cout << fib(10) << endl << endl;

    int num = power(2, 3);
    cout << endl;
    stars(num);
  
  /* should display:
      ********
      *******
      ******
      *****
      ****
      ***
      **
      *
      *
      **
      ***
      ****
      *****
      ******
      *******
      ********
    */
}
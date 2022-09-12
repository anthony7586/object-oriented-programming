//anthony ruiz
//CPSC 121 lab 8
// 04/06/19

#include<iostream>
#include<string>

using namespace std;
int main()
{
int factorial(int);
int factor(int, int);
string ObliterateString(string );
int option;
int number;
string word;

cout<< "which function would you like to access?\n";
cout<< "(1) Factorial\n(2) Factor\n(3) Obliterate String\n";
cin>> option;

    if (option == 1)
    {
      cout << "What number would you like the factorial of?\n";
      cin >> number;
      cout << "\nThe factorial of "<< number << " is ";
      cout << factorial(number);
      cout <<endl;
    }


    if (option == 2)
    {
      cout<< "what number would you like to display the prime factors of?\n";
      cin >> number;
      cout << '\n' << factor(number, 2)<< endl;

    }


    if (option == 3)
    {
      cout << "what word would you like to obliterate?\n";
      cin >> word;
      cout << endl;
      ObliterateString(word);
    }







return 0;
}
/******************************************************************************
                          begining of function defenitions
******************************************************************************/


                              //factorial

int factorial(int n)//n will be input number
{
 if (n == 1)//base case
    {
      return n;
    }
 else if ( n > 0)
    {
    return n * factorial(n-1);//recursive case
    }
}





                          //obliterarate string
string ObliterateString(string word)
{

  if ( word.length() == 0)
  {
  cout << "No string to obliterate.";
  }

  else
  {
    cout << word << endl;
      word.pop_back();
      return ObliterateString(word);
  }
}


                                //factor funtion 
int factor(int number, int i)
{


if(number != 0)
{
  while (i < number)
  {
    if (number%i == 0)
    {
      cout<< i << " is a prime factor of " << number<< endl;
      i++;
      return factor(number, i);
    }
  }
}

else if (number == 0)
{
  cout << number<< " as input is not valid";
  return 0;
}


















}

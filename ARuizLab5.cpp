//Anthony Ruiz
// CPSC 121 Lab 5
// 02/28/19


#include<iostream>
using namespace std;

//begining of prototypes
void sum(int array[]);
void mean(int array[]);
void display(int array[]);
void sequencing(int array[]);
void edit(int array[]);
void sort(int array[], int);//pass by reference
void search(int array[]);//pass by reference
void exit();
//end of prototypes


int ARRAYSIZE = 4;

int main()
{


int array[ARRAYSIZE];
int menuOption;

cout << "Enter 5 values each seprated by a space.\n";
cin >> array[0] >> array[1]>>array[2]>>array[3]>>array[4];

cout << "Your values are " << array[0]
<< array[1]<<array[2]<< array[3]<<array[4];

cout << "\nChoose an Option\n";
cout << "(1) Sum\n";
cout << "(2) Mean\n";
cout << "(3) Display\n";
cout << "(4) Sequencing\n";
cout << "(5) Edit\n";
cout << "(6) search\n";
cout << "(7) sort\n";
cout << "(8) Exit\n";
cin >> menuOption;




if (menuOption == 1)
{
sum(array);
}

if (menuOption == 2)
{
  mean(array);
}

if (menuOption == 3)
{
  display(array);
}

if (menuOption == 4)
{
  sequencing(array);
}

if (menuOption == 5)
{
  edit(array);
}


if(menuOption == 6)
{
search(array);

}

if(menuOption == 7)
{
int size;
size = ARRAYSIZE;
sort(array, size);

}

if (menuOption == 8)
{
  cout << "bye \n";
}




return 0;
}

/* ********************************************************************* */
                      	//end of main function
/* ********************************************************************* */

/* ********************************************************************* */
                      	//start of function defenition
/* ********************************************************************* */


void sort(int array[], int ARRAYSIZE)//sort function
{
bool swap;
int temp;

do {
  swap = false;
  for (int count = 0; count < (ARRAYSIZE); count++)
  {
    if (array[count] > array[count + 1])
    {
      temp = array[count];
      array[count] = array[count + 1];
      array[count + 1] = temp;
      swap = true;
    }
  }
} while (swap);

//displaying the array wihtin the function
cout << "Your values are ";
for (int i = 0;i<5;i++)
{
  cout<<array[i];
}
cout << endl;




}


void search(int array[])//search function
{

cout << "This is the Search function.\n";
cout<< array;

}//sorry we didnt get around to this due to busy schedules :(



void sum(int array[])//sum function
{
int sum=0;
for (int i = 0; i < (ARRAYSIZE + 1) ; i++){

sum+= array[i];


}

cout << "The sum of all inputted integers is " << sum << endl;
}





void mean(int array[])//mean function
{

  int sum= 0;
  int mean;
  for (int i = 0; i < (ARRAYSIZE + 1) ; i++){

  sum+= array[i];

  }

  mean = sum / 5;
  cout << "The mean of all inputted integers is " << mean << endl;


}

void display(int array[])//display function
{
  cout << "Your values are ";
  for (int i = 0;i<4;i++)
  {
    cout<<array[i];
  }
cout << endl;
}

void sequencing(int array[])//sequencing function
{

  for (int i = 0; i < (ARRAYSIZE); i ++){

	cout << array[i] - array[i+1] << endl;

	}
cout << '\n';
}

void edit(int array[])//edits the numbers and asks the user for a menu option input again.
{

  int menuOption;

  cout << "Enter 5 values each seprated by a space.\n";
  cin >> array[0] >> array[1]>>array[2]>>array[3]>>array[4];

  cout << "Your values are " << array[0]
  << array[1]<<array[2]<< array[3]<<array[4];

  cout << "\nChoose an Option\n";
  cout << "(1) Sum\n";
  cout << "(2) Mean\n";
  cout << "(3) Display\n";
  cout << "(4) Sequencing\n";
  cout << "(5) Edit\n";
  cout << "(6) Search\n";
  cout << "(7) Sort\n";
  cout << "(8) Exit\n";

  cin >> menuOption;




  if (menuOption == 1)
  {
  sum(array);
}

  if (menuOption == 2)
  {
	mean(array);
  }

  if (menuOption == 3)
  {
	display(array);
  }

  if (menuOption == 4)
  {
	sequencing(array);
  }

  if (menuOption == 5)
  {
	edit(array);
  }

  if(menuOption == 6)
  {
  search(array);

  }

  if(menuOption == 7)
  {
  int size;
  size = ARRAYSIZE;
  sort(array, size);
  }

  if (menuOption == 8)
  {
    cout << "bye \n";
  }



}
//end of defenitions
//end of program

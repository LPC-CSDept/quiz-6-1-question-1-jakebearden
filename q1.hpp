#include <iostream>
#include <iomanip>
using namespace std;

void getinput(int &n1, int &n2);
void swapTwoValues(int &n1, int &n2);
void getinput(float &f1, float &f2);
void swapTwoValues(float &f1, float &f2);

void getinput(int &n1, int &n2)
{
  cout << "enter two ints : \n";
  cin >> n1 >> n2;
}

void swapTwoValues(int &n1, int &n2)
{
  int tmp;
  tmp = n1;
  n1 = n2;
  n2 = tmp;
}

void getinput(float &f1, float &f2)
{
  cout << "enter two values : \n";
  cin >> f1 >> f2;
}

void swapTwoValues(float &f1, float &f2)
{
  float tmp;
  tmp = f1;
  f1 = f2;
  f2 = tmp;
}
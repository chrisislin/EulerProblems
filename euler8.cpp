//Find the greatest product of five consecutive digits in the 1000-digit number, but I reduced it since it was ridiculous
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
int maxNum =1;
char a ;
string test ;
int result =1;
int checker = 1;

string numString  = (“7316”);

for (int i = 0; i < 1000; i++)
{
  if (numString[i] == ‘9’)
    {
    for (int j = 0; j < 5; j++)
      {
        a = numString[i+j];
        maxNum *= atoi(&a);
      }
    if (result < maxNum)
      {
        result = maxNum;
      }else
      {
    cout << result << endl;
    }
maxNum = 1;
}
}
}

#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n)
{
  if (n == 0)
  {
    return 0;
  }
  return (1 + countDigits(n / 10));
}
int log(int n){
  return (log10(n)+1);
}
int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  cout << "The number of digits in " << n << " is " << countDigits(n) <<" and "<< log(n);

  return 0;
}
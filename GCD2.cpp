#include <iostream>

using namespace std;

int gcd (int m, int n);
int
main ()
{
  int n, m;
  cout << "Enter your first denominator.";
  cin >> n;
  cout << "Enter your second denominator.";
  cin >> m;
  cout << "Your greatest common denominator is " << gcd (n, m);

  return 0;
}

int
gcd (int m, int n)
{
  if ((m % n) == 0)
    return n;
  else
    return gcd (n, m % n);

}

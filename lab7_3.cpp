#include <iostream>
#include <cmath>

using namespace std;

int adiff(int A, int B)
{
  int C;
  if (A - B >= 0)
  {
    C = A - B;
    if (C % 360 == 0)
    {
      C = 0;
      return C;
    }
    else if (C > 180)
    {
      return abs(C - 360);
    }
    else
    {
      return C;
    }
  }
  else
  {
    C = B - A;
    if (C % 360 == 0)
    {
      C = 0;
      return C;
    }
    else if (C > 180)
    {
      return abs(C - 360);
    }
    else
    {
      return C;
    }
  }
}

int main()
{
  cout << adiff(180, 270) << "\n";
  cout << adiff(210, 45) << "\n";
  cout << adiff(0, 360) << "\n";
  cout << adiff(10, 350) << "\n";
  cout << adiff(95, 260) << "\n";
  cout << adiff(90, -90) << "\n";
  cout << adiff(1000, 280) << "\n";
  cout << adiff(60, 244) << "\n";
}

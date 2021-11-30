#include<iostream>
using namespace std;

int adiff(int a, int b)
{
  a = a%360;
  b = b%360;
  //cout << a << " " << b << endl;

  if(a < 0){
    a = 360 + a;
  }
  if(b < 0){
    b = 360 + b;
  }
  //cout << a << " " << b << endl;

  int mn,mx;
  if(a < b){
    mn = a;
    mx = b;
  }else{
    mn = b;
    mx = a;
  }
  //cout << mn << " " << mx << endl;

  if(mn+180 == mx){
    return 180;
  }else if(mn+180 <mx){
    return abs(360+mn-mx);
  }else{
    return abs(mx-mn);
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

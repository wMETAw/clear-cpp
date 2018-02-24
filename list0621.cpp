// 自動記憶期間と静的記憶期間
#include <iostream>

using namespace std;

int fx;

int main()
{
  static int sx;
  int ax;

  cout << "ax = " << ax << '\n';
  cout << "sx = " << sx << '\n';
  cout << "fx = " << fx << '\n';
}

#include <iostream>

int max(int a, int b)
{
  return a > b ? a : b;
}

int max(int a, int b, int c)
{
  int max = a;
  if(b > max) max = b;
  if(c > max) max = c;
  return max;
}

int main()
{
  int x, y, z;

  std::cout << "X : ";
  std::cin >> x;

  std::cout << "Y : ";
  std::cin >> y;

  std::cout << "XとYの最大値は" << max(x, y) << "です。\n";

  std::cout << "Z : ";
  std::cin >> z;

  std::cout << "x, y, zの最大値は" << max(x, y, z) << "です。\n";
}

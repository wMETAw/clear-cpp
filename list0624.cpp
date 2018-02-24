#include <iostream>

const int a_size = 5;

// a[idx]への参照をリターン
int& r(int idx)
{
  static int a[a_size];
  return a[idx];
}

int main()
{
  for (int i = 0; i < a_size; i++)
    r(i) = i;
  for (int i = 0; i < a_size; i++)
    std::cout << "r(" << i << ") = " << r(i) << '\n';
}

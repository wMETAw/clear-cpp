#include <iostream>
#define sqr(x) ((x) * (x))

int main()
{
  int n;
  double x;

  std::cout << "整数を入力: "; std::cin >> n;
  std::cout << "その数の２乗は" << sqr(n) << "です\n";

  std::cout << "整数を入力: "; std::cin >> x;
  std::cout << "その数の２乗は" << sqr(x) << "です\n";
}

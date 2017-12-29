#include <iostream>

int main()
{
  enum animal {Dog, Cat, Monky, Invalid};
  int type;

  do {
    std::cout << "0:犬 1:猫 2:猿 3:終了  : ";
    std::cin >> type;
  } while(type < Dog || type > Invalid);

  if (type != Invalid) {
    animal selected = static_cast<animal>(type);
    switch(selected){
      case Dog : std::cout << "wanwan\n"; break;
      case Cat : std::cout << "nya-\n"; break;
      case Monky : std::cout << "kiki\n"; break;
    }
  }
}

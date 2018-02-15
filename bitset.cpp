#include <iostream>
#include <bitset>
using namespace std;

int main() {
  int A = 0x2d;
  int B = 0x19;

  std::cout << A << " AND " << B << " = " << (A&B) << endl;
  std::cout << bitset<8>(A) << " AND " << bitset<8>(B) << " = " << bitset<8>(A&B) << endl;
}

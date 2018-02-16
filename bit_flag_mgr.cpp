#include <iostream>
#include <bitset>
using namespace std;

#define BIT_FLAG_0 (1<<0) // 0000 0000 0000 0001
#define BIT_FLAG_1 (1<<1) // 0000 0000 0000 0010
#define BIT_FLAG_2 (1<<2) // 0000 0000 0000 0100
#define BIT_FLAG_3 (1<<3) // 0000 0000 0000 1000
#define BIT_FLAG_4 (1<<4) // 0000 0000 0001 0000
#define BIT_FLAG_5 (1<<5) // 0000 0000 0010 0000
#define BIT_FLAG_6 (1<<6) // 0000 0000 0100 0000
#define BIT_FLAG_7 (1<<7) // 0000 0000 1000 0000

int main(){

  // {1,3,5}にフラグがたったビット
  int bit = BIT_FLAG_1 | BIT_FLAG_3 | BIT_FLAG_5;
  cout << "{1,3,5} = " << bitset<8>(bit) << endl;

  // {1,3,5}について３番目のフラグが立っているということ
  if (bit & BIT_FLAG_3) {
    cout << "BIT_FLAG_3 is in " << bitset<8>(bit) << " (10進数の" << (bit & BIT_FLAG_3) << ")" << endl;
  }

  // 新たなビット
  int bit2 = BIT_FLAG_0 | BIT_FLAG_3 | BIT_FLAG_4; // {0, 3, 4}
  // {1,3,5} & {0,3,4}
  cout << bitset<8>(bit) << " AND " << bitset<8>(bit2) << " = " << bitset<8>(bit & bit2) << endl; // {1, 3, 5} AND {0, 3, 4} = {3}
  // {1,3,5} | {0,3,4}
  cout << bitset<8>(bit) << " OR  " << bitset<8>(bit2) << " = " << bitset<8>(bit | bit2) << endl; // {1, 3, 5} OR {0, 3, 4} = {0, 1, 3, 4, 5}


  // bit に 6 番目のフラグを立てる
  cout << "before: " << bitset<8>(bit) << endl;
  bit |= BIT_FLAG_6;
  cout << "after : " << bitset<8>(bit) << " (6 included)" << endl;

  // bit2 から 3 番目のフラグを消す
  cout << "before: " << bitset<8>(bit2) << endl;
  bit2 &= ~BIT_FLAG_3;
  cout << "after : " << bitset<8>(bit2) << " (6 included)" << endl;
}

#include<iostream>

using namespace std;

// int
int maxof(const int x[], int n)
{
  int max = x[0];
  for (int i = 0; i < n; i++)
    if (x[i] > max)
      max = x[i];
  return max;
}

// double
double maxof(const double x[], int n)
{
  double max = x[0];
  for (int i = 0; i < n; i++)
    if (x[i] > max)
      max = x[i];
  return max;
}

int main() {
  const int isize = 5;
  int ix[isize];

  // 整数配列の最大値
  cout << isize << "個の整数を入力\n";
  for (int i = 0; i < isize; i++) {
    cout << i+1 << ":";
    cin >> ix[i];
  }
  cout << "最大値は" << maxof(ix, isize) << "\n\n";

  const int dsize = 5;
  double dx[dsize];

  // 実数配列の最大値
  cout << dsize << "個の実数を入力\n";
  for (int i = 0; i < dsize; i++) {
    cout << i+1 << ":";
    cin >> dx[i];
  }
  cout << "最大値は" << maxof(dx, dsize) << "\n";
}

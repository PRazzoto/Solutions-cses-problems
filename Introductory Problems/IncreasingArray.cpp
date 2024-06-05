#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  long int n, x, ans = 0;
  cin >> n;
  vector<long int> array;

  for (int i = 0; i < n; i++)
  {
    std::cin >> x;
    array.push_back(x);
  }

  for (int i = 1; i < n; i++)
  {
    if (array[i] < array[i - 1])
    {
      while (array[i] < array[i - 1])
      {
        array[i]++;
        ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
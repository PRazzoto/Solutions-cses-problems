#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

int main(void){
  long int n,a;
  scanf("%ld", &n);
  vector<long int> numbers;


  for(int i=0;i<n-1;i++){
    scanf("%ld", &a);
    numbers.push_back(a);
  }
  if(n != 2){sort(numbers.begin(), numbers.end());}

  for(int i=1;i<=n;i++){
    if(numbers[i-1] != i){
      printf("%d ", i);
      break;
    }
  }



  return 0;
}
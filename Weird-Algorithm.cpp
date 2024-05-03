#include<bits/stdc++.h>
using namespace std;

int main(void){
  long int n;
  scanf("%ld", &n);
  while(n != 1){
    printf("%ld ", n);
    if(n%2==0) {n = n/2;}
    else {n = (n*3) + 1;}
  }
  printf("%ld ", n);


  return 0;
}
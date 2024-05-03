#include<bits/stdc++.h>
using namespace std;


int main(void){
  string seq;
  cin >> seq;
  int size = seq.length(), curr=1,ans=1;

  for(int i = 1; i<size;i++){
    if(seq[i] == seq[i-1]){
      curr++;
    }
    else{
      curr = 1;
    }
    ans = max(curr, ans);
  }

  printf("%d", ans);

  return 0;
}
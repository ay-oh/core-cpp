#include <iostream>

int main() {
  using namespace std;
  int n,i,num[100];
  int k;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d ",&num[i]);
    }
    k=num[0];
  for(i=1;i<n;i++){
    if(k>num[i])
    k = num[i];
    }
    printf("%d",k);
    return 0;
  }

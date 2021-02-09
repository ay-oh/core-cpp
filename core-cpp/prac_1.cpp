#include <iostream>


int main() {
std::cout<<"면 단을 출력하시겠습니까?"<<std::endl;
int a,i,result;
std::cin>>a;
std::cout<<a<<"단을 출력하겠습니다."<<std::endl;
for(i=1;i<10;i++){
  result = a*i;
  std::cout<<a<<"*"<<i<<"="<<result<<std::endl;
}
}

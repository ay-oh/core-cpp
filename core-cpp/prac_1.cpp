#include <iostream>


int main() {
std::cout<<"�� ���� ����Ͻðڽ��ϱ�?"<<std::endl;
int a,i,result;
std::cin>>a;
std::cout<<a<<"���� ����ϰڽ��ϴ�."<<std::endl;
for(i=1;i<10;i++){
  result = a*i;
  std::cout<<a<<"*"<<i<<"="<<result<<std::endl;
}
}

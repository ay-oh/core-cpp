#include <iostream>
using namespace std;

int main() {
  int a;
  char grade;
  string s;
  cin >> a;
  cin >> s;
  if(a>=90&&a<=100)
  {
    grade ='A';
    cout << s <<"�л��� ������" << a<<"�̰� ������" <<grade <<"�̴�."<<endl;
    }
  else if(a>=80&&a<90)
  {
    grade ='B';
    cout << s <<"�л��� ������" << a<<"�̰� ������" <<grade <<"�̴�."<<endl;
    }
  else if(a>=70&&a<80)
  {
    grade ='C';
    cout << s <<"�л��� ������" << a<<"�̰� ������" <<grade <<"�̴�."<<endl;
    }
    else if(a>=60&&a<70)
  {
    grade ='D';
    cout << s <<"�л��� ������" << a<<"�̰� ������" <<grade <<"�̴�."<<endl;
    }
    else
    {
    grade ='F';
    cout << s <<"�л��� ������" << a<<"�̰� ������" <<grade <<"�̴�."<<endl;
    }

return 0;
}

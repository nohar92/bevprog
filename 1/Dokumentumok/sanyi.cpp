#include "std_lib_facilities.h"

using namespace std;

int main()
{
    string First_name;
    cout << "Enter the name of the person you want to write to" << endl;
    cin >> First_name;

    string Friend_name;
    cout << "The name of the other friend" << endl;
    cin >> Friend_name;

    char friend_sex;
    int age;
    cout << "How old are you?" << endl;
    cin >> age;
    do
    {
    cout << "Enter an m if the friend is male and an f if the friend is female" << endl;
      cin >> friend_sex;
    }while(friend_sex!='m' and friend_sex!='f');
    cout << "Dear " << First_name << "," << endl;
    cout << "How are you? I am fine. I miss you." << endl;
    cout << "Have you seen " << Friend_name << " lately?" << endl;



    if(age<0 or age>110)
    {
        cout << "you're kidding!" << endl;
    }
    else
    { if(friend_sex=='m')
    {
        cout << "If you see " << Friend_name << " please ask him to call me." << endl;
    }
    else
    {
        cout << "If you see " << Friend_name << " please ask her to call me." << endl;
    }

      cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
      if(age<12)
      {
          cout << "Next year you will be " << age+1 << "." << endl;
      }
      if(age==17)
      {
          cout << "Next year you will be able to vote." << endl;
      }
      if(age>70)
      {
          cout << "I hope you are enjoying retirement." << endl;
      }
    }
    cout << "Yours sincerely," << endl << endl;
    cout << First_name;

    return 0;
}

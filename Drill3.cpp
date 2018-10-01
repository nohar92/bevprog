#include "std_lib_facilities.h"

int main()
{
String first_name;
cout<<"Enter the name of the person you want to write to"<< endl;
cin>>first_name;
String friend_name;
cout<<"Please enter your friend name"<<endl;
cin>> friend_name;
char friend_sex;
cout<< "Enter an m if the friend is male and an f if the friend is female."<<endl;
cin>> friend_sex;
int age;
cout<< "Please enter you age!"<<endl;
cin>>age;

cout<< "Dear "<<first_name<<","<< endl;
cout<<"How are you? I am fine. I miss you."<<endl;

cout<<"Have you seen "<<friend_name<<" lately?"<<endl;
if(friend_sex=='m')
cout<<"If you see "<<friend_name<<" please ask him to call me."<<endl;
if(friend_sex=='f')
cout<<"If you see "<<friend_name<<" please ask her to call me."<<endl;


if (age<0 or age>110)
simple_error("You're just kidding!");
else cout<<"I hear you just had a birthday and you are "<<age<<" years old."<<endl;
if (age<12)
cout<<"Next year you will be "<<age+1<<endl;
if(age==17)
cout<<"Next year you will be able to vote"<<endl;
if(age>70)
cout<<"I hope you are enjoying retirement."<<endl;
cout<<"Yours sincerely,"<<endl<<endl;
cout<<"Norbi";
}

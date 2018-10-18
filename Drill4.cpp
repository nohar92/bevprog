#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
double number;
string unit;
vector<double> v;
while(true){
cout<<"write a number: ";
cin>>number;
cout<<"Type a unit(cm,m,in,ft): ";
cin>>unit;

if(unit=="y" or unit == "yard" or unit=="gallons" or unit == "km")
break;

if(unit == "|")
break;

if(unit=="m")
v.push_back(number);
if(unit=="cm")
v.push_back(number/100);
if(unit=="in")
v.push_back(number*2.54/100);
if(unit=="ft")
v.push_back(number*12*2.54/100);

}

bool talal=true;
double q=0;
do{
talal=false;
for(int i=0;i<v.size()-1;i++)
{

if(v[i]>v[i+1])
{q=v[i];
v[i]=v[i+1];
v[i+1]=q;
talal=true;
}


}
}while(talal==true);

double smaller=v[0],larger=v[0];
double sum=0;
for(int i=0; i<v.size();i++)
{if(smaller>v[i])
smaller = v[i];
if(v[i]>larger)
larger=v[i];
sum=v[i]+sum;
}

cout<<"The smallest number is: "<<smaller<<endl<<"The largest number is: "<<larger<<endl<<"The sum is: "<<sum<<endl;

for(int i=0;i<v.size();i++)
cout<<v[i]<<" m"<<endl;


}

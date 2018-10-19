#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
string unit;
double c;
vector<double> v;
double sum;
double smaller , larger=0;
double d;
//cout<<"Write 2 number and write | to exit the loop ";
int k=0;
while(true){
cout<<"Write a number";
cin>>c;
cout<<"Write a unit(m,cm,in,ft)";
cin>> unit;
if(unit=="meter" or unit=="y" or unit=="yard" or unit=="km" or unit=="gallons")
break;
if(unit=="m")
    {v.push_back(c);
 sum=sum+c;
 d=c;
    }
    if(unit=="cm")
    {sum=sum+c/100;
    v.push_back(c/100);
    d=c/100;
    }if(unit=="in")
     {
         d=c*2.54/100;
 sum=sum+c*2.54/100;
v.push_back(c*2.54/100);
}
   if(unit=="ft")
{v.push_back(c*12*2.54/100);
 sum=sum+c*12*2.54/100;
d=12*2.54/100;
}

if(d>larger)
    larger=d;
if(d<smaller)
    smaller=d;


if(unit=="|")
break;




}

bool talal;
double q;
do{
talal=false;
for(int i=0;i<v.size()-1;i++)
if(v[i]>v[i+1])
{
    q=v[i];
    v[i]=v[i+1];
    v[i+1]=q;
talal=true;
}


}while(talal==false);

cout<<"The smallest number is: "<<smaller<<endl<<"The largest number is: "<<larger<<endl<<"The sum is: "<<sum<<endl;

for(int i=0; i<v.size();i++)
cout<<v[i]<<" m"<<endl;

}

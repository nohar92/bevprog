#include "std_lib_facilities.h"
using namespace std;
int main()
{

int a,b;
cout <<"Irj be 2 szamot" << endl;
cin>> a;
cin>> b;

a=a xor b;
b=a xor b;
a=a xor b;

cout<<a<<" "<<b<<endl;

}

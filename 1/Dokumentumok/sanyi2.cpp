#include "std_lib_facilities.h"
using namespace std;

int main()
{
    int a , b;

  cout<<"Adj meg 2 szamot: ";
  cin>>a;
  cin>>b;

    a= a xor b;

    b = b xor a;
    a = a xor b;
    cout<<a << " " <<b<< endl;
    return 0;
}

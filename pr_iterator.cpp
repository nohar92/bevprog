#include <iostream>
#include <math.h>
#include <vector>
#include <iterator>
using namespace std;

void kiir(vector<double> tomb)
{
    vector<double>::iterator it;
    int j=0;
for(it=tomb.begin();it<tomb.end();it++)
{cout<<"tomb["<<j<<"]= "<<*it<<endl;
j++;
}
}

double tavolsag(vector<double> PR,vector <double> PRv)
{
double osszeg= 0;
vector<double>::iterator pr;
vector<double>::iterator prv=PRv.begin();

for(pr=PR.begin(); pr<PR.end(); ++pr)
{osszeg += (*prv-*pr)*(*prv-*pr);
prv++;}
return sqrt(osszeg);
}

int main(void)
{
vector<vector<double>> L={
{0.0 , 0.0 , 1.0 / 3.0 , 0.0},
{1.0 , 1.0 / 2.0 , 1.0 / 3.0 , 1.0},
{0.0 , 1.0 / 2.0 , 0.0 , 0.0},
{0.0 , 0.0 , 1.0 / 3.0 , 0.0}
};
vector<double> PR = {0.0 , 0.0 , 0.0 , 0.0};
vector<double> PRv = {1.0 / 4.0 , 1.0 / 4.0 , 1.0 / 4.0 , 1.0 / 4.0};

vector<vector<double>>::iterator oszlop;
vector<double>::iterator sor;

for(;;)
{
int i=0,j=0;

for(oszlop=L.begin(); oszlop!=L.end() ; oszlop++)
{PR[i]=0.0;
    for(sor=oszlop->begin(); sor<oszlop->end() ; sor++)
{PR[i]+= *sor * PRv[j];

j++;

}

if(j%3)j=0;
i++;
}

if(tavolsag(PR,PRv)< 0.0000000001)
break;

for(i=0 ; i<4; i++)
PRv[i]=PR[i];

}
kiir(PR);
return 0;
}

#include "std_lib_facilities.h"

struct Date{
int y;
int m;
int d;
};

void init_day(Date& dd, int y, int m, int d){
	if ( m < 1 || 12 < m) error("cannot exist");
	if ( d < 1 || 31 < m) error("cannot exist");
	dd.y = y;
	dd.m = m;
	dd.d = d;
	}

void add_day(Date& dd, int n){
	dd.d += n;
 }

ostream& operator << ( ostream& os, const Date& d){
return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}

int main(){
Date today;
init_day(today, 2008,3,30);
Date tomorrow = today;
add_day(tomorrow, 1);
cout << today << '\n';
cout << tomorrow << '\n';
return 0;
}

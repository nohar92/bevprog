#include <iostream>
namespace X {
int var;
void print(){
std::cout<<var;}
};
namespace Z {
int var;
void print(){
std::cout<<var;}
};
namespace Y {
int var;
void print(){
std::cout<<var;}
};
int main(){
X::var = 7;
X::print();
using namespace Y;
var=9;
print();
	{
	using Z::var;
	using Z::print;
	var=11;
	print();
	}
print();
X::print();
}

#include<iostream>
using namespace std;


/*
Syntax  for initialization list for constructor :
constructor (argument list):initialization section
assignment+othercode;


class test
{

int a;
int b;
public:
test(int i,int j):a(i),b(j)
{
constructor body
};
*/
class test
{

int a;
int b;
public:
// test(int i,int j):a(i),b(j)
// test(int i,int j):a(i),b(i+j)
// test(int i,int j):a(i),b(2*j)
// test(int i,int j):a(i),b(a+j)
// test(int i,int j):b(j),a(i+b) not execute because i is fist initialize
   test(int i,int j)
{
	a=i;
	b=j;
cout<<"constructor executed "<<endl;
cout<<"Value of a is "<<a<<endl;
cout<<"Value of b is "<<b<<endl;
}
};
int main()
{
	//initialization list of constructor in cpp c++
	test t(10,20);
	
	return 0;
}

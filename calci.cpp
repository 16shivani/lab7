code for calci

#include <iostream>
using namespace std

class calci
{
	public:
	int x,y,result;

	int sum (x, y);
	int subtract (x, y);
	int multiply (x, y);
	int division (x, y);


}

int main()
{
	int op;
	cout<<"enter first value/n";
	cin>>x;
	cout<<"enter second value";
	cin>>y;
	cout<<"enter operation ( + - * / )";
	cin>>op;

	if(op==+)
	{ 
		sum(x, y);
		break;
	}
	if(op==-)
	{
		subtract(x, y);
		break;
	}
	if(op==*)
	{
		multiply(x, y);
		break;
	}
	if(op==/)
	{
		division(x, y);
		break;
	}
cout<<"result:"<<result;
return 0;
} 

int sum(int x, int y)
{
	result=x+y;
	return 0;
}
int subtract(int x, int y)
{
	result=x-y;
	return 0;
}
int multiply( int x, int y)
{
	result=x*y;
	rrturn 0;
}
int division(int x, int y)
{
	result=x/y;
	return 0;
}











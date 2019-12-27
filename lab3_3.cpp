#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	float i=2;
	float sum=0;
	while( i<=69)
	{
		sum=sum+(1/i);
		i=i+1;
	}
	cout<<"Sum : "<<sum;
	return 0;
}
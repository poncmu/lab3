#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	float i=6;
	float sum=0;
	while( i<=19)
	{
		sum=sum+(1/i);
		i=i+1;
	}
	cout<<"Sum : "<<sum;

	return 0;
}
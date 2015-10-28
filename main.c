#include"stdio.h"


void delay();
void main()
{
	cout<<"hello world!"<<endl;
	delay();
}

void delay()
{
	unsigned int i,j=0;
	for(i=100;i>0;i--)
		j++;
}
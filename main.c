#include"stdio.h"


void delay(int us);
void delay(int ms);
void main()
{
	cout<<"hello world!"<<endl;
	delay();
}

void delay(int us)
{
	unsigned int i,j=0;
	for(i=0;i<us;i++)
	for(j=10000;j>0;j++);
}


void delay(int ms)
{
	unsigned int i,j=0;
	for(i=0;i<ms;i++)
	for(j=100;j>0;j++);
}
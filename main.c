#include"stdio.h"


void delay(us);
void main()
{
	cout<<"hello world!"<<endl;
	delay();
}

void delay(us)
{
	unsigned int i,j=0;
	for(i=0;i<us;i++)
	for(j=100;j>0;j++);
}
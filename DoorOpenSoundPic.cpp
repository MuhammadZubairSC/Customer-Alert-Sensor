#include<reg51.h>

void MsDelay (unsigned int);

sbit Dsensor = P1^1;
sbit Dbuzzer = P1^7;

void main(main)
{
	Dsensor = 1;
	
	while(1)
	{
		while(Dsensor == 1)
		{
			Dbuzzer = 0;
			MsDelay(100);
			Dbuzzer = 1;
			MsDelay(100);
		}
	}
}

void MsDelay(int Z)
{
		for(int i=0; i<z; i++)
		{
			i;
		}
}

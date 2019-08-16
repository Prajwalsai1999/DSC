#include<stdio.h>
void main()
{
	int AMAR, AKBAR, ANTONY;
	printf("Enter the age of AMAR,AKBAR and ANTONY\n");
	scanf("%d%d%d",&AMAR,&AKBAR,&ANTONY);
	if(AMAR<AKBAR && AKBAR<ANTONY)
	{
		printf("AKBAR is youngest");
	}
	else if(ANTONY< AKBAR && ANTONY<AMAR)
	{	
		printf("ANTONY is youngest");
	}
	else
	{
		printf("AMAR is the youngest");
	}
	
	

}
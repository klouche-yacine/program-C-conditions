#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c;
	float delta;
	float x1,x2;
	printf("introduire la valeur de a:");
	scanf("%f",&a);
	printf("introduire la valeur de b:");
	scanf("%f",&b);
	printf("introduire la valeur de c:");
	scanf("%f",&c);
	if (a!=0)
	{
	delta=b*b-4*a*c;
	printf("delta est%f\n",delta);
	   if (delta>0){
		printf("l equation a deux solution x1 et x2");
		x1=-b+(sqrt(delta))/(2*a);
		x2=-b-(sqrt(delta))/(2*a);
		printf("x1 est:%f\n et x2 est:%f\n",x1,x2);
	  }
	   if (delta==0){
		printf("l equation a une solution x1");
		x1=-b/(2*a);
		printf("x1 est:%f\n",x1);
	    }  
	    if (delta<0){
		printf("pas de solution");
	    }
}
    if (a==0){
    	printf("l equation est equation du 1 degere");
    	if (b!=0)
		{
    		printf("l equation a une solution s");
    		x1=-c/b;
    		printf("s est:%f\n",x1);
		}
		if(b==0){
			printf("l equation na pas de solution");
		}
	}
}

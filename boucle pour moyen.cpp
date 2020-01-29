#include<stdio.h>
main(){
	int i;
	float moyen,n,s=0;
	for(i=0;i<=9;i++)
	{
	printf("donnez la note");
	scanf("%f",&n);
    s=s+n;
    }
    moyen=s/10;
    printf("moyen est:%f\n",moyen);
    if (moyen>10){
    	printf("admis");
	}
	if (moyen<10){
		printf("ajournee");
	}
}

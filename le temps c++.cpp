#include<stdio.h>
main(){
	int s,m,h;
	printf("donne le temps en s:");
	scanf("%d",&s);
	h= s/3600;
	m= s%3600/60;
	s=s%3600%60;
	printf("h est:%d\n",h);
	printf("m est:%d\n",m);
	printf("s est:%d\n",s);
}

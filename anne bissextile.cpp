#include<stdio.h>
#include<math.h>
 main(){
 	int a;
 	printf("donne la valeur de a:");
 	scanf("%d",&a);
 	if (a%4==0 && a%100!=0 || a%400==0 ){
 		printf("annee bissextile");
                                     	 }
     else printf("anne n est pas bissextile");                                	 
 }

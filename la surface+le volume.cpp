#include<stdio.h>
#include<math.h>
#define R 6387
#define pi 3.14
main(){
float v,s;
s=R*R*4*pi;
v=(4.0/3)*pi*pow(R,3);	
printf("la surface est %f\n",s);
printf("le volume est %F\n",v);
}

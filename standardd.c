#include<stdio.h>
#include<math.h>
int main(){
float a[7] = {25,35,21,67,98,27,64};
float b[7] = {52,10,5,98,52,36,69};
float A=48.14,B=46;
float sd=0,sa=0,sb=0,s=0,saa=0,sbb=0,aa,bb;
int i;
for(i=0;i<7;i++){
sa=(a[i]-A)*(a[i]-A);
printf("\nIndividual sa:%f\n",sa);
saa=saa+sa;
sb=(b[i]-B)*(b[i]-B);
printf("Individual sb:%f\n",sb);
sbb=sbb+sb;
}
aa=saa/6;
bb=sbb/6;
s=sqrt(saa/6);
sd=sqrt(sbb/6);
printf("\nsummation of a:%f",saa);
printf("\nsummation of b:%f\n",sbb);
printf("\ndivision result of a:%f",aa);
printf("\ndivision result of b:%f\n",bb);

printf("\nsd of a:%f\n",s);
printf("\nsd of b:%f\n",sd);
return 0;
}

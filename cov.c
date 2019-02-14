#include<stdio.h>
int main(){
/*float a[4] = {2.1,2.5,3.6,4.0};
float b[4] = {8,10,12,14};
float A=3.1,B=11;*/
float a[7] = {25,35,21,67,98,27,64};
float b[7] = {52,10,5,98,52,36,69};
float A=48.14,B=46;
float cv=0,bv=0,kv;
int i=0;
for(i=0;i<7;i++){
cv=(a[i]-A)*(b[i]-B);
printf("Individual:%f\n",cv);
bv = bv + cv;
printf("\n%f\n",bv);
}
printf("\n\nSummation:%f\n\n",bv);
kv = bv/6;
printf("\n\nResult:%f\n\n",kv);
return 0;
}

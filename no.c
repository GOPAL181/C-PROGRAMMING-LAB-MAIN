#include<stdio.h>
int main(){
int ld,se=0,so=0;
long long int pno;
printf("enter the value");
scanf("%lld",&pno);
printf("%lld",pno);
while(pno>0){
ld=pno%10;
 if(ld%2==0){
se=se+ld;}
else{
so=so+ld;}
pno=pno/10;
}
printf("sum of even%d",se);
printf("sum of odd%d",so);
return 0;
}



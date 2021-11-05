#include<stdio.h>
int main(){
    int id1=123,p1=001,id2=111,p2=007,i,p,c,d,e=5,f=7,g=9,h=10,n,a,b;
    printf("\t\t\t\twelecom to pizzza & pizza");
    printf("\nenter your user id and password");
    printf("\nUSER ID=");
    scanf("%d",&i);
    printf("\nPASSWORD");
    scanf("%d",&p);
    if(i==id1 && p==p1){
        printf("\t\t\t\twelecom ");
        printf("\nHere is the menu ");
        printf("\n1-cheese pizza-RS 1000\n2-cheeseburst pizza RS1500\n3-onion pizza RS2000\n4-paneer pizza RS 2500 ");
        printf("\npress the number 1 to give order else press 0 for exit ");
        scanf("%d",&c);
        if(c==0){
            printf("\nthank you");
        }
        else{
            printf("\nenter the number");
            scanf("%d",&a);
            printf( "\nquantity");
            scanf("%d",&b);
            if(a==1){
                printf("\nyour order is cheese pizza  cost=%d",1000*b," and quantity =%d",b);
            }
            else if(a==2){
                printf("\nyour order is cheeseburst pizza  cost=%d",1500*b,"and quantity=%d",b);    
            }
            else if(a==3){
                 printf("\nyour order is onion  pizza  cost=%d",2000*b,"and quantity=%d",b); 
            }
            else if(a==4){
                 printf("\nyour order is paneer pizza   cost=%d",2500*b,"and quantity=%d",b); 
            }
            else{
                printf("\nwrong input");
            }
            printf("\nyour order have successfuly taken.Thank You ");
        }
    }
    else if(i==id2 && p==p2){
        printf("\nwelecom admin");
        printf("\npress 1 for giving order or press 2 for  managing stocks and 0 for exit");
        scanf("%d",&d);
        if(d==0){
            printf("\nthankyou");
        }
        else if(d==1){
            printf("\nHere is the menu ");
            printf("\n1-cheese pizza-RS 1000\n2-cheeseburst pizza RS1500\n3-onion pizza RS2000\n4-paneer pizza RS 2500 ");
            printf("\npress the number 1 to give order else press 0 for exit ");
            scanf("%d",&c);
            if(c==0){
                printf("\nthank you");
                }
            else{
                 printf("\nenter the number");
            scanf("%d",&a);
            printf( "\nquantity");
            scanf("%d",&b);
            if(a==1){
                printf("\nyour order is cheese pizza  cost=%d",1000*b," and quantity =%d",b);
            }
            else if(a==2){
                printf("\nyour order is cheeseburst pizza  cost=%d",1500*b,"and quantity=%d",b);    
            }
            else if(a==3){
                 printf("\nyour order is onion  pizza  cost=%d",2000*b,"and quantity=%d",b); 
            }
            else if(a==4){
                 printf("\nyour order is paneer pizza   cost=%d",2500*b,"and quantity=%d",b); 
            }
            else{
                printf("\nwrong input");
            }
                printf("\nyour order have successfuly taken.Thank You ");
                }
        }
        else if(d==2){
            printf("\nHere is the sctock");
            printf("\n1cheese pizza\t%d",e);
            printf("\n2cheesburst pizza\t%d",f);
            printf("\n3onion pizza\t%d",g);
            printf("\n4paneer pizza\t%d",h);
            printf("\nselect the number to change stock");
            scanf("%d",&n);
            if(n==1){
                printf("\nenter the stock");
                scanf("%d",&e);
            }
            else if(n==2){
                 printf("\nenter the stock");
                scanf("%d",&f);
            }
            else if(n==3){
                 printf("\nenter the stock");
                scanf("%d",&g);
            }
            else if(n==4){
                 printf("\nenter the stock");
                scanf("%d",&h);
            }
            else{
                printf("\ninvalid value");
            }
            printf("data has been saved");
    
        }
        else{
            printf("invalid value");
        }
    }
    else{
        printf("\ninvalid id or password");
    }
}

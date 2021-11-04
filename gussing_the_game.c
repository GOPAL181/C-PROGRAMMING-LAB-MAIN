/*write a program to make guessing the game 
1 the user will be given a maximum 3 chance
2 10 points for the correct answer on the first attempt,5 points on the second, and 2 points on the third attempt
3 users can get a hint a maximum of 3 times and for each hint 1 point deducted*/
#include<stdio.h>
int main(){
    int i=1,h=0,p=10,c,v,b;
    printf("\t\t\t guessing the game    ");
    printf("\nhere is the rules");
    printf(" \nthe user will be given maximum 3 chance\n10 point for correct answer in first attempt ,5 point in second and 2 points in third attempt\nuser can get hint maximum 3 times and for each hint 1 point will be deducted");
    while(i<4){
        printf("\nenter the choice 0 for hint 1 for answer");
        scanf("%d",&c);
        if(c==1){
            printf("enter the value");
            scanf("%d",&v);
            if(v==6){
                if(i==1){
                    b=(p-h);
                    printf("your answer is correct. your point is%d",b);
                    break;
                }
                else if(i==2){
                    b=(p-(h+5));
                    printf("your answer is correct. your point is%d",b);
                    break;
                }
                else if(i==3){
                    b=(p-(h+7));
                    printf("your answer is correct. your point is%d",b);
                    break;
                }
            
            }
            else{
                printf("wrong answer.try again");
                i=i+1;
            }
        }
        else if(c==0){
            if(h==0){
                printf("number is between 1-9");
                h=h+1;
            }
            else if(h==1){
                printf("number is divisible by 2");
                h=h+1;
            }
            else if(h==2){
                printf("number is multiple of 2,3");
                h=h+1;
            }
            else{
                printf("your hint limit is exceeded out");
            }

        }
    }    
}


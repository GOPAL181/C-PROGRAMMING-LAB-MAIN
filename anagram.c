#include<stdio.h>
#include<string.h>
void main(){
    char str[100],str2[100],a;
    int i,j,len1,len2,flag=0;
    scanf("%s",str);
    scanf("%s",str2);
    len1=strlen(str);
    len2=strlen(str2);
    if(len1==len2){
    for(i=0;i<len1;i++){
        a=str[i];
        for(j=0;j<len2;j++){
            if(a==str2[j]){
                flag++;
            }
        }
    }
    if(flag==len1){
        printf("anagram");
    }
    else{
        printf("not anagram");
    }
    }
    else{
        printf("number of alphabet in each string is not same");
    }
}
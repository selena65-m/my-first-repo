#include<stdio.h>
int main(){
    int marks1, marks2, marks3;
    printf("enter marks:");
    scanf("%d %d %d", &marks1,&marks2, &marks3);
     printf("The marks are %d %d and %d\n",marks1,marks2, marks3);
    if(marks1<33 || marks2<33 || marks3<33){

        printf("faied due to less number in individual subject\n");
    }
    else if((marks1+marks2+marks3)/3<40){
        printf("you are failed due to less perchantage\n");
    }else{
    printf("passed!");
    }
 return 0;
}

// Your code here...
#include <stdio.h>
int main(){
    int num1;
    int num2;
    scanf("%i %i",&num1,&num2);
    if((num1>0 && num2<0) || (num1<0 && num2>0)){
        printf("True");
    }
    else{
        printf("False");
    }
}
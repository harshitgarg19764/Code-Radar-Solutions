// Your code here...
#include <stdio.h>
int main(){
    int num;
    int binary=0;
    int ans=0;
    scanf("%d",&num);
    while(num>0){
        int binary = num%2;
        // ans = ans*10 + binary;
        num=num/2; 
    }
        printf("%d",binary);
}
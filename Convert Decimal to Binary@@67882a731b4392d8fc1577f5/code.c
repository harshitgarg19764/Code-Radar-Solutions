#include <stdio.h>
int main(){
    int num;
    int binary;
    int ans=0;
    scanf("%d",&num);
    while(num>0){
        int binary = num%2;
        // ans = ans*10 + binary;
        printf("%d",binary);
        num=num/2; 
    }
}
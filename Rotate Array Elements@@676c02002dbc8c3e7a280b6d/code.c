// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=k+1;i<n;i++){
        printf(num[i]);
    }
    for(int i=0;i<k+1;i++){
        printf(num[i]);
    }
}
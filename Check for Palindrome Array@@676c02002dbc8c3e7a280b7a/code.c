// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int start =0;
    int end = n-1;

    while(start<end){
        if(num[start]==num[end]){
             printf("YES");
    }
}
}
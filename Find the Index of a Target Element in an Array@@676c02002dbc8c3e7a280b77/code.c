// Your code here...
#include <stdio.h>
int fun(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        if(num[i]==t){
            return i;
        }
    }
    return -1;


}
int main(){
    int a = fun();
    printf("%d",a);
}
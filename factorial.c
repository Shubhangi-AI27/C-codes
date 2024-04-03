#include<stdio.h>
int fact(int n);
int main(){
    printf("factorial is %d\n",fact(10));
    return 0;
}
int fact(int n){
    if(n==1){     // base case(necessary to stop recursion)
        return 1;
    }
    int f1;
    f1= fact(n-1);
    f1= fact(n-1)*n;
    return f1;
}
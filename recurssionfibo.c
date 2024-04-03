#include<stdio.h>
void fibonacci(int n);
int main(){
    int n;
    printf("enter value of n");
    scanf("%d",&n);
    printf("0\n1\n");
    fibonacci(n-2);
    return 0;
    

}
void fibonacci(int n){
  static  int n1=0,n2=1,n3;
  if(n>0){
    n3= n1+n2;
    n1=n2;
    n2=n3;
    printf("%d\n",n3);
    fibonacci(n-1);
  }
}
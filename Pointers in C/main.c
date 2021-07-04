#include<stdio.h>
#include<math.h>

void update(int *a,int *b){
    int sum,diff;
    sum=*a+*b;
    diff=abs(*a-*b);
    printf("%d\n",sum);
     printf("%d\n",diff);



}
int main(){
    int x,y;
    int *m=&x,*n=&y;
    scanf("%d%d",&x,&y);
    update(m,n);

}

#include<stdio.h>

//int max(int,int);
int max(int a,int b){
    if(a>b)return a;
    else return b;
}
int main(){
    int(*pfun)();
    int x,y,z;
    printf("Input tow numbers:\n");
    scanf("%d,%d",&x,&y);
    pfun = max;
    z = (*pfun)(x,y);
    printf("\nmax int:%d ",z);
    return 0;

}


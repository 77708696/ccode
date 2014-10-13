#include<stdio.h>

int main(){
    int a[10],i;

    for(i=0;i<10;i++)
        a[i]=i;
    for(i=0;i<5;i++)
        printf("a[%d]=%d\n",i,a[i]);

    printf("list*p:\n");
    int *p;
    p=a;
    for(i=0;i<10;i++)
        *(p+1)=i;
    for(i=0;i<10;i++)
        printf("a[%d]=%d\n",i,*(p+i));

    printf("\n%d ",*p);

    return 0;

}

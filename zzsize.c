#include<stdio.h>

int main(int argc,char **argv){

    int *p;
    char *pc;
    long int *pl;

    printf("int:%d\nchar:%d\nlong int:%d\n",sizeof(p),sizeof(pc),sizeof(pl));
    //printf("argc:%d",argc);
    //*pc="abcdef";
    printf("指针地址:%d\n指针地址加1地址:%d\n",pc,pc+1);
    
    //*p=12;
    printf("int指值地:%d\n,int指针加1地址:%d\n",p,p+1);
    int a[11]={1,2,3,4,5,6,7,8};
    int *p1=a;
    int *q=&a[1];

    




    return 0;

}

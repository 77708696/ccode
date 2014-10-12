#include<stdio.h>


int main(){

    int a=10,b=20,s,t,*pa,*pb;
    pa=&a;
    pb=&b;
    s=*pa+*pb;
    t=*pa**pb;
    printf("a=%d\nb=%d\na+b=%d\na*b=%d\n",a,b,a+b,a*b);
    printf("s=%d\nt=%d\n",s,t);
    return 0;
    

}

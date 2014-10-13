#include<stdio.h>


int main(){
    char name[]="huang";
    char str[] = "I like huang";
    char *p = name;
    int a[2] = {2,1};
    int *p1 = &a;
    printf("\nname is : %s ",name);
    printf("\n*p is : %c ",*p);
    printf("\n*int is : %s ",str);
    return 0;

}

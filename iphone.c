#include<stdio.h>
#define NUM 3


struct memphone{
    char name[20];
    char phone[12];
}man1={"huang xiao ming","13522723158"},*pmem;

int main(){
    struct memphone man[NUM];
    pmem = &man1;
    //struct memphone man1;
    printf("init man.name= %s  man.phpne= %s\n",man1.name,pmem->phone);
    int i;
    for(i=0;i<NUM;i++)
    {
        printf("input name:\n");
        gets(man[i].name);
        printf("input phone:\n");
        gets(man[i].phone);
    }

    printf("\n name\t\tphone\n\n");

    for(i=0;i<NUM;i++){
        printf("%s\t\t\t%s\n",man[i].name,man[i].phone);
    }

    printf("指针访问数组结构体\n");
    for(pmem=man;pmem<man+5;pmem++){
        printf("%s\t\t\t%s\n",pmem->name,pmem->phone);
    }
    return 0;
}

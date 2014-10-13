#include<stdio.h>

struct date{
    int month;
    int day;
    int year;
};

struct boy{
    int num;
    char *name;
    char sex;
    struct date birthday;
    float score;
}boy2={1,"li feng",'v',{2,3,1998},87.5};


int main(){

    struct date d1;
    d1.day = 20;
    d1.year = 2011;
    d1.month = 8;

    printf("struct");

    printf("\nstruct: %d-%d-%d",d1.year,d1.month,d1.day);

    struct boy boy1;
    boy1.name="huang xiaoming1";
    boy1.birthday = d1;

    printf("\nname: %s ,year: %d ,boy2.name=%s",boy1.name,boy1.birthday.year , boy2.name);

    printf("\n siteof: %d" ,sizeof(boy1));
    return 0;
}

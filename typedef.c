#include<stdio.h>

void sayHello();

void sayHello(){
    printf("hi c\n");
}

struct Person {
    int age;
    char *name;
};

typedef void (*Func)();

int main(){
    struct Person person;

    int a = 10;
    int *p = &a;//指针定义 *p
    *p = 11; //指什赋值
    //p = &a;
    //person.name = "huang";
    printf("name is : %d \n" , a);
    Func f = sayHello;
    f();
    return 0;
}

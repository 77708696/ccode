#include<stdio.h>
int search(int *a, int num, int low, int high)
{
    int mid =(low + high)/2;
    if(low<=high)
    {
        if(num < a[mid])
            return search(a, num, low, mid-1); //加return
        if(num > a[mid])
            return search(a, num, mid+1, high);//加return
        if(num==a[mid])                     
            return 1;
    }
    else
        return 0;
}
int main(){
    int a[11] = {0, 1, 2, 3, 4, 5, 9, 11, 12, 13, 15};
    if(search(a, 11, 0, 10)==1)
        printf("success!!");
    else 
        printf("failed!!");
}

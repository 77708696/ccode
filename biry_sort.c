#include<stdio.h>

void sort_bubble_asc(int *,int);
void search_to_print(int *,int);
void print_arr(int *,int);

int main(){
    /*start data*/
    int arr[] = {72,8,26,2,17,35,80};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("length:%d\n",length);
    printf("\n打印数组\n");
    print_arr(arr,length);

    printf("排序后的数组");

    sort_bubble_asc(arr,length);
    print_arr(arr,length);

    printf("\n\n查找后的数据\n\n");
    search_to_print(arr,length);
    return 0;

}
void search_to_print(int *ptr,int len){
    int low,high,mid;
    low=0;
    high=len-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(*(ptr+mid)>=7 && *(ptr+mid)<=20)
            break;
        if(*(ptr+mid)<7){
            low = mid +1;
        }
        if(*(ptr+mid)>20)
        {
            high = mid -1;
        }
        printf("\nmid: %d : %d\n ",mid,*(ptr+mid));
    }
    for(;low<=high;low++)
    {
        if(*(ptr+low)>=7 && *(ptr+low)<=20)
            printf("%d ",*(ptr+low));
    }
}

void sort_bubble_asc(int *ptr,int len){
    int i,j;
   // printf("\n\n开始排序\n\n");
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
           // print_arr(ptr,len);
            //printf("\nj=%d:start_>*(ptr+i):%d ",j,*(ptr+i));
            if(*(ptr+i)>*(ptr+j)){
               // printf(" %d ",*(ptr+i) + *(ptr+j));
                *(ptr+i) = *(ptr+i) + *(ptr+j);
                *(ptr+j) = *(ptr+i) - *(ptr+j);
                *(ptr+i) = *(ptr+i) - *(ptr+j);
            }
           // printf("\nj=%d:end->*(ptr+i):%d ",j,*(ptr+i));

            //printf("\n\n具体每一频\n\n");
            //print_arr(ptr,len);
        }
       // print_arr(ptr,len);
    }

}

void print_arr(int *ptr,int len){
    int i;
    printf("\n");
    for(i=0;i<len;i++)
    {
      printf("%d ",*(ptr+i));
    }
}

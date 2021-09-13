#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int arr[10] = {1,10,5,8,7,6,4,3,2,9};
    int j, temp;
    for(int i=0;i<9;i++)
    {
        j=i; //정렬할 원소 선택
        while(j>=0 && arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }
    }

    for(int i=0;i<10;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

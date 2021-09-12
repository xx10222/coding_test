#include <stdio.h>
#include <iostream>

using namespace std;

// 선택 정렬(selection sort)
int main()
{
    int array[10]={1,10,5,8,7,6,4,3,2,9};
    int index, temp;
    int min = 99999;
    for(int i=0;i<10;i++)
    {
        for(int j=i;j<10;j++)
        {
            if(min>array[j])
            {
                min=array[j];
                index=j;
            }
        }
        temp=array[i];
        array[i]=array[index];
        array[index]=temp;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

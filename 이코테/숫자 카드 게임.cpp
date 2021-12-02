#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int min=10001,result=0;
    int arr[100][100]={0};
    
    cin>>n>>m; //n,m 입력받기
    
    for(int i=0;i<n;i++) //카드 배열로 입력 받기
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(min>arr[i][j])
            {
                min=arr[i][j];
            }
        }
        if(result<min)
        {
            result=min;
        }
        min=10001; //행마다 min 초기화
    }
    printf("%d\n",result);
    return 0;
}

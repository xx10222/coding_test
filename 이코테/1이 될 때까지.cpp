#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n, k, target, result=0;
    cin >> n >> k;
    
    while(1)
    {
        target=(n/k)*k; //n이 될 수 있는 가장 큰 k의 배수
        result += (n-target); //n이 앞에서 구한 k의 배수가 되기 위해 빼준 횟수를 더해준다
        n=target;
        
        if(n<k) break; //n을 k로 나눌 수 없는 경우 반복문 탈출
        
        n/=k; //n을 k로 나누기
        result++; //한 번 나눴으니까 1 추가
    }
    
    result += (n-1); //n이 1이 되기 위해 빼줘야 하는 남은 횟수를 다 더해준다
    cout<<result;

    return 0;
}

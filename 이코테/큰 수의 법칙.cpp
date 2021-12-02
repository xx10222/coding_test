#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,k, first, second;
    int tmp;
    int result=0, count =0;
    vector<int> x;
    
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        x.push_back(tmp);
    }
    
    sort(x.begin(),x.end());
    
    first=x[n-1];
    second=x[n-2];
    
    count = m/(k+1)*k; //가장 큰 수가 더해지는 횟수
    count += m%(k+1); // 가장 큰 수가 추가로 더해지는 횟수
    
    result += (count)*first; // 가장 큰 수 더하기
    result += (m-count)*second; //두 번째로 큰 수 더하기
    
    cout << '\n'<< result;
    return 0;
}

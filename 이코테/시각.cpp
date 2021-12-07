#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int count=0;
    string time;
    
    cin>>n; //시간 n 입력받기
    
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<60;j++)
        {
            for(int k=0;k<60;k++)
            {
                time=to_string(i)+to_string(j)+to_string(k);
                if(time.find('3') != string::npos)
                {
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}

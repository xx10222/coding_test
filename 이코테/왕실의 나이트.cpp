#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string night;
    
    cin>>night;
    
    int row = night[1] - '0';
    int col = night[0] - 'a' + 1;
    int result=0;
    
    // 나이트가 이동할 수 있는 8가지 방향 정의
    //(-2,-1), (-2, 1), (2,-1), (2,1), (1,-2), (1,2) ,(-1,-2), (-1, 2)
    int dx[] = {-2, -2, 2, 2, 1, 1, -1, -1};
    int dy[] = {-1, 1, -1, 1, -2, 2, -2, 2};
    
    for(int i=0;i<8;i++)
    {
        int next_row = row + dx[i];
        int next_col = col + dy[i];
        
        if(next_row>=1 && next_row<=8 && next_col>=1 && next_row<=8)
        {
            result++;
        }
    }

    printf("%d\n", result);
    return 0;
}

#include <stdio.h>
#include <iostream>

using namespace std;

int n, m, x, y, direction;
int d[50][50]; //방문 위치 저장
int arr[50][50]; //맵 정보
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

void turn_left() {
    direction--;
    if(direction == -1)
        direction=3;
}
int main()
{
    cin>>n>>m;
    cin>>x>>y>>direction;
    d[x][y]=1;
    
    //맵 정보 입력받기
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            arr[i][j]=x;
        }
    }
    
    //시뮬레이션 시작
    int count=1;
    int turn_time=0;
    while(true) {
        turn_left();
        int nx = x + dx[direction];
        int ny = y + dy[direction];
        
        if(d[nx][ny]==0 && arr[nx][ny]==0) {
            d[nx][ny]=1;
            x=nx;
            y=ny;
            count++;
            turn_time=0;
            continue;
        }
        else turn_time++;
        
        if(turn_time==4) {
            nx = x - dx[direction];
            ny = y - dy[direction];
            
            if(arr[nx][ny]==0) 
            {
                x=nx;
                y=ny;
                
            }
            else break;
            turn_time = 0;
        }
    } 
    cout << count;

    return 0;
}

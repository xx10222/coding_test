#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    char temp;
    int x=1, y=1;
    int nx=0, ny=0;
    string plan;
    
    cin>>n;
    cin.ignore();
    getline(cin,plan);
    for(int i=0;i<plan.length();i++)
    {
        switch (plan[i]) {
            case 'L':
                ny = y-1;
                break;
            case 'R':
                ny = y+1;
                break;
            case 'U':
                nx = x-1;
                break;
            case 'D':
                nx = x+1;
                break;
        }
        if(nx>=1 && nx<=n) {
            x=nx;
        }
        if(ny>=1 && ny<=n) {
            y=ny;
        }
        nx=0;
        ny=0;
    }
    printf("%d %d",x,y);
    return 0;
}

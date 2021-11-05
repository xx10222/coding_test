#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;
    int x1,x2,y1,y2, resx,resy;
    bool xx = false;
    bool yy=false;
    x1=v[0][0];
    y1=v[0][1];
    for(int i=1;i<v.size();i++)
    {
        if(x1!=v[i][0]) x2=v[i][0];
        else xx=true;
        
        if(y1!=v[i][1]) y2=v[i][1];
        else yy=true;
    }
    
    if(xx==true)
    {
        resx=x2;
    }
    else {
        resx=x1;
    }
    
    if(yy==true) {
        resy=y2;
    }
    else {
        resy=y1;
    }
    ans.push_back(resx);
    ans.push_back(resy);
    return ans;
}

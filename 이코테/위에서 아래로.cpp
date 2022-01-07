#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) 
{
    return a > b;
}
int main()
{
    int n;
    vector<int> v;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end(), compare);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}

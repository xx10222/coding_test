#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int arr[10] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
    
    for(int i=0;i<n;i++)
    {
        int min_index = i;
        
        for(int j=i+1;j<n;j++)
        {
            if(arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

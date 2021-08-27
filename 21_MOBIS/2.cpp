#include <string>
#include <vector>
#include <iostream>

using namespace std;

int find(string temp) {
    int res=0;
    for(int i=0;i<temp.size();i++)
    {
        if(temp[i]=='a')
            res++;
    }
    return res;
}

vector<bool> solution(vector<string> a) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<bool> answer;

    for(int i=0;i<a.size();i++) //문자열 별 반복문 실행
    {
        string temp = a[i];
        answer.push_back(false);
        bool brk = false;
        while(true)
        {
            if(temp=="a") break;
            if(brk==true) break;
            int len = temp.size();
            
            if(temp[0]=='a') //front
            {
                temp=temp.substr(1, temp.size());
            }
            else if(temp[len-1]=='a') //end
            {
                temp=temp.substr(0, temp.size()-1);
            }
            else
            {
                int aa = find(temp);
                if(aa==0) break;
                for(int j=0;j<aa;j++)
                {
                    if(temp[j]!='b' || temp[len-j-1]!='b')
                    {
                        brk=true;
                        break;
                    }
                }

                if(brk==true) break;
                else 
                {
                    temp=temp.substr(aa, temp.size()-aa*2);
                }
            }
            if(brk==true) break;
        }
        //while 탈출
        if(temp.compare("a")==0)
        {
            answer[i]=true;
        }
    }
    
    return answer;
}

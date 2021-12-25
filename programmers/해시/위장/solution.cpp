#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m;
    for(int i=0;i<clothes.size();i++)
    {
        string str = clothes[i][1];
        if(m.find(str)!=m.end()) //map에 존재
        {
            m[str]++;
        }
        else //map에 없음
        {
            m.insert({str,1});
        }
    }
    
    //map<string, int>::iterator it; 을 auto 자료형으로 대체!
    for(auto it=m.begin();it!=m.end();it++)
    {
        answer *= (it->second+1);
    }
    answer--;
    return answer;
}

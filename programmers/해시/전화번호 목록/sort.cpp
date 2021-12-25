#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//정렬 및 반복문 사용
bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(),phone_book.end());
    for(int i=0;i<phone_book.size()-1;i++)
    {
        string str = phone_book[i+1];
        string now = phone_book[i];
        if(now==str.substr(0,now.size()))
        {
            answer=false;
            break;
        }
    }
    return answer;
}

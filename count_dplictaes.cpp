#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int finddup(vector<int> v,int key)
{
    unordered_map<int,int> count;
    for(auto x:v)
    {
        count[x]++;
    }
    for(auto i:count)
    {
        if(i.first==key)
        {
            int c=i.second;
            return c;
            break;
        }
    }
    return 0;
}

int main()
{
     vector<int> v={1,2,2,3,3,5,5,5,25,75,75,75,97,97,97};
    int key=5;

    int count=finddup(v,key);
    cout<<"Count is"<<" "<<count;

    return 0;
}
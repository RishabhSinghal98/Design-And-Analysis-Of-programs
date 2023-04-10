#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
        
        public:
        vector<int> find_indices(vector<int>&nums)
    {
        vector<int> ans;
        {
            for(int i=0;i<nums.size()-2;i++)
            {
                for(int j=i+1;j<nums.size()-1;j++)
                {
                    for(int k=j+1;k<nums.size();k++)
                    {
                        if(nums[i]+nums[j]==nums[k])
                        {
                            //ans.push_back(nums[i]);
                            ans.push_back(i);
                            //ans.push_back(nums[j]);
                            ans.push_back(j);
                            //ans.push_back(nums[k]);
                            ans.push_back(k);
                        }
                    }
                }
            }
        }
   return ans;
    }


};

int main()
{
    Solution obj;
    //vector<int> nums={24,28,48,71,86,89,92,120,194,201};
    vector<int> nums={64,69,82,95,99,107,113,141,171,350,369,400,511,590,666};
    vector<int> result=obj.find_indices(nums);
    for(auto x:result)
    {
        cout<<x<<" ";
    }
    
    return 0;
}
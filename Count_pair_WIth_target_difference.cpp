#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
        
        public:
        int count_pair(vector<int>&nums,int target)
    {
        int count=0;
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                for(int j=i+1;j<nums.size();j++)
                {
                    if(nums[j]-nums[i]==target)
                    {
                        count++;
                    }
                   
                }
            }
        }
   return count;
    }


};

int main()
{
    Solution obj;
  
    vector<int> nums={24,71,16,92,12,28,48,14,20,22};
    vector<int> nums2={1,51,84,21,31};
    sort(nums.begin(),nums.end());
    sort(nums2.begin(),nums2.end());

    int target=4;
    int target2=20;
    int result=obj.count_pair(nums,target);
    int res=obj.count_pair(nums2,target2);

        cout<<result<<" "<<endl;
        cout<<res<<" "<<endl;
    
    
    return 0;
}

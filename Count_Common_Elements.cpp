#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
        
        public:
        vector<int> count_common_elements(vector<int>&nums1,vector<int> &nums2)
    {   
        vector<int> ans;
        int i,j;
        int n1=nums1.size();
        int n2=nums2.size();
        for(i=0,j=0;i<n1&&j<n2;)
        {
            if(nums1[i]==nums2[j])
            { 
                ans.push_back(nums1[i]);
                i++;j++;
            }
            else if(nums1[i]<nums2[j])
            {
                i++;
            }
            else j++;
        }

        
   return ans;
    }


};

int main()
{
    Solution obj;
  
    vector<int> nums1={34,76,10,39,85,10,55};
    vector<int> nums2={30,55,34,72,10,34,10,89,11,30,69,51};
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int> result;
    result=obj.count_common_elements(nums1,nums2);
    for(auto x: result)
    {
        cout<<x<<" ";
    }
    
    
    return 0;
}

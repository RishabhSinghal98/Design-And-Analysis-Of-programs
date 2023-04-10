#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
        
        public:

        void count_sort(vector<int>&nums)
        {
            int max=nums[0];
            int j=0;
            for(auto x:nums)
            {
                if(x>max) max=x;
            }
              vector<int> auxilary(max,0);
              for(int i=0;i<auxilary.size();i++)
              {
                auxilary[nums[i]]++;
              }
              while(j<max)
              {
                if(aux[j]>0)
                {
                    nums[j]=j;
                    nums[j]--;
                }
                else{
                    j++;
                }
              }

        }
        
        // int findsmallest(vector<int> &nums,int k)
        // {

        // }
        

       
        
    

};

int main()
{
    Solution obj;
   vector<int> nums={4,28,97,40,12,72,84,24,38,10};
   obj.count_sort(nums);
   for(auto x:nums)
   {
    cout<<x<<" ";
   }
   

   

   

    
    return 0;
}
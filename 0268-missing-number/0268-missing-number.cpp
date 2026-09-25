class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int total_sum=0;
      int N=0;

      for(int i=0;i<nums.size();i++)
      {
        total_sum+=nums[i];
      }

      int m=nums.size();

      N=m*(m+1)/2;

     return N-total_sum;


        
    }
};
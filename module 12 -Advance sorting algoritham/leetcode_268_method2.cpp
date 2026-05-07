#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int sum=0;
      for(int i=0;i<n;i++){
        sum=sum+nums[i];
      }
      int idx_sum=0;
       for(int i=0;i<=n;i++){
        idx_sum=idx_sum+i;
      }
      int missing_element=idx_sum-sum;
      return missing_element;
}  

};
int main() {
    int arr[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
              21,22,23,24,25,26,27,28,29};
    vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));
    Solution sol;
    int missing = sol.missingNumber(nums);
    cout << "The missing number is: " << missing << endl;
    return 0;


    
}
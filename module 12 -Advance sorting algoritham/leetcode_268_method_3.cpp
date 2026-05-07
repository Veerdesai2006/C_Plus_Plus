#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int n =nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==n){i++;}
            else{
                while(i<n){
 int correct_index=(nums[i]-1);
    if(i==correct_index){
        i++;
    }
    else{
        swap(nums[i],nums[correct_index]);
    }
}
            }

        }
        for(int i=0;i<=n;i++){
            if(nums[i]!=i){return i;}
        }
}  
};
int main() {
    // your code
}
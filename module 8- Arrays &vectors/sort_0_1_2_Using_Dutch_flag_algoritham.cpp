// Que. Sort the array of 0,1,2(leet code 75).
            //Method 2 using dutch flag algoritham.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort_colours(vector<int>&nums)
{
    int n=nums.size();
    int hi=n-1;
    int mid=0;
    int lo=0;
    while(mid<=hi){
        if(nums[mid]==2){
            int temp;
            temp=nums[mid];
            nums[mid]=nums[hi];
            nums[hi]=temp;
            hi--;
        }
        if(nums[mid]==0){
            int a;
            a=nums[mid];
            nums[mid]=nums[lo];
            nums[lo]=a;
            mid++;
            lo++;
        }
        if(nums[mid]==1){
            mid++;
        }
    }
    
}
int main(){
    vector<int>v;
   v.push_back(2);
   v.push_back(0);
   v.push_back(2);
   v.push_back(1);
   v.push_back(1);
   v.push_back(0);
   v.push_back(2);
   v.push_back(0);
   int n= v.size();
     cout<<"The unsorted array is : ";
   for(int i=0;i<v.size();i++){
       cout<<v[i];
   }    
           sort_colours(v);
           cout<<endl;
            cout<<"The sorted array is : ";
   for(int i=0;i<v.size();i++){
       cout<<v[i];
   
   }
   return 0;
}
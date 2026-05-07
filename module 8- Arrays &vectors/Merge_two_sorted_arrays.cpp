//Que. Merge two sorted arrays(leet code-88)
#include<iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int> &v1,vector<int> &v2){
int n1=v1.size();
int n2=v2.size();
int m=n1+n2;
vector<int>v3(m);
int i=0,j=0,k=0;
int n=0;
while(n<m){
    if(v1[i]<v2[j]){
        v3[k]=v1[i];
        i++;
        k++;
    }
    else{v3[k]=v2[j];
    j++;
    k++;
    }
n++;
}
return v3;
}
int main(){
    vector<int>v1;
   v1.push_back(1);
   v1.push_back(4);
   v1.push_back(5);
   v1.push_back(8);
   v1.push_back(10);
   vector<int>v2;
   v2.push_back(2);
   v2.push_back(3);
   v2.push_back(6);
   v2.push_back(7);
   v2.push_back(12);
   v2.push_back(14);
   v2.push_back(15);   
   
   int m=v1.size();
   int n=v2.size();
   vector<int>a = merge(v1,v2);
           cout<<endl;
            cout<<"The sorted array is : ";
   for(int i=0;i<a.size();i++){
       cout<<a[i];
   }
   return 0;
}
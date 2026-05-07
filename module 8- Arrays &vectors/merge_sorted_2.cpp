//Que. Merge two sorted arrays(leet code-88){method 2}
#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &v1,vector<int> &v2){
int n1=v1.size();
int n2=v2.size();
int m=n1+n2;
vector<int>v3(m);
int i=0,j=0,k=0;
while(i<n1 && j<n2){
    if(v1[i]<v2[j]){
        v3[k]=v1[i];
        i++;
        k++;
    }
    else{v3[k]=v2[j];
    j++;
    k++;
    }
if(i==n1){
    while(j<n2)
    {v3[k]=v2[j];
    j++;
    k++;
}
}

if(j==n2){
    while(i<n1)
    {v3[k]=v2[i];
    i++;
    k++;
}
}
}
return v3;
}
int main(){
    vector<int>v1;
   v1.push_back(1);
   v1.push_back(4);
   v1.push_back(5);
   v1.push_back(8);
   v1.push_back(9);
   vector<int>v2;
   v2.push_back(2);
   v2.push_back(3);
   v2.push_back(6);
   v2.push_back(7);
   v2.push_back(10);   
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













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

#include<bits/stdc++.h>
using namespace std;

 //Vector

int main()
{
     //Basic Declaration
     vector<int> vec_1;
     vector<int> vec_2 (5);
     vector<int> vec_3 {1,2,40,50};

     vector<int> vec_4;
     vec_4.push_back(50);
     vec_4.push_back(60);

     int M;
     for(int i=0;i<10;i++){
         cin>>M;
         vec_4.push_back(M);
     }

     How to Access Vector Elements
     vector<int> vec_1{10,20,30,40,50};
     int Sum = 0;
     for(int i=0;i<vec_1.size();i++){
         Sum = Sum + vec_1[i];
     }
     vec_1[0]=3;
     cout<<vec_1.front()<<endl;
     cout<<vec_1.back()<<endl;

     How to copy elements from one vector to another
     vector<int> vec_1{10,20,30,40,50};
     vector<int> vec_2(vec_1);

     How to insert elements in a vector

     vector<int> vec_1{10,20, 30,40,50};
     vector<int> vec_2 {15};

     // vec_1.insert(vec_1.begin()+2,29);
     // vec_1.insert(vec_1.begin()+2,{25,26,27,28});

     vec_2.insert(vec_2.end(), vec_1.begin()+2, vec_1.end());

     for(auto i: vec_2){
         cout<<i<<" ";
     }


     How to erase elements from vectors
     vector<int> vec_1 {10,20,30,40,50};
     vec_1.erase(vec_1.begin()+1,vec_1.begin()+4);

     vec_1.pop_back();

     How to Sort a Vector
     vector<int> vec_1 {30,14,24,15,20};
     sort(vec_1.begin(),vec_1.end(),greater<int>());

     How to Search on Vectors

    1028 -  1004 =  (24/4) = 6

     vector<int> vec_1 {10,20,30,40,50};

     auto it = find(vec_1.begin(),vec_1.end(), 20);
     int pos = it - vec_1.begin();

     cout<<pos<<endl;

     How to Do Binary Search on Vector

     vector<int> vec_1 {10,20,30,40,50};
     int result = binary_search(vec_1.begin(),vec_1.end(),45);

     cout<<result<<endl;

     How to find position of First Occurence and Last Occurence
     vector<int> vec_1 {10,20,30,30,30,30,30,30,40,50};

     auto first_pos = lower_bound(vec_1.begin(),vec_1.end(), 30);
     auto last_pos = upper_bound(vec_1.begin(),vec_1.end(),30); // upper_bound returns the index of next highest value

     cout<<"First Occurence - "<< first_pos - vec_1.begin()<<endl;
     cout<<"Last Occurence - "<< (last_pos - vec_1.begin()) -1<<endl;

}

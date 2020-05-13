#include<iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using  namespace std;

int  func(vector<int>v1,vector<int>v2){
    unordered_set<int>s;
    int c=0;
    if(v1.size()>=v2.size()){

        sort(v2.begin(),v2.end());
        for(int i : v1){
            if(binary_search(v2.begin(),v2.end(),i)){
                if(s.find(i)!=s.end()){
                    continue;
                }
                else{
                    s.insert(i);
                }
                c++;
            }
            else{
                continue;
            }
        }
    }
    else{

        sort(v1.begin(),v1.end());
        for(int i : v2){
            if(binary_search(v1.begin(),v1.end(),i)){
                if(s.find(i)!=s.end()){
                    continue;
                }
                else{
                    s.insert(i);
                }
                c++;

            }
            else{
                continue;
            }
        }
    }
    return s.size();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<x;i++){
            int x;
            cin>>x;
            v1.push_back(x);
        }
        for(int j=0;j<y;j++){
            int h;
            cin>>h;
            v2.push_back(h);
        }
       cout<< func(v1,v2);
    }
}
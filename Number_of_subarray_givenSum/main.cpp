/**
 * Given an unsorted array of integers, find the number of subarrays having sum exactly
 * equal to a given number k.
 * Input : arr[] = {10, 2, -2, -20, 10},
        k = -10
Output : 3
Subarrays: arr[0...3], arr[1...4], arr[3..4]
have sum exactly equal to -10.
 */
#include <iostream>
#include <map>
#include <vector>
using namespace std;
void check(vector<int>vec,int k){
    int cursum=0;
    map<int,int>mp;
    int res=0;
    for(int i=0;i<vec.size();i++){
        cursum=cursum+vec[i];

        if(cursum==k){
            res++;
        }

        if(mp.find(cursum-k)!=mp.end()){
            res=res+mp[cursum-k];
        }

        mp[cursum]++;
    }
    cout<<res<<endl;
}
int main(){
    vector<int>vec{7,2,5,3,4};
    int k=14;
    check(vec,k);
    return 0;
}
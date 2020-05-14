#include<iostream>
#include<vector>
#include<map>
using namespace std;

/**
 * sum = required sum
 * map to store all the current sums so that any time current sum is to be added to any other
 * element we can get it from map that how many times we have that sum combination
 * to know number if possible pairs.
 * @param vec
 * @param sum
 */
void number_of_subarray(vector<int>vec,int sum){
    int res=0;
    int currsum=0;
    map<int,int>mp; //store the
    for(int i=0;i<vec.size();i++){
        currsum=currsum+vec[i];

        if(currsum==sum){
            res++;
        }

        if(mp.find(currsum-sum)!=mp.end()){
            res=res+mp[currsum-sum];
        }

        mp[currsum-sum]++;
    }

    cout<<res<<endl;

}

int main(){
    vector<int>vec{-10,2,-2,-20,10};
    int sum=-10;
    number_of_subarray(vec,sum);
    return 0;
}
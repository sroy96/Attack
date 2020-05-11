
/**
 * Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.
 * first+second = third;
 */
#include <iostream>
#include <vector>
using namespace std;

void count_triplet(vector<int>vec,int n){
    sort(vec.begin(),vec.end());
    int f,s,t,count=0;
    for( f=0;f<n-2;f++){
        s=f+1;
        t=s+1;
        while(t<n){
            if(vec[f]+vec[s]==vec[t]){
                count++;
                s++;
            }
            else if (vec[f]+vec[s]<vec[t]){
                t--;
                s++;
            }

            t++;
        }
    }
    cout<<count<<endl;
}

int main(){
    vector<int>vec{1,2,3,5,7};
    count_triplet(vec,5);
    return 0;
}
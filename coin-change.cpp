#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
    int amount;
    int n;
    cout<<"Amount= ";
    cin>>amount;
    cout<<"Number of coins= ";
    cin>>n;
    int coin[n];
    int m[n+1][amount+1];

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        coin[i]=x;
    }

    for(int r=0;r<=n;r++){
        for(int c=0;c<=amount;c++){
          if(r==0 && c>=1 ){
            m[r][c]=0;
          }
          else if(c==0){
            m[r][c]=1;
          }
          else{
           int prevcoin=m[r-1][c];
           int currentcoin;

            if((c-coin[r-1])>=0){
                currentcoin=m[r][c-coin[r-1]];
            }
            else{
                currentcoin=0;
            }

            m[r][c]=prevcoin+currentcoin;
          }

        }
    }


     for(int r=0;r<=n;r++){
        for(int c=0;c<=amount;c++){
                cout<<m[r][c]<<" ";
        }
        cout<<endl;
     }



   cout<<"COMBO= "<<m[n][amount]<<endl;
return 0;
}

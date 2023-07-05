#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

bool mysln(int n,int count){
        if(n==1 && (count%2!=0)) return true;
        if(n==1 && (count%2==0)) return false;

        int div=1;
        for(int i=1; i<n; i++){
            if(n%i==0){
              div=i;
            } 
        }
        count++;
        return mysln(n-div, count);
        
    }
int main(){ 
   
        int N;
        cin>>N;
        int count=0;
        cout<< mysln(N,count);
        
    }



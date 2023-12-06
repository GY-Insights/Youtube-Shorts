#include<bits/stdc++.h>
using namespace std;

int sieveofEratosthenes(int n){
    int cnt = 0;
    vector<bool> nums(n+1, true);
    nums[0] = nums[1] = false;
    for(int i = 2; i < n; i++){
        if(nums[i]){
            cnt++;
            for(int j = 2*i; j < n; j+= i){
                nums[j] = false;
            }
        }
    }

    return cnt;
}


int main(){
    int n ;
    cin>>n;
    cout<<sieveofEratosthenes(n)<<endl;
    return 0;
}

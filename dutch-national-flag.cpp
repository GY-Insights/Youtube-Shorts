//To read more follow : https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/


#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &arr){
    int i =0, j= 0, k = arr.size() - 1;

    while(i <= k){
        if(arr[i] == 0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if(arr[i] == 1){
            i++;
        }
        else{
            swap(arr[i], arr[k]);
            k--;
        }
    }
}

void display(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    
    vector<int> arr = {0,1,2,0,1,2,1,2,0,0,1,1,2,0,2};
    sort012(arr);
    display(arr);
    return 0;
}

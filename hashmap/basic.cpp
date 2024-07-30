#include <bits/stdc++.h>
#include <climits>

using namespace std;

void basicInsertionAndPrinting(){
    int n;
    int k;
    cin>>k;
    unordered_map<int,int> mp;
    for(int i = 0; i < k; i++){
        cin >> n;
        mp[n]++;
    }
    cout<<"------------------"<<endl;
    for(const auto& pair : mp){
        cout<<pair.first<<"  "<<pair.second<<endl;
    }
}

int countMaxOccurence(vector<int>& arr){
    unordered_map<int,int> mp;
    for(int num : arr){
        mp[num]++;
    }
    int maxi = INT_MIN;
    for(auto& pair : mp){
        if(maxi < pair.second){
            maxi = pair.first;
        }
    }
    return maxi;
}

vector<int> findDuplicate(vector<int>& arr){
    unordered_map<int,int> mp;
    vector<int> ans;
    for(int num : arr){
        mp[num]++;
    }
    for(auto& pair : mp){
        if(pair.second > 1){
            ans.push_back(pair.first);
        }
    }
    return ans;
}


int main(){
    // basicInsertionAndPrinting();
    // vector<int> arr = {1,1,1,1,1,2,2,2,2,3,3,9,9,9,9,9,9,9};
    // int output = countMaxOccurence(arr);
    vector<int> arr ={1,2,3,4,5,6,1,2,3,1,9,10,9};
    vector<int> ans = findDuplicate(arr);
    for(int i : ans){
        cout<<i<<endl;
    }
}

#include<bits/stdc++.h>
#include <utility>

using namespace std;

int main(){
    vector<int> arr = {73,74,75,71,69,72,76,73};
    vector<int> ans;

    stack<pair<int, int>>s;
    for(int i = arr.size()-1; i >= 0; i--){
        while(s.size() > 0 && s.top().first <= arr[i] ){
            s.pop();
        }
        if(s.size() == 0){
            ans.push_back(0);
        }else{
            ans.push_back(abs(i-s.top().second));
        }
        s.push({arr[i], i});
    }
    reverse(ans.begin(), ans.end());
    for(int i : ans){
        cout << i << " ";
    }
    cout<<endl;
}

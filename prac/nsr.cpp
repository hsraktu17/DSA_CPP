#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr = {1,0,0,3,2,4};
    vector<int> ans;
    stack<int> st;
    for(int i = arr.size()-1; i >= 0 ; i--){

            while(st.size() > 0 && st.top() >= arr[i]){
                st.pop();
            }if(st.size() == 0){
                ans.push_back(-1);
            }else if(st.size() > 0 && st.top() < arr[i]){
                ans.push_back(st.top());
            }

        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    for(int i : ans){
        cout<<i << "  ";
    }
}

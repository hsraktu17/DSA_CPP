#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main(){
    string s = "Pp";
    stack<char> st;
    for(char c : s){
        if (!st.empty() && (st.top() != c) && (toupper(st.top()) == toupper(c))) {
            st.pop();
        }else{
            st.push(c);
        }
    }

    string ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}

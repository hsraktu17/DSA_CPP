#include <bits/stdc++.h>

using namespace std;

vector<int> ngr(vector<int>& arr) {
    vector<int> ans;
    stack<int> s;
    for (int i = arr.size() - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            ans.push_back(-1);
        } else {
            ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

vector<int> ngl(vector<int>& arr) {
    vector<int> ans;
    stack<int> s;
    for (int i = 0; i < arr.size(); i++) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (s.empty()) {
            ans.push_back(-1);
        } else {
            ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    return ans;
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    vector<int> leftg = ngl(arr);
    vector<int> rightg = ngr(arr);
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++) {
        if (leftg[i] == -1 && rightg[i] == -1) {
            ans.push_back(-1);
        } else {
            ans.push_back(max(leftg[i], rightg[i]));
        }
    }

    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

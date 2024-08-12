#include<bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> nsr(vector<int>& arr) {
    stack<pair<int, int>> st;
    vector<int> ans;
    for (int i = arr.size() - 1; i >= 0; i--) {
        while (st.size() > 0 && st.top().first >= arr[i]) {
            st.pop();
        }
        if (st.size() == 0) {
            ans.push_back(arr.size());
        } else if (st.top().first < arr[i]) {
            ans.push_back(st.top().second);
        }
        st.push({arr[i], i});
    }
    reverse(ans.begin(), ans.end());  // Reverse the result to get correct order
    return ans;
}

vector<int> nsl(vector<int>& arr) {
    stack<pair<int, int>> st;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        while (st.size() > 0 && st.top().first >= arr[i]) {
            st.pop();
        }
        if (st.size() == 0) {
            ans.push_back(-1);
        } else if (st.top().first < arr[i]) {
            ans.push_back(st.top().second);
        }
        st.push({arr[i], i});
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    vector<int> nsrv = nsr(arr);
    vector<int> nslv = nsl(arr);

    vector<int> width(arr.size());
    vector<int> height(arr.size());

    int maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        width[i] = nsrv[i] - nslv[i] - 1;
        height[i] = width[i] * arr[i];
        if (maxi < height[i]) {
            maxi = height[i];
        }
    }

    cout << maxi << endl;

    return 0;
}

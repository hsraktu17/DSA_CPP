#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<string,int> mp;

    mp["Hello"] = 5;
    mp["world"] = 6;
    mp["done"] = 7;
    mp["with"] = 8;
    mp["work"] = 9;
    mp["done"]++;
    cout<<"hello"<<++mp["Hello"]<<endl<<"done"<<mp["done"]<<endl;
}

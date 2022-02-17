#include<bits/stdc++.h>
using namespace std;
void anagramString(string str1, string str2){
    vector<int> v1(26,0),v2(26,0);
    int cnt = 0;
    for(auto it : str1){
        v1[it - 'a']++;
    }
    for(auto it  : v1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it : str2){
        v2[it - 'a']++;
    }
    for(auto it  : v2){
        cout<<it<<" ";
    }
    cout<<endl;
    for(int i = 0; i < 26; i++){
        cnt += abs(v1[i] - v2[i]);
    }
    cout<<cnt<<endl;


}
int main(){
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    anagramString(str1,str2);


}

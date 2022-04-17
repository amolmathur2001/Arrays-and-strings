#include<bits/stdc++.h>
using namespace std;
int lastStoneWeight(vector<int>& stones){
    priority_queue<int> q;
    for(int i = 0; i < stones.size(); i++){
        q.push(stones[i]);
    }

    while(q.size() > 1){
        //cout<<q.size()<<endl;
        int y = q.top();
        //cout<<y<<endl;
        q.pop();
        int x = q.top();
        //cout<<x<<endl;
        q.pop();
        if(x != y){
            //int diff = y - x;
            q.push(y - x);
        }
    }
    return q.empty()? 0 : q.top();

        
}
int main(){
    vector<int> stones{2 , 7 , 4 , 1  , 8 , 1};
    cout<<lastStoneWeight(stones);


}

#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("queue.in","r",stdin);
    freopen("queue.out","w",stdout);
    int n,a;
    cin >> n;
    long long ans = 0;
    stack<int>s1;
    for(int i = 0; i < n; i++){
        cin >> a;
        while(!s1.empty() && s1.top() <= a)
            s1.pop();
        ans += s1.size();
        s1.push(a);
    }
    cout<<ans; 
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
const int maxn = 100005;
const int inf = 2147483647;
struct frame{
    int l,p;
};
class cmp_p{
    public:
    bool operator()(frame i,frame j){
        return i.p > j.p;
    }
};
class cmp_l{
    public:
    bool operator()(frame i,frame j){
        return i.l > j.l;
    }
};
priority_queue<frame,vector<frame>,cmp_p> q_p;
priority_queue<frame,vector<frame>,cmp_l> q_l;
bool cmp(frame i,frame j){
    return i.p < j.p;
}

frame a[maxn];

int main(){
    freopen("frame.in","r",stdin); 
    freopen("frame.out","w",stdout);
    int n; scanf("%d",&n);
    for (int i=1; i<=n; ++i)
        scanf("%d %d",&a[i].l,&a[i].p);
    while (!q_p.empty()) q_p.pop();
    while (!q_l.empty()) q_l.pop();
    sort(a+1,a+n+1,cmp);
    int ans = 1,pre = a[1].p;
    for (int i=2; i<=n; ++i)
        if (a[i].p > a[i].l + pre)
            q_p.push(a[i]);
        else q_l.push(a[i]);
    while (1){
        int t1 = inf,t2 = inf;
        frame k;
        while (!q_p.empty()){
            k = q_p.top();
            if (k.p < pre){
                q_p.pop(); continue;
            }
            if (k.p < k.l + pre){
                q_l.push(k); q_p.pop();
            } else break;
        }
        if (!q_p.empty()) t1 = q_p.top().p;
        while (!q_l.empty()){
            k = q_l.top();
            if (k.p < pre)
                q_l.pop();
            else break;
        }
        if (!q_l.empty()) t2 = q_l.top().l + pre;
        if (t1 == t2 && t1 == inf) break;
        ans++;
        if (t1 < t2) {
            pre = q_p.top().p; q_p.pop();
        } else {
            pre = q_l.top().l + pre; q_l.pop();
        }
    }
    printf("%d\n",ans);
    return 0;
}

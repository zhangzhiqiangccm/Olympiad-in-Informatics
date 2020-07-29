#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll s(int x1,int y1,int x2,int y2){
	return (ll)(x2-x1)*(ll)(y2-y1);
}

int main(){
	freopen("paper.in","r",stdin);
	freopen("paper.out","w",stdout);
	int t,width,height,xfold,cnt,x1,y1,x2,y2;
    ll ans;
	cin >> t;
	while(t--){
		cin >> width >> height >> xfold >> cnt >> x1 >> y1 >> x2 >> y2;
		if(xfold << 1 == width) ans = s(x1,y1,x2,y2)*(ll)(cnt+1) << 1;
        else if(xfold < double(width)/2){
                if(x2 <= xfold) ans = s(x1,y1,x2,y2)*(ll)(cnt+1) << 1;
                else if(x1 <= xfold) ans = (s(x1,y1,xfold,y2)*(ll)(cnt+1) << 1) + (s(xfold,y1,x2,y2)*(ll)(cnt+1));
                     else ans = s(x1,y1,x2,y2)*(ll)(cnt+1);
        }else{
               if(x2 <= width-xfold) ans = s(x1,y1,x2,y2)*(ll)(cnt+1) << 1;
               else if(x1 <= width-xfold) ans = (s(x1,y1,width-xfold,y2)*(ll)(cnt+1) << 1) + (s(width-xfold,y1,x2,y2)*(ll)(cnt+1));
                    else ans = s(x1,y1,x2,y2)*(ll)(cnt+1);
        }
        cout << (ll)(width)*(ll)(height)-ans << endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct twindow{
    int left,right,top,bottom;
};
twindow wina,winb,tmp;

twindow indata(){
    twindow tmp;
    cin >> tmp.left >> tmp.right >> tmp.top >> tmp.bottom;
    return tmp;
}

int main(){
	freopen("win.in","r",stdin);
	freopen("win.out","w",stdout); 
    wina = indata();
    winb = indata();
    tmp.left = max(wina.left,winb.left);
    tmp.right = min(wina.right,winb.right);
    tmp.top = max(wina.top,winb.top);
    tmp.bottom = min(wina.bottom,winb.bottom);
    int s = (tmp.right - tmp.left) * (tmp.bottom - tmp.top);
    if((tmp.right <= tmp.left) || (tmp.bottom <= tmp.top)) s = 0;
    cout << s << endl;
	return 0;
}

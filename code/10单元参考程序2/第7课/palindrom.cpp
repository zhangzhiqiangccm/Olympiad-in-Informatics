#include<bits/stdc++.h> 
using namespace std;
string s;
int main(){
    freopen("palindrom.in","r",stdin);
    freopen("palindrom.out","w",stdout);  
    while(!cin.eof()){  
    	getline(cin ,s);
    	if (s == "") break;
        int  len = s.size() - 1, ans = 0;
        string::iterator l,r; 
        for(int i = 0; i <= len; ++i, ++ans){
            if(i > 0) 
			  for(l = s.begin() + i - 1,r = s.begin() + i + 1; l >= s.begin() && r < s.end() && *l == *r;--l,++r,++ans);  
            if(i < len)
			  for(l = s.begin() + i,r = s.begin() + i + 1; l >= s.begin() && r < s.end() && *l == *r; --l,++r,++ans);  
        }  
        printf("%d\n",ans);  
    }  
    return 0;  
} 

#include<bits/stdc++.h>
using namespace std;
struct node{
	char v,c;
};
stack<node> s;
int n;
string st;

int main(){
	freopen("strs.in","r",stdin);
	freopen("strs.out","w",stdout);
    cin >> n;
	getline(cin,st);
    while (n>0){
    	n--; 
        bool f = 1;
    	getline(cin,st);
    	for(int i = 0; i < st.length(); i++){
    		node k;
    		k.v = st[i];
    		k.c = st[i];
    		switch(k.c){
    			case '<': k.c = '1';break;
    			case '>': k.c = '1';break;
    			case '(': k.c = '2';break;
    			case ')': k.c = '2';break;
				case '[': k.c = '3';break;
				case ']': k.c = '3';break;
				case '{': k.c = '4';break; 
				case '}': k.c = '4';break;
    		} 
    		if(!s.empty()){
    			node now = s.top();
    			s.pop();
    			if((now.c == k.c && k.v == now.v) || (now.c < k.c && k.v != now.v)){
    				cout << "NO" << endl;
    				f = 0;
    				while(!s.empty()) s.pop();
    				break;
    			}
    			else{
    				 if(now.c != k.c){
    					s.push(now);
    				    s.push(k);
    				 }
    				
    			}
    		}
    		else{
    			  s.push(k);
    		}
    		if(!f) break;
    	}
    	if(f){
    		if(!s.empty()) cout << "NO" << endl;
            else cout << "YES" << endl;
    	while(!s.empty()) s.pop();	
    	}
    } 
	return 0;
}

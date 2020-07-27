#include<bits/stdc++.h>
using namespace std;

struct tset{
    bool set[26];//���� 

    void input()//���뼯�ϳ�Ա���� 
    {
    	string s;
    	cin >> s;
    	memset(set,false,sizeof(set));
    	for(int i = 0; i < s.size(); i++)
    	    set[s[i] - 'a'] = true;
    }
    
    void output()//������ϳ�Ա����
	{
		for(int i = 0; i < 26; i++)
		    if(set[i]) cout << char(i + 'a');
		cout << endl;
	} 
	
	tset operator + (const tset x) const//����+ 
	{
		tset tmp;
		for(int i = 0; i < 26; i++)
		    tmp.set[i] = set[i] || x.set[i];
		return tmp;
	}
		
	tset operator - (const tset x) const//����- 
	{
		tset tmp;
		for(int i = 0; i < 26; i++)
		    tmp.set[i] = set[i] && (!x.set[i]);
		return tmp;
	}
		
	tset operator * (const tset x) const//����* 
	{
		tset tmp;
		for(int i = 0; i < 26; i++)
	    	tmp.set[i] = set[i] && x.set[i];
		return tmp;
	}
};

int n;
tset a,b,c;
char op;

int main(){
	freopen("set.in","r",stdin);
	freopen("set.out","w",stdout);
    cin >> n;
    for(int i = 0; i < n; i++){
    	a.input();
    	cin >> op;
    	b.input();
    	if(op == '+') c = a + b;
    	else if(op == '-') c = a - b;
    	     else if(op == '*') c = a * b;
    	c.output();
    }
	return 0;
}

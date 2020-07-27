#include<cstdio>
#include<string>
using namespace std;
struct node{
	node *nxt;
	node *pre;
	char st[100];
};

int main(){
	freopen("record.in", "r", stdin);
	freopen("record.out", "w", stdout);
	node *fst = new node;
	fst->pre = NULL;
	while(1){
		gets(fst->st);
		if(fst->st[0] == 'e'){
			while(fst->pre != NULL){
				fst = fst->pre;
				delete fst->nxt;
				printf("%s\n", fst->st);
			}
			delete fst;
			return 0;
		}
		node *x = fst;
		fst->nxt = new node;
		fst = fst->nxt;
		fst->pre = x;
	}
	return 0;
}

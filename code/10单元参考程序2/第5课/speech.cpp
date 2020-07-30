#include<bits/stdc++.h>
using namespace std;
map < string , int > a;

bool check(char c){
    if('0' <= c && c <= '9') return 1;
    if('A' <= c && c <= 'Z') return 1;
    if('a' <= c && c <= 'z') return 1;
    return 0;
}

char turn(char c){
    if('A' <= c && c <= 'Z') return c-'A'+'a';
    return c;
}

int main(){
	freopen("speech.in","r",stdin);
	freopen("speech.out","w",stdout);
    char c = getchar();
    bool flag = 0;
    string s = "";
    int maxtime = 0;
    string maxs = "";
    a.clear();
    while(1){
        if(check(c)){
            c = turn(c);
            if(!flag){
                flag = 1;
                s = c;
            }
            else s += c;
        }
        else
            if(flag){
                flag = 0;
                if (! a[s]) a[s] = 1;
                  else a[s]++;
                if (a[s] > maxtime){
                    maxtime = a[s];
                    maxs = s;
                }
                if (a[s] == maxtime && s < maxs) maxs = s;
                s = "";
            }
        if(c == '\n') break;
        c = getchar();
    }
    printf("%s %d\n", maxs.c_str() , maxtime);
    return 0;
}
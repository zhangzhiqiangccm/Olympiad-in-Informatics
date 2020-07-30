#include<bits/stdc++.h>
using namespace std;
int main(){
  freopen("cal.in","r",stdin);
  freopen("cal.out","w",stdout);
  char ch;
  ch = getchar();
  string s; s = ch; ch = getchar();
  while(true){
    stack<double>s1,s3;
    stack<char>s2,s4;
    while(ch != '\n') {s += ch;if ((ch = getchar()) == EOF) break;}
    //std::cout << (int)s[0] << (int)s[1] << std::endl;
    if ((s == "0")||(s == "0\r")) break;
    s += ' ';
    //printf(s.c_str());
    long long temp = 0;
    bool lastnumber = false;
    for(int i = 0; i < s.size(); i++){
      //printf("#%c %d#", s[i], (int)temp);
      if(s[i] == ' '){
        if (lastnumber) {
          if(! s2.empty() && s2.top() == '*'){
            double x1 = s1.top();
            s1.pop();s2.pop();
            x1 *= temp;
            s1.push(x1);
          }else
          if(! s2.empty() && s2.top() == '/'){
            double x1 = s1.top();
            s1.pop();s2.pop();
            x1 /= double(temp);
            s1.push(x1);
          }else
          s1.push(double(temp));
        }
        temp = 0;
      }else
      if('0' <= s[i] && s[i] <= '9') { temp = temp * 10 + s[i] - '0';lastnumber = true;}
      else {
        s2.push(s[i]);
        lastnumber = false;
      }
    }
    while(! s1.empty()){ s3.push(s1.top()); s1.pop();}
    while(! s2.empty()){ s4.push(s2.top()); s2.pop();}
    while(! s4.empty()){
      double x1 = s3.top(); s3.pop();
      double x2 = s3.top(); s3.pop();
      if(s4.top() == '+') s3.push(x1 + x2); else s3.push(x1 - x2);
      s4.pop();
    }
    printf("%.2f\n",s3.top());
    ch = getchar();
    s = ch;
    if ((ch = getchar()) == EOF) break;
  }
  return 0;
}

#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
#define ll long long


#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {cout << endl;}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << ", ";
    err(++it, args...);
}


const int inf = (int) 2e9 + 5;
const ll  Inf = (ll) 2e18 + 5;
const int N   = (int) 2e5 + 5;

/// find lcm.......................................
ll lcm(ll a, ll b){
    ll  step, lcm_num;
   lcm_num = 0;
/*
   if(a > b)
      max = step = a;
   else
      max = step = b;
*/
    max = max(a, b);
   while(1) {
      if(max%a == 0 && max%b == 0) {
         lcm_num = max;
         break;
      }

      max += step;
   }

   //printf("LCM is %llf", lcm_num);
   return lcm_num;
}

int main() {

    long long n,a,ans=0,y;
    //scanf("%lli%lli",&n,&a);
    cin >> n >> a;
    long long x=a;
    for(int i=1;i<n;i++)
    {
        cin >> a ;
        y = lcm(x,a);
        ans=__gcd(ans,y);
        x=__gcd(a,x);
    }
    printf("%lli\n", ans);


    return 0;
}

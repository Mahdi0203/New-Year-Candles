#include<bits/stdc++.h>
using namespace std;
#define Start ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define srt(a) sort(a,a+n)
#define sort(a) sort(a.begin(), a.end())
#define pb(a) push_back(a)
#define tc ll t; cin>>t; while(t--)

int main()
{
    int a,b;
    cin>>a>>b;
    ll cnt = 0;
    while(true){
        int x = a/b, y = a%b;
        cnt += (b*x);
        a = (a/b)+y;

        if(a < b){
            cnt += a;
            break;
        }
    }
    cout<<cnt<<endl;

    return 0;
}


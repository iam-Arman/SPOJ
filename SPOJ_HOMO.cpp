                                          //   Bismillahir Rahmanir Rahim      //
                                         //     After hardship comes ease     //
                                        //         AUTHOR : iamarman         //


#include<bits/stdc++.h>
using namespace std;

                                             ////       TEMPLATE       ////

//---------------------------------------------------------------------------------------------------------------------------------|

typedef vector<int> vii;
typedef vector<long long> vll;
typedef vector<pair<int,int> > vpi;
typedef vector<pair<long long,long long > > vpl;

# define ll long long
# define ull unsigned long long                                                                                                           
# define test int test; cin>>test; while(test--)
# define rep(i,a,b) for(int i=a;i<b;i++)
# define rep_n(i,a,b) for(int i=a;i<=b;i++)
# define rep_rev(i,a,b) for(int i=b;a>=1;i--)
# define pb push_back
# define el '\n'
# define R0 return 0
# define all(v) v.begin(),v.end()
# define srt(vvv) sort(vvv.begin(),vvv.end())
# define sp " "
# define vii vector<int>
# define vll vector<long long>
# define yess cout<<"YES"<<el
# define noo cout<<"NO"<<el
# define ff first
# define ss second
# define mp make_pair
# define sz(x) (int)x.size()

# define optimise   ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
# define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);


inline void file() {
 
#ifndef ONLINE_JUDGE
 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
 
#endif // ONLINE_JUDGE

}

void solve()
{
    int n;
    cin>>n;
   unordered_map<int,int> mp;
   bool homo=false;
   int cnt=0;

    for(int i=0;i<n;i++)
    {
      string s;
      cin>>s;
      int x;
      cin>>x;
      if(s=="insert")
      {
        mp[x]++;
       // cout<<mp[x]<<el;
       if(mp[x]==2) 
       {
         homo=true;
         cnt++;
       } 
      }
      else if(mp.find(x)!=mp.end())
      {
        if(mp[x]==1)
        {
          mp.erase(x);
        }
        else if(mp[x]>1)
        {
          if(mp[x]==2) cnt--;
          mp[x]--;
        }
      }

      if(cnt==0) homo=false;

      
      bool het=false;
      
      if(mp.size()>=2) het=true;

      if(homo and het)
      {
        cout<<"both"<<el;
      }
     else if(homo)
      {
        cout<<"homo"<<el;
      }
      else if(het)
      {
        cout<<"hetero"<<el;
      }
      else cout<<"neither"<<el;
      //dbg(mp);
    }

   

}


int main()
{
    optimise;
    file();
    //test
    {
      solve();
    }
  
}

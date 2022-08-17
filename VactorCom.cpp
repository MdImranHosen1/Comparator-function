#include<bits/stdc++.h>
using namespace std;
typedef     long long    ll;
typedef     unsigned long long    ull;
typedef     vector<int> vi;
typedef     vector<ll> vl;
typedef     pair<int, int>pi;
typedef     pair<ll, ll>pl;
typedef     priority_queue<int> pqi;
typedef     priority_queue<ll> pql;
typedef     vector<pair<int, int> > vpi;
typedef     vector<pair<ll, ll> > vpl;
typedef     map<ll, ll> mpl;
typedef     multiset<ll>msl;
typedef     multiset<ll>msi;


//Int Input Fast Start
template <typename T> inline void in(T &n) {
	n = 0; int f = 1; register int ch = getchar();
	for (; !isdigit(ch); ch = getchar()) if (ch == '-') f = -1;
	for (; isdigit(ch); ch = getchar()) n = (n << 3) + (n << 1) + ch - '0';
	n = n * f;
}
template <typename T, typename TT> inline void in(T &n, TT &m) { in(n); in(m); }
template <typename T, typename TT, typename TTT> inline void in(T &n, TT &m, TTT &l) { in(n, m); in(l); }
//Int Input Fast End

#define error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s, char c) {vector<string>v; stringstream ss(s); string x; while (getline(ss, x, c))v.emplace_back(x); return move(v);} void err(vector<string>::iterator it) {}
template<typename T, typename... Args>void err(vector<string>::iterator it, T a, Args...args) {cout << it->substr((*it)[0] == ' ', it->length()) << " = " << a << " "; err(++it, args...);}

#define     Yes   printf("Yes\n")
#define     No    printf("No\n")
#define     YES   printf("YES\n")
#define     NO    printf("NO\n")
#define     Noo    printf("-1\n")
#define     pt(x)    cout<<x<<" ";
#define     ptt(x,y)  cout<<x<<" "<<y<<endl;
#define     fo(i,p,n) for (ll i = p; i < n; i++)
#define     reads(s)  string s;cin>>s;
#define     readv(x, n) vl x(n); fo(i,0,n) in(x[i]);
#define     readv1(x, n) vl x(n+1); fo(i,1,n+1) in(x[i]);
#define     ff   first
#define     ss   second
#define     el   printf("\n");
#define     pb  push_back
#define     all(x)      x.begin() , x.end()
#define     srt(x)     sort(x.begin() , x.end())
#define     rsrt(x)     sort(x.rbegin() , x.rend())
#define     bitcount(x)  (int)__builtin_popcount(x)
#define     fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define     sz(x)  (int)x.size()
#define     mod 1000000007
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)


class student {
public:
	int val;
	float num;
	string name;
	student(int v, float n, string na)
	{
		this->val = v;
		this->num = n;
		this->name = na;
	}
};
bool cmp(student a, student b)
{
	if (a.val == b.val)
	{
		return a.name > b.name;
	}
	return a.val > b.val;


}

int main()
{
	student s1(2, 4.2, "Imran"), s2(3, 2.1, "Arif");
	vector<student>v;
	v.pb(s1);
	v.pb(s2);

	sort(all(v), cmp);

	for (int i = 0; i < 2; i++)
	{
		cout << v[i].val << " " << v[i].num << " " << v[i].name << endl;
	}
}

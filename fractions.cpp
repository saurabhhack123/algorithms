/* Paras Narang */
#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <deque>
#include <bitset>
#include <cmath>
#include <set>
#include <sstream>

using namespace std;

#define oo 0x7F7F7F7F
#define LET(x,a)     __typeof(a) x(a)
#define EACH(it,v)   for(LET(it,v.begin());it!=v.end();++it)
#define REP(i,n)     for(__typeof(n) i(0); i<n; i++)
#define ALL(x)       (x).begin(), (x).end()
#define gint(t)      scanf("%d", &t);
#define pint(t)      printf("%d\n", t);
#define pb           push_back
#define mp           make_pair

typedef long long int   ll;
typedef unsigned long long int ull;
typedef unsigned int    uint;
typedef pair<int, int>  pii;
typedef vector<int>     vi;
typedef vector<vi>      vii;
typedef vector<pii>     vpii;

int GCD(int a, int b)
{
    if (b==0)
      return a;
    return GCD(b,a%b);
}

int LCM(int a, int b)
{
    return b*a/GCD(a,b);
}

vi multiplyFractions(vi a, vi b)
{
    vi c (2);
    c[0]= a[0]*b[0];
    c[1]= a[1]*b[1];
    return c;
}

vi addFractions(vi a, vi b)
{
    int denom=LCM(a[1],b[1]);
    vi c(2);
    c[0] = denom/a[1]*a[0] + denom/b[1]*b[0] ;
    c[1] = denom;
    return c;
}

vi reduceFraction(vi a)
{
    int b=GCD(a[0],a[1]);
    a[0]/=b;
    a[1]/=b;
    return a;
}

vi multiplyComplex(vi m, vi n)
{
    vi prod(2);
    prod[0] = m[0]*n[0] - m[1]*n[1];
    prod[1] = m[0]*n[1] + m[1]*n[0];
    return prod;
}

int main()
{
    vi a(2);
    a[0]=12,a[1]=24;
    vi b(2);
    b = reduceFraction(a);
    cout<<b[0]<<"/"<<b[1]<<endl;

    return 0;
}

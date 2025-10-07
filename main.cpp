#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
ifstream f("vocmax.in");
ofstream g("vocmax.out");
char s[255],v[255];
int cnt,i,n,cntmax,j;
int main()
{
    f>>n;
    for(i=0;i<=n;i++)
    {cnt=0;
        f.getline(s,255);
        for(j=0;j<strlen(s);j++)
        {
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                cnt++;
        }
                if(cnt>cntmax)
                   {
                       cntmax=cnt;
                       strcpy(v,s);
                   }
    }
    g<<v;
}

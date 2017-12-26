#include<iostream>
#include<map>
#include<queue>
#include<vector>
#include<string>
using namespace std;
int level[100]={0};
int visited[100]={0};
vector<int>vi[100];
int change(string a,string b)
{
    if(a.size()!=b.size())
    return 0;
    else
    {
        int t=0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]!=b[i])
            t++;
        }
    if(t==1)
    return 1;
    else
    return 0;
    }

}
int bfs(int r,int d)
{
  queue<int>Q;
  level[r]=0;
  visited[r]=1;
  Q.push(r);
  while(!Q.empty())
  {
      int take=Q.front();
      Q.pop();
      for(int i=0;i<vi[take].size();i++)
      {
         int p=vi[take][i];
          if(visited[p]==0)
          {
              visited[p]=1;
              Q.push(p);
              level[p]=level[take]+1;
          }
      if(level[d]>0)
      break;
      }
  }
}
int main()
{
    map<string,int>m;
    string s,str;
    int count=1;
    while(cin>>s)
    {
        if(s[0]=='*')
        break;
        m[s]=count;
        str=s;
        count++;
        if(count>1)
        {
          for(int i=0;i<count;i++)
          {
          int k= change(s,str[i]);
          if(k==1)
          {
              vi[m[s]].push_back(vi[m[str]]);
              vi[m[str]].push_back(vi[m[s]]);
          }
        }
    }
    }
int r,d;
cin>>r>>d;
bfs(r,d);
cout<<level[d];
}

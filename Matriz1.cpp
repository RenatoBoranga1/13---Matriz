#include <iostream>
using namespace std;
int main()
{
int a[10][10],b[10][10],mul[10][10],m,c,m1,c1,p,j,k;


cout<<"";
cin>>m;
cout<<"";
cin>>c;
cout<<"";
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
cin>>a[p][j];
}
}
cout<<"";
cin>>m1;
cout<<"";
cin>>c1;
cout<<"";
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
cin>>b[p][j];
}
}
cout<<"";
for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
mul[p][j]=0;
for(k=0;k<c;k++)
{
mul[p][j]+=a[p][k]*b[k][j];
}
}
}

for(p=0;p<m;p++)
{
for(j=0;j<c;j++)
{
cout<<mul[p][j]<<"\t";
}
cout<<"\n";
}
return 0;
}

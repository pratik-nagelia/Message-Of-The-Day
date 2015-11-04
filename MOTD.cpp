#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#define lli long long int
#define mod 10000007
using namespace std;
int main()
{
	cout<<"Chal password daal"<<endl;
	string st;
	cin>>st;
	if(st!="2")return 0;
    freopen("seek.txt","r",stdin);
    int a;
    cin>>a;
    fclose(stdin);
    freopen("mssg.txt","r",stdin);
    char s[10000];
    int i;
    for(i=1;i<=a;i++)
    {
            gets(s);

    }
    cout<<s<<endl;
    fclose(stdin);
    a++;
    freopen("seek.txt","w",stdout);
    cout<<a;
    fclose(stdout);
    getch();

    return 0;
}

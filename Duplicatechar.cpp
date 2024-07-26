#include<iostream>
#include<string>
#include<vector>
using namespace std;

 //Print charac occuring the most for lowercase
 int main()
 {
    string s="needle";
    vector<int>arr(26,0);
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;

    }
    int max=0;
    for(int i=0;i<26;i++)
    {
       if(arr[i]>max)
       {
        max=arr[i];
       } 
    }
    int mx2=max-1;
    for(int i=0;i<26;i++)
{
    if(arr[i]==max)
    {
        int asscii=i+97;
        char ch=(char)asscii;
        cout<<ch<<" "<<max<<endl;
    }
}
   for(int i=0;i<26;i++)
{
    if(arr[i]==mx2)
    {
        int asscii=i+97;
        char ch=(char)asscii;
        cout<<ch<<" "<<mx2;
    }
}
 }

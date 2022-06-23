#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool tikitaka(int n, vector<int>v1){
    vector<int> v2;
    int res;
    if (n==1)
    {
        return true;
    }
    for (int i = 0; i < n-1; i++)
    {
        res=abs(v1[i]-v1[i+1]);
        if (res>=n)
        {
            return false;
        }
        v2.push_back(res);
    }
    for (int i = 1; i <n; i++)
    {
        res = count(v2.begin(),v2.end(),i);
        if (res!=1)
        {
            return false;
        }
    }
    return true;
}
int main() {
    int n,num;
    vector<int> vec;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>num;
        vec.push_back(num);
    }
    if (tikitaka(n,vec))
    {
        cout<<"tiki-taka";
    }else
    {
        cout<<"no tiki-taka";
    }
    
    
    return 0;
}
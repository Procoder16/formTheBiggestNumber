
#include<iostream>

#include<string>
#include<algorithm>

using namespace std;

int main(){

    string str;

    cout<<"ENTER THE NUMBERIC STRING:";
    cin>>str;

    sort(str.begin(), str.end(), greater<int>());

    cout<<"\nBIGGEST NUMBER:"<<str;

    return 0;

}
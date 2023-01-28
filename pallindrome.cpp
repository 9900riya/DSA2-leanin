#include<iostream>
using namespace std;
bool pallindrome(string s){
    int n=s.length();
    int i=0;int j=n-1;
    while(i<j){
         if(s[i]!=s[j]){
           return false;
         }
         else {i++;j--;}
    }
    return true;

}
int main(){
    string s;
    // cin<<s;
    getline(cin,s);
    if(pallindrome(s)){
        cout<<1;
    }else cout<<0;
    return 0;
}
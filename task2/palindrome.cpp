#include<bits/stdc++.h>
using namespace std;

string checkpalindrome( string s){
    string str = s;
    reverse(str.begin(), str.end());
    if(s==str){
       return "palindrome";
    }
    else{
        return "not palindrome";
        
    }
    
}




int main(){
    string s="123321";
    cout<<checkpalindrome(s)<<endl;
    cout<<"enter the next string"<<endl;
    string s1="12334341";
    cout<<checkpalindrome(s1)<<endl;
    
  
    
}


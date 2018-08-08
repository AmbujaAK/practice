#include<iostream>
#include<algorithm>
using namespace std;

bool isPalindrome(string s){
    int l = 0;
    int r = s.length()-1;
    while(l<r){
        if(s[l]!=s[r])
            return false;
        else{
            l++;
            r--;
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;

    int l = 0;
    int r = s.length()-1;
    int f = 0;
    while(l<r){
        if(s[l]!=s[r]){
            if(s[l+1]==s[r]){
                swap(s[l],s[l+1]);
                break;
            }
            else if(s[l]==s[r-1]){
                swap(s[r],s[r-1]);
                break;
            }
            else{
                f = 1;
                break;
            }
        }else{
            l++;
            r--;
        }
    }
    
    if(isPalindrome(s))
        cout<<"\nAfter swappinp : "<<s<<endl;
    else
        cout<<"-1"<<endl;
    
}
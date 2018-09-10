#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        int num = 0;
        int sum = 0;
        int max_val = 0;
        for(int i=0; i<str.length(); ++i){
            if(str[i] == 123)
                continue;
            if(str[i] >= 48 && str[i] <= 57){
                for(int j=i; str[j] >= 48 && str[j]<= 57; ++j){
                    num = num * 10 + (str[j]-48);
                    str[j] = 123;
                }
            }
            sum += num;
            max_val = max(max_val,num);
            num = 0;
        }
        cout<<sum<<endl;
        cout<<max_val<<endl;
    }
    return 0;
}
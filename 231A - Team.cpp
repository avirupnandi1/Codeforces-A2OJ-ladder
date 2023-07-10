
#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
int a,b,c;
int cnt=0;
while(t--){
    
    cin>>a>>b>>c;
    if(a+b+c>=2)
    cnt++;
    }
 cout<<cnt<<endl;

    return 0;
}

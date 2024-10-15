#include <iostream>
using namespace std;

int main() {
  
  int n,m;
  cin >>n>>m;
  int count=0;
    for(int i=1;i<=n;i++){
        if(i%m==0){
           cout << i<<" ";
        }
    }
 //cout << i<<" ";
  return 0;
}

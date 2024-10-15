#include <iostream>
using namespace std;

int main() {
  //cout << "Hello World!";
  int n;
  cin >>n;
  int count=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
           cout << i<<" ";
        }
    }
 //cout << i<<" ";
  return 0;
}
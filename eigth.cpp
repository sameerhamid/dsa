#include <iostream>
using namespace std;

int main() 
{
  
  for(int i=1;i<=3;i++){
    for(int j=8;j>=0;j=j-2){
      cout << j<<" ";
    }
    cout << "\n";
  }
    
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    int i = 1;
    cout << "enter the number : ";
    cin>> n;
    while(i<=n){
   sum += i;
   i +=1;
    }
    cout<< "the sum of n no. is : "  << sum ;
    return 0;
}
//Sum of the frist N numbers using recurtion
#include <bits/stdc++.h>
using namespace std;

// void sumOf(int i,int sum){
//    if (i<1 ){ 
//     cout << sum;
//     return;
//    }
//    sumOf(i-1 , sum+i);
// }

 // for adding the nth number 
int sumOf(int n){
     if(n==0){
        return 0;
     }else {
        return n+ sumOf(n-1);
    }
}
// for factorial numbers 
int sumOf(int n){
     if(n==1){
        return 1;
     }else {
        return n* sumOf(n-1);
    }
}

int main(){
    int n;
    cin>> n;
//  sumOf(n,0);
 cout <<sumOf(n);
}
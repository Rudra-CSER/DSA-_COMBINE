#include <bits/stdc++.h>
using namespace std;

 void print2(int n){
 for(int i =0;i<n;i++){
 for(int j= 0 ; i< n ; j++){} 
     cout<<"* ";
   }
   cout<< endl;
}

void print5(int n){

 for(int i =0;i<n;i++){
 for(int j= 0 ; i< n-i+1 ; j++){} 
     cout<<"* ";
   }
   cout<< endl;
}
void print10(int n){
print2(n); 
print5(n); 
}


 //printing the step with no of 
 //test case + no of itteration


int main()
{
  //make sure to upload on git
  int t;
  cin >> t; // if we initialize i with 0 the Test case will run 0,1(2ti)
  for (int i = 1; i <= t; i++)
  {

    int n;
    cout << "Enter The input";
    cin >> n;
    print10(n);
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

//  void print2(int n){
//  for(int i =0;i<n;i++){
//  for(int j= 0 ; i< n ; j++){} 
//      cout<<"* ";
//    }
//    cout<< endl;
// }

// void print5(int n){

//  for(int i =0;i<n;i++){
//  for(int j= 0 ; i< n-i+1 ; j++){} 
//      cout<<"* ";
//    }
//    cout<< endl;
// }
void print10(int n){
  for(int i =1 ; i< 2*n-1 ; i++){
        int starts = i ;
        if(i>n) starts = 2*n -i ;
        for(int j=1 ; j<= starts ; j++){
          cout << "*";
        }
         cout << endl;
      } 
}

void print11(int n){
   int start =1 ;
   for(int i= 0 ; i< n ; i++){
      if(i % 2 == 0)start = 1;
      else start = 0 ;
      for(int j= 0 ; j<=i ;j++){
        cout << start;
        start = 1 -start;
      } 
 cout<< endl;
   } 


}

void print12(int n){
  int space = 2*(n -1 );
  for(int i =1 ; i<= n ; i++){
    //num
   for(int j=1 ; j<= i ; j++){
  cout << j;
   }

    //space
for(int j =1 ; j<= space; j++){
  cout<<" ";
}

    //num
    for(int j=i ; j>= 1 ; j--){
  cout << j;
   }
   cout << endl;
   space -=2;
  }
}
void print13(){ 
}

void print14(){
  int streak = 0 ;

}
void print14(){
  int streak = 0 ;

}
void print15(){
  int streak = 0 ;

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
    print12(n);
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

// functions
// void
// return
// paramenterisezd
// non-paramenterisezd

// void()
    // void printName(string name)
    // {
    //     cout << "Hey " << name << endl;
    // }
       // functions() increases the resuabilty of the code


//return()

   // int sum(int num1 ,int  num2){
   //   int num3 = num1+num2 ;
   //   return num3;
   // }

//passByVal    (pass By value menas it craete a cpy but
// the original vlaue in main fuc will remain same )

void passByVal(int num){
cout<<num<< endl;
num+= 5;
cout<<num<<endl;
num += 5;
cout << num <<endl;
}

// // passByRef           (pass by reference means it deals with)
// //original value and does't create a cpy value || just add "&" ) 
void passByRef(string &s){
s[0] = 't';
    cout<<s<< endl;

}


//  // ✅ Summary:
// Arrays in C++ are passed by reference by default
// So arr[0] += 100 modifies the original array
// If input was 1, it becomes 101 (not 100)



void doSomething(int arr[], int n){

    arr[0] += 100;
 cout << "array Insede Void :" << arr[0] << endl;

}
int main()
{
    // string name;
    // cin >> name;
    // printName(name);
    
    // string name2;
    // cin >> name2;
    // printName(name2);
    

   
    //     int num1,num2 ;
    //     cin >> num1 >> num2;
    //   int res = sum(num1,num2);
    //        //we can find minimum and maximum values 
    //   int res1 = min(num1,num2);
    //   cout<< res<<endl;
    //   cout<< res1;
 

    int num = 10;
    passByVal(num); 
    cout<<"Original Value" <<num<<endl;

    
    string s  = "raj";
    cout<<"Before CallByRef : " <<s << endl;
    passByRef(s);
    cout<<"After CallByRef : " <<s << endl;


int n=5;
int arr[n];
for(int i =0 ; i<n ; i++){
    // cout<< arr[i] <<endl;
    cin>> arr[i];
}
// for(int i =0 ; i<=4 ; i++){
//     cout<< arr[i] <<endl;
//     cin>> arr[i];
// }
for(int i =0 ; i<=4 ; i++){
    cout<< arr[i]<< " ";
}

doSomething(arr, n);
cout<< "value inside int main : "<< arr[0] <<endl;

    return 0;


   

}
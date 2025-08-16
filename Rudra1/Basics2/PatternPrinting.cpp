 #include<bits/stdc++.h>
 using namespace std;
 
void printPatten(int n){
     for (int i = 0 ; i<n ; i++){
        for(int j= 0; j<n; j++){
          cout<< "*";
        }
    cout<<endl;
    }
}


 int main() {
    int n;
    cin>>n;
     printPatten(n);

     return 0;
 } 

/* Expectecd OP

****
****
****
****

*/



/* Hand Written notes to Take 
 
    Rules For Createing patterns 

(1) For the Outer Loop , Count The number of rows 

(2)For the Inner Loop , focus On the colums ,
 & count them Somehow to the Rows 

(3) print the * inside the Inner ForLoop 

(4)Ovserve The Symmetry [Optional One ]



*/
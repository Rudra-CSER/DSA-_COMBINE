#include<bits/stdc++.h>
#include <queue>
using namespace std;
// this will remove std:: cout<<   || std:: cin>> ;

 void pairs(){
 //pair
 pair<int , int> q = {1,2};
 cout << q.first << " "<< q.second; 
 //for paining multiple suing nested property of the  pair

 pair < int , pair<int,int>> p = {1,{3,4}};
cout << p.second.first << " " ; 

//relis on utiuly lib 
pair<int , int> arr[] ={{1,2},{3,3},{4,4}};
 }


// void vectorExplain(){
//  vector <int> v ; // emty vector/ arry 
//  v.push_back(1); //push (1) to the v empty arr , now v= {1};
//  v.emplace_back(1); //mush faster thn push back
//  vector <pair< int, int >>vec ;
//  vec.push_back({1,2});
//  vec.emplace_back(1,2); //mush faster thn push back

// vector <int> i(5,100); // {100,100,100,100,100}  where 5 = size ; 100 = element
// //copyting vector value 
// vector <int> v1(5,20);
// vector <int> v2(v1);
// vector <int>::iterator it =v.begin();//memm location frist  element ( here-->1,2,3,4) 
// it++;
// cout<<*it<<" "; // (1,2,3,4)  ; +1 after every intertor


// vector <int>::iterator it =v.end(); // memm location after last element (1,2,3,4) <--here 
// vector <int>::iterator it =v.rend(); //memm location before the frist  element  here-->(1,2,3,4)           // not so req 
// vector <int>::iterator it =v.rbegin();//memm location before the last  element  (1,2,3,4 <--here )      // not so req

// //similer to arr we can acces vector 
// v1[1];


// // imagine vector elements and printing them
// for(vector <int>:: iterator it =v.begin(); it != v.end(); it++){
//     cout<< *(it)<<" ";
// }
// // shortcut form using the libery functiuons 
// for(vector <int>:: iterator it =v.begin(); it != v.end(); it++){
//     cout<< *(it)<<" ";
// }

// //erase it 
// //suppose -> v = {1,2,3,4,5}
// v.erase(v.begin()+1) //2
// v.erase(v.begin()+2, v.begin()+4);  //3,5

// //Insert Function
// vector <int >inst(2,100); //100,100
// v.insert(v.begin(),300); // 300,100,100
// v.insert(v.begin()+ 1,2,5);// 300,5,5,100,100

// vector<int>copy(2,50);//50,50
// v.insert(v.begin(),copy.begin(),copy.end());//  50,50,300,10,10,100,100 copy.begin(),copy.end() will be added selecting  the entire copy vector  

// cout<< v.size(); 
// //pop ing 
// v.pop_back();

// vector <int> v1 (1,2);
// vector <int> v2 (1,2);
// //swaping 
// v1.swap(v2);
// //clear
// v1.clear();
// //is Empty or not Boolean Value 
// cout<<v1.empty();



// }
 
void explainQueue(){
    queue <int> q; 
    q.push(1);
    q.push(2);
    q.emplace(4);

    cout << q.front()<< " " ; 
cout<<endl;


q.back() +=5;
while(!q.empty()){
    cout << q.front()<< " " ; 
     q.pop();
}
cout<<endl;

 q.pop();
cout << q.front()<< " " << q.back() ; 
cout<<endl;

} 


int main(){
 explainQueue();
    return 0; 
}

// Alogrithm  <1>
// Container  <2> 

// Fucntion
// Iterators 
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair <int,string> p;
    p = {1,"Hima"};
    cout << "Value of first element in the pair : " << p.first << endl;
    cout << "Value of second element in the pair : " << p.second << endl;
    // Swapping two pairs
    pair <int, string> q = make_pair(2,"Akshat");
    cout << "\nAfter making a new pair and swapping with original pair\n";
    swap(p,q);
    cout << "Value of first element in the pair after swapping : " << p.first << endl;
    cout << "Value of second element in the pair after swapping : " << q.first << endl;
    // Making an pair array and accessing it's elements
    pair <float, int> arr[5];
    for (int i=0 ;i<5 ;i++){
        cin >> arr[i].first >> arr[i].second;
        }
    
    cout << "\nElements of the pair array are as follows:\n";
    for (int j=0 ;j<5 ;j++)
    cout << "First Element at index "<< j <<": "<<arr[j].first<<endl<<"Second Element at index "<< j << ": " << arr[j].second<<endl<<endl;
    
    return 0;

}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Implementing vectors
    vector<int> v1;
    cout << "Size of the empty vector: " << v1.size() << endl;
    // Adding elements to a vector
    v1.push_back(5); // Adds element at last index
    v1.push_back(7);
    cout << "After adding two elements, size of the vector is :" << v1.size();
    cout << "\nElements in the vector are :";
    for (auto i : v1)
    { // For each loop to print all elements
        cout << i << " ";
    }
    // copying of vectors
    vector<int> v2 = v1; // Copy constructor used here
    cout << "\nVector after copy : \n";
    for (auto i : v2)
    {
        cout << i << " ";
    }

    // pop back operation
    v2.pop_back(); // Removes the last element
    cout << "\nAfter popping an element from vector:\n";
    for (auto i : v2)
    {
        cout << i << " ";
    }


    // v vector elements
    cout<<endl;
    cout<<"elements from v1 vector after popping v2"<<endl;
    for (auto i : v1){
        cout<< i<< " ";
    }
}
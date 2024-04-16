#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
/*
int main(){
    int arr[5] = {2, 3, 1, 4, 5};
    
    for(int i = 0; i < 5; i++){
        cout<< arr[i] << endl;
    }
}
*/
/*
int main(){
    vector<int> vec = {2, 3, 1, 4, 5};
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
        cout<< *it << endl;
    }
}
*/
/*
int main(){
    vector<int> vec = {2, 3, 1, 4, 5};
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout<< *it << endl;
    }
}
*/
/*
int main(){
    vector<int> vec;
    int size;
    int x;
    
    cout<<"Enter the size of vector: ";
    cin>> size;
    
    for(int i = 0; i < size; i++){
        cout<<"Enter value: ";
        cin>> x;
        vec.push_back(x);
    }
    
    sort(vec.begin(), vec.end());
    for(int i = 0; i < size; i++){
        cout<< vec[i] << " ";
    }
 }
 */
    
int main(){
    set<int> ibad;
    int x;
    for(int i = 0; i < 5; i ++){
        cin>> x;
        ibad.insert(x);
    }
         
    for(auto it = ibad.begin(); it != ibad.end(); it++){
        cout << *it << " ";
    }
}

#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

void print(ostream& out, vector<int>& x){
    //int square_evens = [](int& a){return (a % 2 == 0) ? a * a : a;};
    transform(x.begin(), x.end(), []())
    transform(x.begin(), x.end(), ostream_iterator<int>(out, " "), [](int& a){return (a % 2 == 0) ? a * a : a;});
}

int main(){
    vector<int> vec = { 1 , 2, 3, 4};
    
    print(cout, vec);
}

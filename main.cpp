#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int increment(int x){  return (x+1); }

int main(){
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    transform(numbers.begin(), numbers.end(), numbers.begin(), increment);

    int sum = 0;
    auto inc = [](int x) { return x % 2 == 1; };
    numbers.erase(remove_if(numbers.begin(), numbers.end(), inc), numbers.end());

    for(int i = 0; i < numbers.size(); i++){
        sum += numbers[i];
    }

    cout<< sum << endl;
}

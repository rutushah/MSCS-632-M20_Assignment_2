#include<iostream>
#include<functional>
using namespace std;

function<int(int)> increment_module(int start){
    int count = start;

    return [count](int step) mutable {
        count += step;
        return count;
    };
}

int main(){
    auto counter = increment_module(10);
    cout << counter(5) << endl;  // Outputs: 15
    cout << counter(3) << endl;  // Outputs: 18
}

#include <iostream>
using namespace std;

void useNumber(int* p) {
    cout << "Value: " << *p << endl;
}

int main() {
    // allocating the heap memory manually
    int* num = new int(10);

    useNumber(num);

    // freeing memory allocated manually
    delete num;
    cout << "Memory freed." << endl;

   //dangling pointer example
    // cout <<"Dangling Pointer : " << *num << endl; 

    num = nullptr; 
    return 0;
}

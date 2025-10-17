#include <iostream>
using namespace std;
class Test {
    public:
    Test(){
        cout << "Object created!" << endl;        
    }
    ~Test() {
        cout << "Object destroyed!" << endl;
    }
};
int main() {
    Test obj1, obj2; // Object created
    // When the program ends, the destructor will be called automatically
    return 0; // Object destroyed
}
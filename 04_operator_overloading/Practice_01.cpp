// Write a program that overloads increment operator to work with user-defined objects.
#include <iostream>
using namespace std;
class Count{
    private:
        int n;
    public:
        Count() {
            n = 5;
        }
        void show(){
            cout << "n: " << n << endl;
        }
        void operator++() {
            n = n + 1;

        }
};
int main() {
    Count c1;
    c1.show(); // Initial n
    ++c1; // Increment n using overloaded operator
    c1.show(); // Show updated n
    return 0;
}
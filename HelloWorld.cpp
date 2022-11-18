#include <iostream>
using namespace std;

void conflict() {
    cout << "Trying to create a conflict" << endl;
}
int main()
{
    cout << "Hello World.";
    conflict;
    return 0;
}

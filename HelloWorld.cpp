#include <iostream>
using namespace std;

int conflict() {
    cout << "testing out conflict" << endl;
    return 69;
}
int main()
{
    cout << "Hello World.";
    cout << "\nXinChaoTheGioi";
    conflict;
    return 0;
}

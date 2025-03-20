#include <iostream>
#define ARRAY_SIZE (10)
using namespace std;

int main()
{
    int *iHead = new int[ARRAY_SIZE];
    int *p = iHead;

    for (int i = 0; i < 10; i++, p++)
    {
        *p = i;
    }

    p = iHead;
    for (int i = 0; i < 10; i++, p++)
    {
        cout << *p << endl;
    }

    cout << "Test finished!" << endl;
    return 0;
}

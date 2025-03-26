#include <iostream>
#include <array>

#define ARRAY_SIZE (10)

using namespace std;

int main()
{
    array<int, ARRAY_SIZE> xTestArray;

    int i = 0;

    for (auto& it: xTestArray)
    {
        it = i;
        i++;
    }

    cout << "Use iterator to go through array" << endl;

    for (const auto& it: xTestArray)
    {
        cout << it << '\t';
    }
    cout << endl << "Use index to get array items" << endl;


    for (i = 0; i < ARRAY_SIZE/2; i++)
    {
        cout << xTestArray.at(i) << '\t';
    }
    cout << endl;

    for (; i < ARRAY_SIZE; i++)
    {
        cout << xTestArray.at(i) << '\t';
    }

    cout << endl << "Test finished!" << endl;

    return 0;
}

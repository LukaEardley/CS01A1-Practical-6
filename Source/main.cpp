#include <iostream>
#include "UJIntegerCollection.h"
using namespace std;

int main()
{
    UJIntegerCollection colCount(10);
    for(unsigned int i = 0; i < colCount.getLength(); i++)
    {
       colCount[i] = i + 1;
    }
    UJIntegerCollection colCopy;
    colCopy = colCount;
    cout << colCopy << endl;  ///Output should be 1 2 3 4 5 6 7 8 9 10
    UJIntegerCollection colSum(colCount + colCopy);
    cout << colSum << endl; ///Output should be 2 4 6 8 10 12 14 16 18 20
    colCopy[1] = 5;
    colCopy[0] = 5;
    cout << colCopy(5) << endl; ///Output should be 3
    UJIntegerCollection colBeforeInc;

    colBeforeInc = colCount++;
    cout << colBeforeInc << endl; ///Output should be 1 2 3 4 5 6 7 8 9 10
    cout << colCount << endl; ///Output should be 2 3 4 5 6 7 8 9 10 11
    cout << (2 + colCount) << endl; ///Output should be 4 5 6 7 8 9 10 11 12 13
    return 0;
}

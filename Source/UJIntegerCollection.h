#ifndef UJINTEGERCOLLECTION_H
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class UJIntegerCollection
{
public:
    UJIntegerCollection();
    UJIntegerCollection(int length);
    UJIntegerCollection(const UJIntegerCollection & obj);
    int getLength();
    UJIntegerCollection& operator=(const UJIntegerCollection& obj);
    int& operator[](const int index);
    int& operator()(const int val);
    UJIntegerCollection& operator+(const UJIntegerCollection& obj1, const UJIntegerCollection& obj2);
    UJIntegerCollection& operator+(const int val, const UJIntegerCollection& obj);
    UJIntegerCollection& operator++(int);
    friend ostream& operator<<(ostream& output, const UJIntegerCollection& obj);

private:
    int _colcount[];
    int _length;
};
#endif // UJINTEGERCOLLECTION_H

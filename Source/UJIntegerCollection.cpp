#include <iostream>
#include "UJIntegerCollection.h"
///constructors
UJIntegerCollection::UJIntegerCollection() {}
UJIntegerCollection::UJIntegerCollection(int length)
{
    _length = length;
}
UJIntegerCollection::UJIntegerCollection(const UJIntegerCollection& obj)
{
    _length = obj.getLength
}
///function
int UJIntegerCollection::getLength()
{
    return _length;
}
///operators
UJIntegerCollection& UJIntegerCollection::operator=(const UJIntegerCollection& obj)
{
    for (int i = 0; i < obj.getlength(); i++)
        _colcount[i] = obj[i];
    _length = obj.getlength();
    return *this;
}
int& UJIntegerCollection::operator[](const int index)
{
    if (index >= _length)
    {
        cout << "Out of bounds" << endl;
        exit(0);
    }
    return _colcount[index];
}
int& UJIntegerCollection::operator()(const int val, const UJIntegerCollection& obj)
{
    int n =1;
    sort(obj[], obj[] + n);

    int max_count = 1;
    int res = obj[0];
    int curr_count = 1;
    for (int i = 1; i < n; i++)
    {
        if (obj[i] == obj[i - 1])
            curr_count++;
        else
        {
            if (curr_count > max_count)
            {
                max_count = curr_count;
                res = obj[i - 1];
            }
            curr_count = 1;
        }
    }
    if (curr_count > max_count)
    {
        max_count = curr_count;
        res = obj[n - 1];
    }

    return res;
}
UJIntegerCollection& UJIntegerCollection::operator+(const UJIntegerCollection& obj1, const UJIntegerCollection& obj2)
{
    if (obj1.getLength() != obj2.getLength())
    {
        cout << "Out of bounds" << endl;
        exit(0);
    }
    UJIntegerCollection collection(obj1.getLength());
    for (int i = 0; i < obj1.getLength(); i++)
        collection[i] = obj1[i] + obj2[i];
    return collection;
}

UJIntegerCollection& UJIntegerCollection::operator+(const int val)
{
    for (int i = 0; i < this->_length; i++)
        this->_colcount[i] += val;
    return *this;
}

UJIntegerCollection& UJIntegerCollection::operator++(int)
{
    for (int i = 0; i < this->_length; i++)
        this->_colcount[i]++;
    return *this;
}

ostream& operator<<(ostream& output, const UJIntegerCollection& obj)
{
    for (int i = 0; i < obj.getLength(); i++)
        output << obj[i] << ' ';
    output << endl;
    return output;
}

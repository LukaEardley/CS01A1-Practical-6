#ifndef UJINTEGERCOLLECTION_H
using namespace std;
class UJIntegerCollection;
{
public:
    UJIntegerCollection()
    UJIntegerCollection(int length)
    UJIntegerCollection(const UJIntegerCollection & obj)
    UJIntegerCollection(int colcount)
    int getlength();
private:
    int _colcount[];
    int _length;
};
///Prototype functions
int getlength();
int colSum(int colCount, int colCopy);

#endif // UJINTEGERCOLLECTION_H

#include<iostream>
#include<vector>
using namespace std;

template<class t>
class array
{
public:
    array(int size);
    size_t getVectorSize()
    {
        return _data.size();
    }
    size_t getSize()
    {
        return _size;
    }
public:
    vector<t> _data;
    size_t _size;
};

template<class t>
array<t>::array(int size) : _size(size) , _data(_size)
{    }

int main(void)
{
    array<int> *arr = new array<int>(3);
    cout<<arr->getVectorSize()<<endl;
    cout<<arr->getSize()<<endl;
    return 0;
}

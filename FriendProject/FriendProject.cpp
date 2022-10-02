#include <iostream>

using namespace std;

template <class T>
class LinkList
{
    template <class T>
    class Node
    {
        T value;
        Node* next;
    };

};

class MyClass
{
    int a;
    friend class OtherClass;
    friend void Func(MyClass);
};

class OtherClass
{
    int b;
public:
    void Method(MyClass object)
    {
        cout << object.a;
    }
};

void Func(MyClass object)
{
    cout << object.a;
}


int main()
{
    //LinkList<int> list;
    //LinkList<MyClass> list2;
    int n = 1067537;

    std::cout << "Hello World!\n";
    
}

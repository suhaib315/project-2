#include <iostream>
using namespace::std;
class Vector
{
    private:
     int *arr;
     int size;
     int elements;
    public:
    Vector(){
        size=2;
        elements=0;
        arr =new int[size];
    }
    ~Vector()
    {
        delete []arr;
    }
    void push_back(int x)
    {
        if(size=elements)
        {
            size =size*2;
            int *temp=new int[size];
            for(int i=0;i<=elements-1;i++)
            {
                temp[i]=arr[i];
            }
            delete []arr;
            arr=temp;
        }
        arr[elements]=x;
        elements++;
    }
    void pop_back()
    {
        if(elements>0)
        {
            elements--;
        }
    }
    int size()
    {
        return elements;
    }
    int capaciy()
    {
        return size;
    }
    void print()
    {
        for(int i=0;i<elements;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int main()
    {
        Vector v;
    }
}

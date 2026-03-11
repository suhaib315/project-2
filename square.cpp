#include<iostream>
using namespace std;
#define STACK_OVERFLOW 1
/*int main()
{
    int x,y,z,a[10],k,b=0;
    a[0]=16,a[1]=12,a[2]=6,a[3]=9,a[4]=15,a[5]=7,a[6]=3,a[7]=5,a[8]=22,a[9]=10;
    for(x=0;x<=9;x++)
    {
        for(y=0;y<=9;y++)
        {
            k=0;
            for(z=0;z<=9;z++)
            {
                if(a[y]/a[z]==0)
                {
                    k++;
                }
            }
            if(k==b)
            {
                cout<<a[y];
                cout<<endl;
                b++;
            }

        }

    }
}
int main()
{
    int x,y,z,a[10],k,b=9;
    a[0]=16,a[1]=12,a[2]=6,a[3]=9,a[4]=15,a[5]=7,a[6]=3,a[7]=5,a[8]=22,a[9]=10;
    for(x=0;x<=9;x++)
    {
        for(y=0;y<=9;y++)
        {
            k=0;
            for(z=0;z<=9;z++)
            {
                if(a[y]/a[z]==0)
                {
                    k++;
                }
            }
            if(k==b)
            {
                cout<<a[y];
                cout<<endl;
                b--;
            }

        }

    }
}
int main()
{
    int x,n;
    n=2;
    cin>>x;
    while(x/n>=1)
    {
        if(x%n==0)
        {
            cout<<" "<<n;
            x=x/n;
        }
        else
        {
            n++;
        }
    }
}
void F(int b[],int n)
{
    int i;
    for(i=0;i<=2;i++)
    {
       cin>>b[i];
    }
}
int main()
{
    int a[3];
    F(a,3);
    cout<<a[2];
}
int F(int B[],int n)
{
    int x,y,k;
    for(x=0;x<=9;x++)
    {
        k=0;
        for(y=0;y<=9;y++)
        {
            if(B[x]-B[y]<=0 && x!=y)
            {
                k++;
            }
        }
        if(k==9)
        {
            return B[x];
        }
    }
}
int main()
{
    int A[10],i,j;
    for(i=0;i<=9;i++)
    {
        cin>>A[i];
    }
    j=F(A,10);
    cout<<j;
    
}*/
/*
struct my_self
{
    char my_name[20];
    int my_id;
    float my_grades;
    void f(my_self x)
    {
        cout<<x.my_name<<" "<<x.my_id<<" "<<x.my_grades;
    }

};
my_self F()
{
    my_self x;
    cin>>x.my_id;
    cin.ignore();
    cin.getline(x.my_name,20);
    cin>>x.my_grades;
    return x;
}
int main()
{
    my_self y;
    y=F();
   // y.f(y);
    y.f(y);
}
class A
{
    private:
    int a,b;
    public:
    void F(int x,int y)
    {
        a=x;
        b=y;
    }
    void f1()
    {
        cout<<a;
        if(b>0)
        {
            cout<<"+"<<b<<"i";
        }
        else
        {
            cout<<"-"<<b<<"i";
        }
    }
};
int main()
{
    A c1,c2;
    c1.F(3,4);
    c1.f1();
   

}
class A
{
    public:
    int a,b;
    static int k;
} A::k;
{
    A i1,i2;
    i1.a=5;
    i1.k=2;
}
void F(int C[],int D[],int n)
{
    int k,x;
    for(x=0;x<=2;x++)
    {
        k=C[x];
        C[x]=D[x];
        D[x]=k;
    }
}
int main()
{
    int A[3]={1,2,3},B[3]={4,5,6},t;
    F(A,B,3);
    for(t=0;t<=2;t++)
    {
        cout<<A[t];
    }
    
}

void F(int x)
{
    static int s;
    if(x/10==0)
    {
        cout<<s+x;
        cout<<endl;
    }
    else 
    {
        s=(x%10+s)*10;
        F(x/10);
    }
   
    
}
int main()
{
    F(56789);
}
int F(int x)
{
    if(x==1)
    {
        return 1;
    }
    return F(x-1)+x*x;
}
int main()
{
    int y;
    y=F(10);
    cout<<y;

}
int F(int x)
{
    if(x==1)
    {
        return 1;
    }
    return x*F(x-1);
}
int main()
{
    int y;
    y=F(7);
    cout<<y;
}
int main()
{
    int a,x,y;
    cin>>x>>y;
    for(a=x<y?x:y;a>=2;a--)
    {
        if(x%a==0&&y%a==0)
        {
            cout<<"HCF ="<<a;
            return 0;
        }
    } 
}
class A
{
    private:
    int a,b;
    static int k;
    public:
     void f1(int x)
    {
        a=x;
    }
     void f2(int y)
    {
        b=y;
    }
    void f3()
    {
        cout<<a;
    }
    void f4()
    {
        cout<<b;
    }
    static void f5(int z)
    {
        k=z;
    }
    static void f6()
    {
        cout<<k;
    }

};
int A::k;
void p1()
{
    A i1,i2;
    i1.f1(5);
    i1.f2(6);
    cout<<i1.f3()<<" "<<i1.f4();
    cout <<i2.f3()<<" "<<i2.f4();
    i1.f5(2);
    cout<<i2.f6();
}
void p2()
{
    A :: f5(2);
    cout<<A::f6();
}
int main()
{
    p2();
}
int main()
{
    int x,y,z,k,A[10];
    for(x=0;x<=9;x++)
    {
        cin>>A[x];
    }
    for(y=0;y<=9;y++)
    {
        k=0;
        for(z=0;z<=9;z++)
        {
            if(A[y]-A[z]<0)
            {
                k++;
            }
        }
        if(k==1)
        {
            cout<<"second largest element in array is\n";
            cout<<A[y];
            cout<<endl;

        }
    }

}
int main()
{
    int x,y,k,A[10]={1,2,3,4,2,5,3,12,7,12};
    for(x=0;x<=8;x++)
    {
        k=0;
        for(y=x+1;y<=9;y++)
        {
            if(A[x]-A[y]==0)
              k++;
        }
        if(k>0)
        {
            cout<<A[x]<<"is being repeated "<<k<<"times\n";
        }
        
    }
}
void F(char S[])
{
    int x;
    char c1,c2;
    for(x=0;x<=4;x++)
    {
        for(c1='a',c2='A';c1<='z';c1++,c2++)
        {
            if(S[x]==c2)
            {
                S[x]=c1;
            }
        }
    }
    
}
int main()
{
    char S[]="HELLO";
    cout<<S<<"\n";
    F(S);
    cout<<S;
    cout<<endl;
}
void set_a(int);
void set_b(int);
void f();
class A
{
    private:
    int a,b;
    public:
    void set_a(int x)
    {
        a=x;
    }
    void set_b(int x)
    {
        b=x;
    }
    void f()
    {
        cout<<a<<"+"<<"i"<<b;
    }
      
};
void F1()
{
    A i1;
    set_a(5);
    set_b(4);
    f();

}
int main()
{
    F1();
}
class A
{
    private:
        int a,b; //Instance Member Variables
    public:
        void set_a_and_b(int x,int y)
        {
            a=x;
            b=y;
        }
        void F()
        {
            cout<<a<<"+"<<b<<"i";
        }
};

void f1()
{
    A i1;
    i1.set_a_and_b(5,6);
    i1.F();
}
int main()
{
    f1();
    cout<<endl;
    return 0;
}
class date
{
    private:
    int a,b;
    char c;
    public:
    void F(int x,int y,char z)
    {
        a=x;
        b=y;
        c=z;
    }
    void F1()
    {
       cout<<a<<"-"<<c<<"-"<<b;
    }
};
int main()
{
    class date D1;
    D1.F(10,2025,december);
    D1.F1();
}
//addition of two complex numbers
//constructor member variable ko initilize;
//constructor ke andar kuch be lika hoo pehle too initlizer hee chalega
//define a class SLL data structure with member variable start 
//pointer of type node.
class Date
{
    private:
      int d,m,y;
    public:
       Date(int x,int Y,int z):d(x),m(Y),y(z){}
    void show_date()
    {
        cout<<"day="<<d<<"month="<<m<<"year="<<y;
    }
};
int main()
{
    Date D1(12,11,2005);
    D1.show_date();

}
class Array
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        Array();
        void append(int);
        void print_array();
        void insert_element(int index,int value);
        int find_data(int);

};
Array::Array()
{
    capacity=10;
    lastIndex=-1;
    ptr=new int[capacity];
    int x,y=1;
    for(x=0;x<=8;x++)
    {
        ptr[x]=y;
        y++;
    }
}
void Array::print_array()
{   int x;
    for(x=0;x<=9;x++)
    {
        cout<<ptr[x]<<"  ";
    }
}
void Array::insert_element(int index,int value)
{
    int x;
    for(x=capacity-1;x>=index;x--)
    {
        ptr[x]=ptr[x-1];
    }
    ptr[index]=value;
}
int main()
{
    Array A1;
    A1.insert_element(3,50);
    A1.print_array();
    cout<<A1.find_data(3);
}
int Array::find_data(int x)
{
    return ptr[x];
}
class Array
{
    private:
      int capacity;
      int lastindex;
      int *ptr;
    public:
        Array();
      void half_array();
      void add_element();
};
Array::Array()
{
    capacity=10;
    ptr=new int[capacity];
    lastindex=-1;
}
void Array::half_array()
{
    int *x,y;
    x=new int[capacity/2];
    for(y=0;y<=lastindex;y++)
    {
        x[y]=ptr[y];
    }
    delete []ptr;
    ptr=x;
    capacity=capacity/2;

struct node
{
    int value;
    node *next;
};
class SLL
{
    private:
     node *start;
    public:
     void F(int data);
     void g(int data);
     void h(int data,int node_value);
     void delete_last();
};
void SLL::F(int data)
{
    node *n=new node;
    n->value=data;
    n->next=nullptr;
    start=n;
}
void SLL::g(int data)
{
    node *ptr;
    ptr=start;
    while(ptr->next==nullptr)
    {
        ptr=ptr->next;
    }
    ptr->value=data; 
}
void SLL::h(int data,int node_value)
{
    node *n=new node;
    node *ptr,*P;
    ptr=start;
    while(ptr->value!=node_value)
    {
        ptr=ptr->next;
    }
    n->value=data;
    P=ptr->next;
    n->next=P;
    ptr->next=n;
}
void SLL::delete_last()
{
    node *ptr;
    ptr=start;
    while(ptr->next!=nullptr)
    {
        ptr=ptr->next;
    }
    delete ptr;
}
struct node
{
    node *prev;
    int value;
    node *forward;
};
class DLL
{
    private:
     node *start;
    public:
      DLL();
      void f(int data);
      void g(int data);
      void insert_node(int data ,int insert_after);
      void delete_first();
      void delete_last();
      void delete_specific(int node_value);
      void F();
      void h();
};
DLL::DLL()
{
    start=nullptr;
}
void DLL::f(int data)
{
    node *n=new node;
    n->prev=nullptr;
    n->forward=start;
    if(start)
        start->prev=n;
    start=n;
}
void DLL::g(int data)
{
    node *n=new node;
    node *Ptr;
    n->value=data;
    if(start==nullptr)
    {
        n->prev=nullptr;
        n->forward=nullptr;
        start=n;
    }
    else
    {
        Ptr=start;
        while(Ptr->forward!=nullptr)
        {
            Ptr=Ptr->forward;
        }
        Ptr->forward=n;
        n->prev=Ptr;
        n->forward=nullptr; 
    }
}
void DLL::insert_node(int data ,int insert_after)
{
    node *n=new node;
    node *p;
    n->value=data;
    p=start;
    while(p->value!=insert_after)
    {
        p=p->forward;
    }
    n->forward=p->forward;
    p->forward=n;
    n->prev=p;
    p=p->forward;
    p->prev=n;
}
void DLL::delete_first()
{
    node *p;
    p=start;
    start=start->forward;
    delete p;
}
void DLL::delete_last()
{
    node *p,*n;
    p=start;
    while(p->forward->forward!=nullptr)
    {
        p=p->forward;
    }
    n=p->forward;
    p->forward=nullptr;
    delete n;
}
void DLL::delete_specific(int node_value)
{
    //node value is int value in node 
    node *p;
    p=start;
    if(p->forward!=nullptr)
    {
      while(p->forward->value!=node_value)
      {
        p=p->forward;
      }
       p->forward=p->forward->forward;
      p->forward->forward->prev=p;
       delete p->forward;
    }
}
#define STACK_UNDERFLOW 2

class Stack
{
    private:
    int capacity;
    int top;
    int *ptr;
    public:
      Stack();
    void push(int);
    void pop();
    void peek();
    bool isFull();
    bool isEmpty();
       ~Stack();
};
Stack::Stack()
{
    capacity=5;
    top=-1;
    ptr=new int[capacity];
    *ptr=1;
    top++;
   *(ptr+1)=2;
    top++;
   *(ptr+2)=3;
    top++;
   *(ptr+3)=4;
     top++;
   *(ptr+4)=10; 
    top++;
}
void Stack::push(int data)
{
     
    if(isFull())
       throw STACK_OVERFLOW;
    top++;
    ptr[top]=data;
}
bool Stack::isFull()
{
    return top==capacity-1;
}
bool Stack::isEmpty()
{
    return top==-1;
}
void Stack::peek()
{
    if(isEmpty())
        throw STACK_UNDERFLOW;
    cout<<ptr[top];
}
void Stack::pop()
{
   top--;
}
Stack::~Stack()
{
    while(!isEmpty())
        pop();
}
int main()
{
    Stack S1;
}
#define QUEUE_OVERFLOW 1
#define QUEUE_UNDERFLOW 2
class Queue
{
    private:
    int capacity;
    int front,rare;
    int *ptr;
    public:
       Queue();
       void enqueue(int);
       bool isFull();
       bool isEmpty();
       void delete_front();
        ~Queue();
};
Queue::Queue()
{
    front=-1;
    rare=-1;
    capacity=5;
    ptr=new int[capacity];
}
void Queue::enqueue(int data)
{
    if(isFull())
       throw QUEUE_OVERFLOW;
    if(isEmpty())
    {
        front=rare=0;
        ptr[front]=data;
    }
    else if(rare==capacity-1)
    {
        rare=0;
        ptr[rare]=data;
    }
    else
    {
        rare++;
        ptr[rare]=data;
    }
}
bool Queue::isFull()
{
    return (front==0 && rare==capacity-1)||(front=rare+1);
}
bool Queue::isEmpty()
{
    return front=rare=-1;
}
void Queue::delete_front()
{
    if(isEmpty())
        throw QUEUE_UNDERFLOW;
    else if(front==capacity-1) 
        front=0;
    else if(front==rare)
    {
        front=rare=-1;
    }
    else 
       front++;
}
Queue::~Queue()
{
   delete []ptr;
}
struct node
{
    int value;
    node *next;
};
class Cll
{
    private:
    node *last;
    public:
      Cll();
      void insert_at_beginning(int);
      void insert_at_end(int data);
      void delete_first();
      void delete_last();
      void delete_specific();
};
Cll::Cll()
{
    last=nullptr;
}
void Cll::insert_at_beginning(int data)
{
    node *p;
    p->value=data;
    p->next=last->next;
    last->next=p;
}
void Cll::insert_at_end(int data)
{
    node *n;
    n->value=data;
    n->next=last->next;
    last->next=n;
}
void Cll::delete_first()
{
    node *n;
    n=last->next->next;
    delete last->next;
    last->next=n;
}
void Cll::delete_last()
{
    node *p,*n;
    p=last->next;
    while(p->next!=last)
        p=p->next;
    n=p->next;
    p->next=last->next;
    last=p;
    delete n;
}
void Cll::delete_specific()
{

}
struct node
{
    public:
    node *prev;
    int value;
    node *next;
};
class dll
{
    public:
    node *start;
    node *n[4];
     dll();
    node *search(int);
};
dll::dll()
{
    for(int i=0;i<=4;i++)
    {
        n[i]->prev=n[i-1];
        n[i]->value=i;
        n[i]->next=n[i+1];
    }
    start=n[0];
    n[0]->prev=nullptr;
}
node* dll::search(int data)
{
    node *p;
    p=start;
    while(p->value!=data)
    {
        p=p->next;
    }
    return p;
}
int main()
{
    dll d1;
}
#include<array>
void F();
int main()
{
    array<int,5>a1={10,20,30,50,20};
    try{
    for(int i=0;i<=5;i++)
         cout<<a1.at(i)<<" ";
    cout<<endl;
    }
    catch(out_of_range){
        cout<<"you are going out of range"<<endl;;
    }
    array<int,5>::iterator x;
    for(x=a1.begin();x!=a1.end();x++)
         cout<<*x<<" ";
    cout<<endl;
    F();
}
void F()
{
    array<int,5>a1={10,20,30,50,20};
    array<int,5>::reverse_iterator x;
    x=a1.rbegin();
    
   for(x=a1.rbegin();x!=a1.rend();x++)
         cout<<*x;
}
int main()
{
    int arr[3];
    for(int i=0;i<=2;i++) 
        cin>>arr[i];
    int a,b;
    for(a=0;a<=2;a++)
    {
        int count=0;
        for(b=0;b<=2;b++)
        {
            if(arr[a]-arr[b]>0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout<<arr[a]<<" "<<"is the largest value";
            return 0;
        }
    }
    for(a=0;a<=2;a++)
       for(b=0;b<=2;b++)
       {
           if(arr[a]-arr[b]>0)
           {
                cout<<"largest value"<<" "<<arr[a]<<" "<<"had been written two times";
                return 0;
           }
       }
    cout<<"three numbers you have entered are same";
}
struct node
{
    int value;
    node *next;
};
class Stack
{
    private:
    node *top,*start;
    int capacity;
    public:
        Stack();
    void new_element(int data);
    bool isEmpty();
    int peek();
    void pop();
    void reverse_stack();
    
};
Stack::Stack()
{
    start=nullptr;
    top=nullptr;
}
bool Stack::isEmpty()
{
    return top==nullptr;
}

void Stack::new_element(int data)
{
    node *n =new node;
    node *p;
    n->value=data;
    if(isEmpty())
    {
        n->next=nullptr;
        top=start=n;
    }
    p=start;
    while(p->next!=nullptr)
    {
        p=p->next;
    }
    p->next=n;
    n->next=nullptr;
    top=n;
}
int Stack::peek()
{
    return top->value;
}
void Stack::pop()
{
    node *p;
    p=start;
    while(p->next->next!=nullptr)
        p=p->next;
    delete top;
    p->next=nullptr;
    top=p;
}

void Stack::reverse_stack()
{
    static node *n;
    node *arr[5]
    if(n==nullptr)
    {
        n=start;
    }
    static int x=0;
    if(n->next!=nullptr)
    {
        arr[x]=n;
        delete n;
        n=n->next;
        x++;
        reverse_stack();
    }
    n->next=arr[x-1];
    x--;
}
#include<vector>
int main()
{
    vector <int> v1={12,45,31,10};
    vector<int>::iterator x=v1.begin();
    for(x=v1.begin(); x!=v1.end();x++)
          cout<<*x;
}
    p=*ptr;
     int count;
     p=*ptr;
     while(p->(node*)->next)
     
}
i count=0;
    n=start;
    while(n->next!=nullptr)
    {
        n=n->next;
        count++;
    }
    cout<<count<<"nodes";
}
int main()
{
    adjlist a1;
    graph g1;
    g1.F();
    a1.p();
nt adjlist::p()
{
    node *n=new node;
    int
}
int main()
{
    int k=10;//k are integers;
    int arr[10]={1,2,3,-1,-3,-4,7,6,5,-8};
    for(int i=0;i<=k/2;i++)
    {
struct node
{
    int vertex;
    node *next;
};
class adjlist
{
    node *start;
    public:
    int p();
};
class graph
{
    private:
    adjlist **ptr;  
    public:
     void F();
};
void graph::F()
{
     adjlist *p=nullptr;
  if(arr[i]>0)
       {
           for(int x=i+1;x<k;x++)
           {
               if(arr[x]<0)
               {
                   int z;
                   z=arr[x];
                   arr[x]=arr[i];
                   arr[i]=z;
                   break;
               }
           }
       }
    }
    for(int i=0;i<=9;i++)
         cout<<arr[i];
//rotate array 
int main()
{
    int k,s;
    int arr[5]={1,2,3,4,5};
    cin>>k;
    if(k>0){
    for(int x=1;x<=k;x++)
    {
        s=arr[4];
        for(int y=4;y>0;y--)
        {
            arr[y]=arr[y-1];
        }
        arr[0]=s;
    }
    }
    else 
    {
        for(int x=k;x<0;x++)
        {
            s=arr[0];
            for(int y=0;y<4;y++)
            {
                arr[y]=arr[y+1];
            }
            arr[4]=s;
        }
    }
    for(int x=0;x<=4;x++)
        cout<<arr[x];
}
void F(int A[],int x)
{
    int min;
    for(int x=0;x<=3;x++)
    {
        min=A[x];
        for(int y=x+1;y<=4;y++)
        {
            if(A[y]<min)
            {
                min=A[y];
                A[y]=A[x];
                A[x]=min;
            }
        }
    }
}
int main()
{
    int arr[5]={6,3,4,2,1};
    for(int z=0;z<=3;z++)
    {
     int x=0;
    while(x<=3)
    {
        if(arr[x]>arr[x+1])
        {
            int y;
            y=arr[x];
            arr[x]=arr[x+1];
            arr[x+1]=y;
        }
        x++;
    }
    }
    for(int z=0;z<=4;z++)
        cout<<arr[z]<<" ";
}
#define TREE_UNDERFLOW 1
struct node
{
    node *left;
    int value;
    node *right;
};
class BST
{
    private:
     node *root;
    public:
       BST();
       bool isEmpty();
       void insert_new_element(int data);
          ~BST();
        void erase(node *p);
};
void BST::erase(node *p)
{
    if(p->left!=nullptr)
    {
        erase(p->left);
    }
    if(p->right!=nullptr)
    {
        erase(p->right);
    }
    delete p;
    

}
BST::~BST()
{
    erase(root);
};

BST::BST()
{
    root=nullptr;
}
bool BST::isEmpty()
{
    return root==nullptr;
}
void BST::insert_new_element(int data)
{
    node *n=new node;
    n->left=nullptr;
    n->right=nullptr;
    n->value=data;
    node *p;
    p=root;
    while(p!=nullptr)
    {
    if(p->value>data)
    {
        p=p->left;
    }
    else
    p=p->right;
    }
    n=p;
}
int main()
{
    int capacity=10;
    int arr[10]={1,2,3,1,2,4,5,6,1,7};
    for(int i=0;i<=capacity-2;i++)
    {
        for(int x=i+1;x<=capacity-1;x++)
        {
            if(arr[i]==arr[x])
            {
                for(int a=x;a<=capacity-2;a++)
                {
                    arr[a]=arr[a+1];
                }
                capacity--;
            }
        }
    }
    for(int i=0;i<=capacity-1;i++)
        cout<<arr[i];
}

class Array
{
    private:
       int capacity;
       int last_index;
       int *p;
    public:
        Array();
        void half_array();
        void set_array();
        void size();
};
Array::Array()
{
    p=new int[capacity];
    last_index=-1;
}
void Array::set_array()
{
    capacity=30;
    for(int x=0;x<=9;x++)
    {
        p[x]=x+3;
        last_index++;
    }
}
void Array::size()
{
    cout<<"size of array is = "<<capacity<<" ";
    cout<<endl;
    for(int x=0;x<=capacity-1;x++)
        cout<<p[x]<<" ";
    cout<<endl;
        
}
void Array::half_array()
{
    if(capacity/2>=last_index+1)
    {
        int x=0;
        int *ptr=new int[capacity-(last_index+1)];
        for(int y=last_index+1;y<capacity;y++)
        {
            ptr[x]=p[y];
            x++;
        }
        capacity=last_index+1;
        delete []ptr;
    }
}
int main()
{
    Array A1;
    A1.set_array();
    A1.size();
    A1.half_array();
    A1.size();
}
struct node
{
    node *left;
    int value;
    node *right;
};
class Heap
{
    private:
     node *root;
    public:
    void insert(int data);
};
void Heap::insert(int data)
{
    node *ptr=root;
    if(ptr->left!2=nullptr)
    {
        
    }
}
int main()
{
    int s=0;
    int x;
    int y;
    for(x=0;x<=9;x++)
    {
        cout<<"enter your marks in subject"<<" "<<x+1;
        cout<<endl;
        cin>>y;
        if(y<35)
            break;
        s=s+y;
    }
    if(x==10 && s/3>=40)
    {
        cout<<"you had passed the exam";
    }
    else
    {
        cout<<"you had failed the exam";
    }
}
//insertion sort
int main()
{
    int temp;
    int arr[10]={52,78,16,39,84,91,26,31,15,43};
    for(int x=1;x<=9;x++)
    {
        for(int y=x-1;y>=0;y--)
        {
            if(arr[x]<arr[y])
            {
                temp=arr[x];
                arr[x]=arr[y];
                arr[y]=temp;
                x--;
            }
            else
                break;
        }
    }
    for(int x=0;x<=9;x++)
         cout<<arr[x]<<" ";

//quick sort
int main()
{
    int arr[10]={6,7,8,9,2,3,1,4,5,10};
    int left=0,right=9,loc=0;
    while(loc!=left!=right)
    {
        if(arr[loc]>0)
        {
            int temp;
            temp=arr[loc];
            arr[loc]=arr[right];
            arr[right]=temp;
            loc=right;
        }
        else if(arr[loc]<arr[right])
        {
            right--;
        }
        if(arr[loc]<arr[left])
        {
            int temp;
            temp=arr[loc];
            arr[loc]=arr[left];
            arr[left]=temp;
            loc=left;
        }
        else if(arr[loc]>arr[left])
        {
            left++;
        }
        if(loc==left&&loc==right)
            break;
    }
    for(int i=0;i<=9;i++)
        cout<<arr[i]<<" ";
}
class Heap
{
    int *ptr;
    int capacity;
    int index;
    public:
      Heap();
      void insert(int data);
      void set_heap();
      void print();
      void delete_heap();
      void delete_top();
};
Heap::Heap()
{
    capacity=6;
    index=-1;
    ptr=new int[capacity];
}
void Heap::insert(int data)
{
    capacity++;
    index++;
    ptr[index]=data;
    while(index%2==0 && data>ptr[(index-2)/2] && index>=2)
    {
       int temp;
       temp=ptr[(index-2)/2];
       ptr[(index-2)/2]=ptr[index];
       ptr[index]=temp;
       index=(index-2)/2;
    }
    while(index%2!=0 && data>ptr[(index-1)/2] && index>=1)
    {
       int temp;
       temp=ptr[(index-1)/2];
       ptr[(index-1)/2]=ptr[index];
       ptr[index]=temp;
       index=(index-1)/2;
    }
    ptr[index]=data;
    index=capacity-1;
}
 void Heap::set_heap()
 {
    ptr[0]=60;
    index++;
    ptr[1]=50;
    index++;
    ptr[2]=55;
    index++;
    ptr[3]=20;
     index++;
    ptr[4]=10;
     index++;
    ptr[5]=40;
     index++;
 }
void Heap::print()
{
    for(int i=0;i<=capacity-1;i++)
        cout<<ptr[i]<<" ";
    cout<<endl;
}
void Heap::delete_heap()
{
    while(capacity!=0){
    int x=0;
    ptr[x]=ptr[last_index];
    capacity--;
    last_index--;
    while(ptr[x]< (ptr[2*x+1]>ptr[2*x+2]?ptr[2*x+1]:ptr[2*x+2]))
    {
        int temp;
        temp=ptr[2*x+1]>ptr[2*x+2]?ptr[2*x+1]:ptr[2*x+2];
        ptr[2*x+1]>ptr[2*x+2]?ptr[2*x+1]:ptr[2*x+2]=ptr[x];
        ptr[x]=temp;
        x=(ptr[2*x+1]>ptr[2*x+2]?2*x+1:2*x+2);
    }
    }
}
void Heap::delete_heap()
{
    while(capacity!=0)
    {
        cout<<ptr[0]; 
        ptr[0]=ptr[capacity-1];
        capacity--;
        index--;
        int x=0;
        while(capacity!=0){
        if(ptr[2*x+1]>ptr[2*x+2] && ptr[2*x+1]>ptr[x] && 2*x+1<=capacity-1)
        {
            int temp;
            temp=ptr[x];
            ptr[x]=ptr[2*x+1];
            ptr[2*x+1]=temp;
            x=2*x+1;
        }
        else if(ptr[2*x+1]<ptr[2*x+2] && ptr[2*x+2]>ptr[x] && 2*x+2<=capacity-1)
        {
            int temp;
            temp=ptr[x];
            ptr[x]=ptr[2*x+2];
            ptr[2*x+2]=temp;
            x=2*x+2;
        }
        else 
            break;
        }
    }
}
 
int main()
{
    Heap h1;
    h1.set_heap();
    h1.insert(80);
    h1.print();
    h1.insert(56);
    h1.print();
}
int F()
{
    int x=0;
    int arr[10]={-2,-1,2,3,4,5,6,7,8,10};
    while(arr[x]<0)
    {
        x++;
    }
    if(arr[x]!=1)
            return 1;
    for(int y=x;y<=8;y++)
    {
        if(arr[y+1]!=arr[y]+1)
            return arr[y]+1;
    }
    cout<<"no missing positive index";
    return 0;
    
}
int main()
{
    cout<<"misssing least positive index is "<<F();
}
int F(int x);
int main()
{
    cout<<F(123456);
}
int F(int x)
{
    int y=x;
    int s=1;
    while(y/10!=0)
    {
        s=s*10;
        y=y/10;
    }
    if(x/10!=0){
        return (x%10)*s+F(x/10);
    }
    else
        return x;
    return 0;

}
int main()
{
    int arr[6]={5,8,1,3,8,4};
    int k=4;
    int count=0;
    for(int x=0;x<=3;x++)
    {
        if(arr[x]<=k){
            count++;
            cout<<x<<" ";

        }
        for(int y=x+1;y<=4;y++)
        {
            if(arr[x]+arr[y]<=4)
            {
                cout<<x<<","<<y<<" ";
                count++;
            }

        }
    }
    cout<<endl;
    cout<<"number of subarrays whose sum in <= "<<" "<<k<<" are"<<" "<<count;
    cout<<endl;
}
#define INVALID_BST 
struct node
{
    node *left;
    int value;
    node *right;
};
class BST
{
    private:
    node *start;
    public:
        BST();
    void check(node *start);
};
//BST::BST()
//{
   // start=nullptr;
//}
void BST::check(node *ptr)
{
    if(ptr->left!=nullptr)
    {
        static int x;
        if(ptr->value<ptr->left->value || ptr->left->value<x)
            throw INVALID_BST;
        check(ptr->left);
        x=ptr->value;
    }
    if(ptr->right!=nullptr)
    {
        if(ptr->right->value<ptr->value || ptr->right->value<start->value)
            throw INVALID_BST;
        check(ptr->right);
    }
}
#include<array>
int main()
{
   ¸
    for(auto x:a1)
       cout<<x<<" ";
    cout<<endl;
    array<int,5>::reverse_iterator it;
    for(it=a1.rbegin();it<a1.rend();it++)
        cout<<*it<<" ";
}
struct node
{
    int value;
    node *next;
};
class SLL
{
    private:
     node *start;
    public:
      SLL();
      void change_nodes();
};
SLL::SLL()
{
    start=nullptr;
}
void SLL::change_nodes()
{
    node *ptr=start;
    if(ptr->next->next->next!=nullptr)
    {
        node *a,*b,*c;
        a= ptr->next->next->next;
        b= ptr->next->next;
        c= ptr->next;
        ptr->next->next->next=c;
        ptr->next->next=a;
        ptr->next=b;
    }
}
public:
    node* F(int);
    struct node
{
    int value;
    node *next;
};
class SLL
{
    private:
    node* start;
      SLL();
};
SLL::SLL()
{
    start=nullptr;
}
node* SLL::F(int k)
{

    node *ptr;
    ptr=start;
    if(k==0||ptr==nullptr||ptr->next==nullptr)
        return ptr;
    int count=1;
    while(ptr->next!=nullptr)
    {
        count++;
        ptr=ptr->next;
    }
    ptr->next=start;
    ptr=start;
    int c=count-k;
    while(c>0)
    {
        ptr=ptr->next;
        c--;
    }
    node *p=ptr->next;
    ptr->next=nullptr;
    return p;
}
void F(int Arr1[],int Arr2[],int s)
{
    int x=0,y=0;
    while(x!=s-1 || y!=s-1)
    {
        if(Arr1[x]>=Arr2[y])
        {
            cout<<Arr1[x];
            if(x<=s-1)
                x++;
        }
        else
        {
            cout<<Arr2[y];
            if(y<=s-1)
               y++;
        }
    }
    if(x==s-1)
    {
        while(y!=s-1)
        {
            cout<<Arr2[y];
            y++;
        }
    }
    else if(y==s-1)
    {
        while(x!=s-1)
        {
            cout<<Arr1[x];
            x++;
        }
    }
}
int main()
{
   int arr1[4]={49,34,26,21};
   int arr2[4]={35,33,32,30};
   F(arr1,arr2,4)
   
int main()
{
    int arr[10]={-2,8,7,1,3,2,4,6,9,5};
    int y=1;
    int b=1;
    while(y==b)
    {
        for(int x=0;x<=9;x++)
        {
            if(arr[x]==y)
            {
                b++;
            }
        }
        y++;
    }
    cout<<b;
    return 0;
}
int main()
{
    int arr[10]={1,2,3,4,5,7,6,8,9,10};
    int max;
    for(auto x: arr)
    {
        if(x>max)
        {
            max=x;
        }
    }
    int a=1;
    while(a<=max){
        int count=0;
    for(int x=0;x<=9;x++)
    {
        if(a==arr[x])
            count++;
        if(count==2){
            cout<<a;
            return a;
        }
    }
    a++;
}
}
//delete node in BST;
int BST::delete_node_BST(node *head)
{ 
    if(head==nullptr)
        return -1;
    else if(head->left !=nullptr && head->left->data==target && head->left->left==nullptr && ptr->left->right==nullptr)
    {
        delete head->left;
        head->left=nullptr;
        return 1;
    }
    else if(head->right !=nullptr && head->right->data==target && head->right->left==nullptr && head->right->right==nullptr)
    {
        delete head->right;
        head->right=nullptr;
        return 1;
    }
    else if(target>head->value && head->right!=nullptr)
        delete_node_BST(head->right);
    else if(target<head->value && head->left!=nullptr)
        delete_node_BST(head->left);
    else if(head->data==target)
    {
        if(head->left==nullptr)
        {
            head->data=head->right->data;
            delete head->right;
            head->right=nullptr;
            return 1;
        }
        node *ptr=head;
        ptr=ptr->left;
        if(ptr->right==nullptr)
        {
            head->value=ptr->value;
            head->left=nullptr;
            delete ptr;
            return 1;
        }
        while(ptr->right!=nullptr)
        {
            ptr=ptr->right;
        }
        if(ptr->left!=nullptr)
        {
            head->value=ptr->value;
            ptr->value=ptr->left->value;
            delete ptr->left;
            ptr->left=nullptr;
            return 1;
        }
        else
        {
            head->value=ptr->value;
            head=head->left;
            while(head->right!=ptr)
                head=head->right;
            head->right=nullptr;
            delete ptr;
            return 1;
        }
    }
}
bool isvalid(node *root)
{
    int x=root->value;
    return F(root,x)
}
bool F(node *ptr,int x)
{
    if(ptr->left!=nullptr)
        F(ptr->left,P);
    if(ptr->value<x)
        return false;
    x=ptr->value;
    if(ptr->right!=null)
        F(ptr->right,P);
}
bool helper(node *ptr)
{
    static int a =ptr->value;
    if(ptr->left!=nullptr)
        helper(ptr->left);
    static vector <int> v;
    v.push_back(ptr->value);
    if(v.size()>1 && (v.back()-v[v.size()-2]<=0))
        return false;
    if(ptr->right!=nullptr)
        helper(ptr->left);
    if(ptr->value==a)
         return true;
}
bool validate(node *root)
{
    if(root==nullptr || root->left==nullptr && root->right==nullptr)
            return false;
    else
        return helper(root);
        
}
// mistakenly switched one of the nodes of BST now make it correct;
void correct_BST(node *root)
{
    if(root->left!=nullptr)
         correct_BST(root->left);
    static vector <int> v;
    v.push_back(root->value)
    if(v.size()>1 && (v.back()-v[v.size()-2])<0)
    {
        int temp;
        if(root->left->value>root->value)
        {
            temp=root->value;
            root->value=root->left->value;
            root->left->value=temp;
        }
        else
        {
            temp=root->value;
            root->value=root->right->value;
            root->right->value=temp;

        }
    }
    if(ptr->right)
}
bool helper(node *ptr)
{
    static int a =ptr->value;
    if(ptr->left!=nullptr)
        helper(ptr->left);
    static vector <int> v;
    v.push_back(ptr->value);
    return (v.size()>1 && (v.back()-v[v.size()-2]>=0))
    if(ptr->right!=nullptr)
        helper(ptr->right);
    if(ptr->value==a)
         return true;
}
bool validate(node *root)
{
    if(root==nullptr || root->left==nullptr && root->right==nullptr)
            return false;
    else
        return helper(root);
}
// l==0;and m==arr.size()-1;
int f(int arr[],int l,int m,int target)
{
    if(l>m)
        return -1;
    int mid=(l+m)/2;
    if(arr[mid]==target)
        return mid;
    else if(target>arr[mid])
    {
        l=mid+1;
        return f(arr,l,m,target);
    }
    else
    {
        m=mid-1;
        return f(arr,l,m,target);
    }
}
bool helper(node *ptr,int x)
{
    if(ptr->left!=nullptr)
        return heper(ptr->left,x);
    if(ptr->value<x)
        return false;
    else 
        x=ptr->value;
    if(ptr->right!=nullptr)
        return helper(ptr->right,x);
}
bool validate(node *root)
{
    if(root==nullptr || root->left==nullptr&&root->right==nullptr)
         return false;
    else
    {
        node *p=root;
        while(p->left!=null)
            p=p->left;
        int x=p->left;
        return helper(root,x);
    }
}
void helper(node*& temp, node* ptr,node *head)
{
    if(ptr->next!=nullptr)
    {
        helper(ptr,ptr->next,head);
    }
    if(ptr->next==nullptr)
    {
        head=ptr;
        ptr->next=temp;
    }
    else
       ptr->next=temp;
    if(temp==nullptr)
         return head;
}
node* reverse_linked_list(node *head)
{
    if(head==nullptr || head->next==nullptr)
           return head;
    node *ptr=head;
    while(head->next!)
        
    node *temp=nullptr;
    return helper(temp,head,head);
}*/

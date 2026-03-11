#include<iostream>
#include<map>
using namespace::std;
#include<unordered_map>
struct record
{
    int id;
    string name;
    int age;
};
class Student
{
    private:
    unordered_map<int,record> s;
    public:
    void insert(int id,string name,int age);
    void Search(int);
    void remove(int);
    void display_all_records();
};
void Student::insert(int id,string name,int age)
{
    record r;
    r.id=id;
    r.name=name;
    r.age=age;
    s[id]=r;
    cout<<"Record Inserted Sucessfully"<<endl;
}
void Student::Search(int id)
{
    unordered_map<int,record>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        if(it->second.id==id)
        {
            record r =s[id];
            cout<<"ID:" <<r.id<<endl;
            cout<<"Name:"<<r.name<<endl;
            cout<<"age:"<<r.age<<endl;
            break;
        }
    }
    if(it==s.end())
        cout<<"No Record Found"<<endl;
}
int main()
{
    Student S1;
    while(true)
    {
        cout<<"1 Add Record"<<endl<<"2 Search Record"<<endl<<"3 Delete Record"<<endl<<"4 Display_all_records"<<endl;
        int choices;
        cin>>choices;
        if(choices==1)
        {
            int id;
            string name;
            int age;
            cout<<"Enter Id\n";
            cin>>id;
            cin.ignore();
            cout<<"Enter name\n";
            getline(cin,name);
            cout<<"enter age\n";
            cin>>age;
            S1.insert(id,name,age);
        }
        else if(choices==2)
        {
            int id;
            cout<<"Enter Id\n";
            cin>>id;
            S1.Search(id);
        }
        else if(choices==3)
        {
            int id;
            cout<<"enter id";
            cin>>id;
            S1.remove(id);
        }
        else if(choices==4)
        {
            S1.display_all_records();
        }
        else 
           break;
    }
}
void Student::remove(int id)
{
    unordered_map<int,record>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        if(it->second.id==id)
        {
            s.erase(it);
            cout<<"Record Deleted sucessfully"<<endl;
            break;
        }
    }
    if(it==s.end())
        cout<<"No Record Found"<<endl;
}
void Student::display_all_records()
{
    cout<<"ID"<<"     "<<"Name"<<"     "<<"age"<<endl;
    for(auto x : s)
    {
        cout<<x.second.id<<"   "<<x.second.name<<"   "<<x.second.age<<endl;
    }
}
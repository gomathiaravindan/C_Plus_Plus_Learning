#include <iostream>

using namespace std;

int main()
{
    string s("Gomathi");
    cout<<"Let's play with string and it's functions!!"<<endl;
    
    cout<<s.front()<<endl;
    cout<<s.back()<<endl;
    cout<<s.erase(3,1)<<endl;
    s.erase(s.begin() + 2 , s.end() - 2);
    cout<<s<<endl;
    cout<<s.replace(3,2,"seuhh")<<endl;
    s.append(" is a good girl");
    cout<<s<<endl;
   string name("Gomathi is a good girl");
   string str;
   str = name;
   cout<<name.compare(str)<<endl;
   
   cout<<name.find("mathi")<<endl;
   cout<<name.find_first_of("Gom")<<endl;
   cout<<name.find_last_of("athi")<<endl;
}

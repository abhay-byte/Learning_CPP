#include <iostream>
using namespace std;
class String{
private:
    char *str;
public:
    String(){
        str = NULL;
        cout<<"str points to null";
    }
    String(char *st){
        str = st;
        cout<<"\nstr points to "<<str;
    }
    String(String& st){
        str = st.str;
        cout<<"\nstr points to "<<str;
    }
    ~String(){
        cout<<"\nMemory Released!!!";
        delete(str);
    }
};
int main(){
    String name1;
    String name2 = "ABC";
    String name3 = name2;
    cout << "\nAbhay Raj, 00976803122";
}
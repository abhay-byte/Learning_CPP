#include <iostream>
using namespace std;
class Numbers{
    int a,b; friend class Greatest;
public:
    Numbers(){
        cout<<"Enter Two Numbers:\n"; cin >> a >> b;
    }
};
class Greatest{
    int a,b;
public:
    void init(Numbers &n){
        a = n.a; b = n.b;
    } friend int greatest(Greatest);
};
int greatest(Greatest o){
    if(o.a>o.b) cout<<"Greatest is "<< o.a;
    if(o.a<o.b) cout<<"Greatest is "<< o.b;
    if(o.a==o.b) cout<<"Same Numbers";
}
int main(){
    Numbers N; Greatest G;
    G.init(N); greatest(G);
}
#include<bits/stdc++.h>
using namespace std;
template <class T> class vec{
    T *p;
    T size;
    public:
    vec(int sz, T val)
    {
        p=new T[sz];
        size=sz;
        for(int i=0;i<sz;i++)
        {
            p[i]=val;
        }
    }
    void print();
    
};
template<class T>void vec<T> :: print(){
        for(int i=0;i<size;i++)
            cout<<p[i]<<' ';
        cout<<endl;
    
}
int main()
{
    vec<char>a(5,'a');
    a.print();
    
}

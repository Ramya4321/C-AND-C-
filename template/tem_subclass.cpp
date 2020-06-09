//NOTE:template should be written for every function
//subclass template
#include<iostream>
using namespace std;
template <class t1>
class A
{
    protected:
        t1 a;
    public:
        void seta(t1);
        t1 geta();
};
template<class t2>
void A<t2>::seta(t2 a)
{
    this->a=a;
}
template <class t3>
t3 A<t3>::geta()
{
    return a;
}

template <class t4>
class B:public A<t4>
{
    public:
        t4 bgeta();
        void bseta(t4);
};
template<class t5>
void B<t5>::bseta(t5 a)
{
    this->a=a;
}
template <class t6>
t6 B<t6>::bgeta()
{
    return this->a;
}

int main()
{
B<float>b;
b.seta(1.24);
cout<<b.geta();
return 0;
}

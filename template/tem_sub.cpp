//subclass template
#include<iostream>
using namespace std;
template <class dtype>
class A
{
    protected:
        dtype a;
    public:
        void seta(dtype);
        dtype geta();
};
template<class dtype>
void A<dtype>::seta(dtype a)
{
    this->a=a;
}
template <class dtype>
dtype A<dtype>::geta()
{
    return a;
}

template <class dtype>
class B:public A<dtype>
{
    public:
        dtype bgeta();
        void bseta(dtype);
};
template<class dtype>
void B<dtype>::seta(dtype a)
{
    this->a=a;
}
template <class dtype>
dtype B<dtype>::geta()
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

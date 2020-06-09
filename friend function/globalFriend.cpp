#include <iostream> 
class A 
{ 
    int a; 
  	public: 
    A() { a = 0; } 
    void show();
  // global friend function 
    friend void showA(A&); //global friend function
}; 
void A::show()//we need class attribute
{
	cout<<"random"<<endl;
}
void showA(A& x) //no need cclass attribute
{ 
    // Since showA() is a friend, it can access 
    // private members of A 
    std::cout << "A::a=" << x.a; 
} 
  
int main() 
{ 
    A a; 
    showA(a); 
    return 0; 
}

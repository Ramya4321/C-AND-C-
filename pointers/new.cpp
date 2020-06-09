#include <iostream>
using namespace std;
int main () 
{
   int *ptr1  = NULL; 
   ptr1 = new int; 
   float *ptr2 = new float(223.324);
   int *ptr3 = new int[28];
   *ptr1 = 28; 
   cout << "Value of pointer variable 1 : " << *ptr1 << endl;
   cout << "Value of pointer variable 2 : " << *ptr2 << endl;
   if (!ptr3) 
      cout << "Allocation of memory failed\n"; 
   else 
   { 
      for (int i = 10; i < 15; i++) 
         ptr3[i] = i+1; 
      cout << "Value of store in block of memory: "; 
      for (int i = 10; i < 15; i++) 
         cout << ptr3[i] << " "; 
        cout<<ptr3[0]; //0
        cout<<*ptr3; //0
        cout<<*ptr3+5;  //5
        cout<<*(ptr3+11); //12
        
   } 
   return 0;
}


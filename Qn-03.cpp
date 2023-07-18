/*3. Write a C++ program to add two complex numbers using operator overloaded by a
friend function.*/

#include<iostream>
using namespace std ;

class Complex
{
    private : int r , i ;
    public : 
        void setData(int x, int y)
        {
            r = x ;
            i = y ; 
        }
        void showData()
        {
            cout<<"Real = "<<r<<" Img = "<<i<<endl ;
        }
        friend Complex operator + (Complex,Complex) ;

} ;

Complex operator + (Complex X , Complex Y)
{
    Complex temp ;
    temp.r = X.r + Y.r ;
    temp.i = X.i + Y.i ;
    return temp ; 
}

int main ()
{
    Complex c1,c2,c3 ;
    c1.setData(2,3) ;
    c1.showData() ;
    c2.setData(4,5) ;
    c2.showData() ;

    c3=c1+c2 ;  // c3=operator+(c1,c2) ;
    c3.showData() ;
}


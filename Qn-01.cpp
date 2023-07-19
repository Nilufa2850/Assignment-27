/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/

#include<iostream>
using namespace std ;
class Complex
{
    private : int a , b ;
    public :
        // Constractor
        void setData(int x, int y)
        {
            a=x ;
            b=y ;
        }
        void showData ()
        {
            cout<<"Real="<<a<<"  Img="<<b<<endl ;
        }
        Complex operator+(Complex X)
        {
            Complex temp ;
            temp.a = a+X.a ;
            temp.b = b+X.b ;
            return temp ;
        }
        Complex operator-(Complex Y)
        {
            Complex temp ;
            temp.a = a-Y.a ;
            temp.b = b-Y.b ;
            return temp ;
        }
        Complex operator*(Complex Z)
        {
            Complex temp ;
            temp.a = a*Z.a ;
            temp.b = b*Z.b ;
            return temp ;
        }
        
        bool operator==(Complex c)
        {
            if(a == c.a)
            {
                if(b == c.b)
                    return 1 ;
            }
            else 
                return 0 ;
        }
        
} ;

int main()
{
    Complex c1, c2 , c3 , c4 ,c5 ;
    c1.setData(8,9) ;
    c2.setData(5,6) ;
    c1.showData() ;
    c2.showData() ;

    c3=c1+c2 ;  // c3=c1.operator+(c2) ;    ADD TWO OBJECTS 
    c3.showData() ;

    c3=c1-c2 ;  // c3=c1.operator-(c2) ;    SUBSTRAC TWO OBJECTS
    c3.showData() ;

    c3=c1*c2 ;  // c3=c1.operator*(c2) ;    MULTIPLE TWO OBJECTS
    c3.showData() ;

    c4.setData(12,15) ;
    c5.setData(10,15) ;

    if (c4==c5)
        cout<<"Equal" ;
    else
        cout<<"not equal " ;

    
    return 0 ;
}

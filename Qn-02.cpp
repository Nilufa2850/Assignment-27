/*2. Write a C++ program to overload unary operators that is increment and decrement.*/

#include<iostream>
using namespace std ;
class Number
{
    private : int a , b;
    public : 
        void setData(int x , int y)
        {
            a = x ;
            b = y ;
        }
        void display()
        {
            cout<<"num1 = "<<a<<" num2 = "<<b<<endl ;
        }
        Number operator++()     // for Pre Increment
        {
            Number temp ;
            temp.a = ++a ;
            temp.b = ++b ;
            return temp ;
        }
        Number operator++(int)     // for Post Increment
        {
            Number temp ;
            temp.a = a++ ;
            temp.b = b++ ;
            return temp ;
        }
        Number operator--()     // for Pre Decrement
        {
            Number temp ;
            temp.a = --a ;
            temp.b = --b ;
            return temp ;
        }
        Number operator--(int)     // for Post Decrement
        {
            Number temp ;
            temp.a = a-- ;
            temp.b = b-- ;
            return temp ;
        }
        
} ;
int main ()
{
    Number n1 , n2 , n3 , n4 ;

    // Pre & Post Increment
    n1.setData(5,6) ;
    n1.display() ;
    n2=++n1 ;       //n2=n1.operator++() ;            
    n2.display() ;
    n2=n1++ ;       //n2=n1.operator++() ;    
    n2.display() ;

    // Pre Decrement
    n3.setData(10,12) ;
    n3.display() ;
    n4 = --n3 ;     //n2=n1.operator--() ; 
    n4.display() ;
    n4 = n3-- ;     //n2=n1.operator--() ; 
    n4.display() ;

    return 0 ;
}

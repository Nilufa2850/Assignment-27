/*7. Define a C++ class fraction
class fraction
{
    long numerator;
    long denominator;
    Public:
    fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.*/

#include<iostream>
using namespace std ;

class fraction
{
    long int num;
    long int denom;

    public:
        
        /*fraction (long int n, long int d)       // constructor
        {
            num = n ;
            denom = d ;
        }*/

        fraction operator++()           // Pre Increment
        {
            fraction temp ;
            temp.num = ++num ;
            temp.denom = ++denom ;
            return temp ;
        }
        fraction operator++(int)        // Post Increment
        {
            fraction temp ;
            temp.num = num++ ;
            temp.denom = denom++ ;
            return temp ;
        }
        friend istream& operator>>(istream &, fraction &) ;
        friend ostream& operator<<(ostream &, fraction) ;
} ;

istream& operator>>(istream &input , fraction &f)
{
    cout<<"Numerator : " ; 
    input>>f.num ;
    cout<<endl<<"Denominator : " ;
    input>>f.denom ;

    return input ;
}
ostream& operator<<(ostream &output , fraction f)
{

    cout<<f.num<<"/"<<f.denom<<endl  ;
    return output ;
}

int main ()
{
    fraction f1 , f2 ;

    cout<<"Enter 1st Fraction Value"<<endl ;
    cout<<"-------------------------"<<endl ;
    cin>>f1 ;
    cout<<endl ;

    //post increment 
    f1++ ;
    cout<<"f1++ : " ;
    cout<<f1 ;
    // pre increment
    ++f1 ;
    cout<<"++f1 : "<< f1 <<endl ;

    cout<<"Enter 2nd Fraction Value"<<endl ;
    cout<<"-------------------------"<<endl ;
    cin>>f2 ;
    cout<<endl ;

    cout<<"f2 = ++f1"<<endl ;
    cout<<"----------"<<endl ;
    f2 = ++f1 ;
    cout<<"f1 : "<<f1;
    cout<<"f2 : "<<f2<<endl ;

    cout<<endl ;
    cout<<"f2 = f1++"<<endl ;
    cout<<"----------"<<endl ;
    f2=f1++ ;
    cout<<"f1 : "<<f1;
    cout<<"f2 : "<<f2<<endl ;

    return 0 ;
}

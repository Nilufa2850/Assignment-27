/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
*/

#include<iostream>
using namespace std ;

class Time
{
    private : int h,m,s ;
    public :
        friend void operator>>(istream & , Time&) ;
        friend void operator<<(ostream &, Time&) ;

        bool operator==(Time t)             // == operator
        {
            if(h == t.h)
            {
                if(m == t.m)
                    if(s == t.s)
                        return 1 ;
            }
            else 
                return 0 ;
        }
        
};
void operator>>(istream &c1 , Time &t)       //intput operator
{
    cout<<"Enter Hours : " ;
    c1>>t.h;
    cout<<endl<<"Enter Minutes : ";
    c1>>t.m;
    cout<<endl <<"Enter Seconds : " ;
    c1>>t.s ;  
    // you can write c1 & cin both here
    cout<<endl ;
    
}
void operator<<(ostream &c, Time &t)     // output operator
{
    c<<"Hours   : "<<t.h<<endl ;
    c<<"Minutes : "<<t.m<<endl ;
    c<<"Seconds : "<<t.s<<endl ;
    // you can write c & cout both here
    cout<<"\n" ;
}

int main ()
{
    Time t1,t2 ;

    cout<<endl ;
    cout<<"Enter First Time "<<endl ;
    cout<<"-----------------"<<endl ;
    cin>>t1 ;
    cout<<endl<<"Firts Time " <<endl;
    cout<<t1 ;

    cout<<"Enter Second Time "<<endl ;
    cout<<"-----------------"<<endl ;
    cin>>t2 ;
    cout<<endl<<"Second Time " <<endl;
    cout<<t2 ;

    if (t1==t2)
        cout<<"Times are same " ;
    else
        cout<<"Times are not same " ;

    return 0 ;
}

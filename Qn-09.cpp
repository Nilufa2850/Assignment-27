/*9. 
Consider the following class mystring
Class mystring
{
    char str [100];
    Public:
    // methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/

#include<iostream>
using namespace std ;

class mystring
{
    char str[100] ;

    public:
        void setString()
        {
            cout<<"Enter a string : ";
            cin.getline(str,100); 
            cout<<endl ;
        }
        void showData()
        {
            cout<<str<<endl ;
        }

        void operator ! ()
        {
            int i ;
            for(i=0 ; str[i]!='\0' ; i++)
            {
                if (str[i] >=65 && str[i]<=96)
                    str[i] = str[i] + 32 ;

                else if ( str[i] >=97 && str[i]<=122)
                    str[i] = str[i] - 32 ;
            }
            cout<<"Reverse string is : "<<str <<endl;   
        }
};

int main()
{
    mystring s1 ;
    s1.setString() ;
    cout<<"My String is : ";
    s1.showData() ;

    !s1 ;
    return 0 ;
}

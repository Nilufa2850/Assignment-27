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
            cin.getline(str,100) ;
            cout<<endl ;
        }
        void showData()
        {
            cout<<str<<endl ;
        }

        mystring operator ! ()
        {
            mystring temp ;
            int i ;
            for(i=0 ; str[i] ; i++)
            {
                if ( str[i] >=97 && str[i]<=122)
                    temp.str[i] = str[i] - 32 ;

                else if (str[i] >=65 && str[i]<=96)
                    temp.str[i] = str[i] + 32 ;
            }   
            return temp ;
        }
};

int main()
{
    mystring s1,s2 ;
    s1.setString() ;
    cout<<"My String is : ";
    s1.showData() ;

    s2 = !s1 ;

    s2.showData() ;


}

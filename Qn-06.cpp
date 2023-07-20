/*6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.
*/

#include<iostream>
#include<cstring>
using namespace std ;

class CString
{
    private :
        char str[20] ;

    public:
        void setData()
        {
            cout<<"Enter a string : ";
            cin.getline(str,20) ;       // we can also use fgets(str,20,stdin)
        }
        void showData()
        {
            cout<<"String - "<<str<<endl ;
        }
        CString operator+ (CString X)
        {
            CString temp ;
            strcpy(temp.str , str) ;
            strcat(temp.str , X.str) ;
            return temp ;
        }
        bool operator==(CString c)
        {
            int i , j ;

            for(i=0 ; str[i] ; i++)
                for(j=0 ; c.str[j] ; j++)
                {
                    if (str[i] == c.str[j])
                        return 0 ;
                    else
                        return 1 ;
                } 
        }
        
};
int main ()
{
    CString s1 , s2, s3 ;
    s1.setData() ;
    s2.setData() ;

    s3=s1+s2 ;
    s3.showData() ;

    int result ;
    result = s1==s2 ;
    if (result==0)
        cout<<"String are same " ;
    else
        cout<<"String are different" ;

    return 0 ;
}

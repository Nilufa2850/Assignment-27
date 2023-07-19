/*8. Consider a class Matrix
Class Matrix
{
    int a[3][3];
    Public:
    //methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
*/

#include<iostream>
using namespace std ;

class Matrix
{
    int a[3][3] ;

    public :
        void setMatrix()
        {
            cout<<"Enter Matrix Element (3x3) :"<<endl ;
            int i ,j ;

            for(i=0 ; i<3 ; i++)
                for(j=0 ; j<3 ; j++)
                    cin>>a[i][j] ;
        }
        void showMatrix()
        {
            cout<<"Matrix is :"<<endl ;
            int i ,j ;

            for(i=0 ; i<3 ; i++)
            {
                for(j=0 ; j<3 ; j++)
                    cout<<a[i][j]<<"  " ;
                cout<<endl ;
            }
        }

        Matrix operator-()
        {
            Matrix temp ;
            int i , j ;

            for(i=0 ; i<3 ; i++)
                for(j=0 ; j<3 ; j++)
                    temp.a[i][j] = -a[i][j] ;

            return temp ;    
        }
} ;

int main ()
{
    Matrix m1 , m2 ;
    m1.setMatrix() ;
    m1.showMatrix() ;

    m2 = -m1 ;
    m2.showMatrix() ;

    return 0 ;
    
}

/*10.Class Matrix
{
    int a[3][3];
    Public:
    //methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
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

            cout<<endl ;
        }
        void showMatrix()
        {
            int i ,j ;

            for(i=0 ; i<3 ; i++)
            {
                for(j=0 ; j<3 ; j++)
                    cout<<a[i][j]<<"   " ;
                cout<<endl ;
            }

            cout<<endl ;
        }

        Matrix operator+(Matrix m)
        {
            Matrix temp ;
            int i , j ;

            for(i=0 ; i<3 ; i++)
                for(j=0 ; j<3 ; j++)
                    temp.a[i][j] = a[i][j] + m.a[i][j];

            return temp ;    
        }
} ;

int main ()
{
    Matrix m1 , m2 , m3;
    m1.setMatrix() ;
    m2.setMatrix();

    cout<<"First Matrix : "<<endl<<endl ;
    m1.showMatrix() ;
    cout<<"Second Matrix :"<<"\n" ;
    m2.showMatrix() ;

    m3=m1+m2 ;
    cout<<"Addition of Matrix :"<<endl<<endl ;
    m3.showMatrix() ;

    return 0 ;
    
}

/*5. Consider following class Numbers
class Numbers
{
    int x,y,z;
    public:
    // methods
};
Overload the operator unary minus (-) to negate the numbers.
*/

#include<iostream>
using namespace std ;

class Numbers
{
    int x,y,z ;
    public:
        void setData(int a,int b, int c)
        {
            x = a;
            y = b ;
            z = c ;
        }
        void showData()
        {
            cout<<"num1="<<x<<" num2="<<y<<" num3="<<z<<endl ;
        }
        Numbers operator - ()
        {
            Numbers temp ;
            temp.x = -x ;
            temp.y = -y ;
            temp.z = -z ;
            return temp ;
        }
};
int main ()
{
    Numbers n1,n2 ;
    n1.setData(3,4,5) ;
    n1.showData();
    n2=-n1 ;
    n2.showData() ;
    return 0 ;
}

#include <iostream>
#include <string>
#include <math.h>
#include<iomanip>

using namespace std;

int main()
{
    double input1 , input2 , number ;
    int array[10000] ;
    cin >> number ;
    for ( int i = 0 ; i < number && cin >> input1 >> input2 ; i ++)
    {
        cout << "Case " << i+1 <<": " << fixed << setprecision(2) << (((input1*9/5+32)+input2 ) - 32)*5/9 << endl;
    }

    return 0;
}

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string input1 , input2 ,  str;
    int in1[10] , in2[10] , carry[10] , output[10] , count , count2 = 0 ;
    for ( ; cin >> input1 >> input2 && (input1!= "0" || input2 != "0");)
    {
        count2 = 0  ;
            for ( int i = 0 ; i < 10 ; i ++)
            {
                in1[i] = 0 ;
                in2[i] = 0 ;
                carry[i] = 0 ;
                output[i] = 0 ;
            }
            if ( input1.length() > input2.length())
            {
                str = input1 ;
                input1 = input2 ;
                input2 = str ;
            }
            count = input2.length() ;
            for (int i = input1.length()-1 , j = 0 ; i >= 0 ; i -- , j ++)
                in1[j] = input1[i] - 48 ;
            for (int i = input2.length()-1 , j = 0 ; i >= 0 ; i -- , j ++)
                in2[j] = input2[i] - 48 ;
            for ( int i = 0 ; i < input2.length() ; i ++)
            {
                if ( in1[i] +  in2[i] + carry[i]  > 9 )
                {
                    carry[i+1] = 1 ;
                    count2 += 1 ;
                }
                output[i] = in1[i] + in2[i] ;
                if ( output[i]  > 9 )
                    output[i] = output[i]  - 10 ;
            }
            if ( count2 == 0 )
                cout << "No carry operation."<< endl;
            else if ( count2 ==1 )
                cout << "1 carry operation."<< endl;
            else if ( count2 >= 2 )
                cout << count2 << " carry operations."<< endl;

    }
    return 0;
}

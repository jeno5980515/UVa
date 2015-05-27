#include <iostream>

using namespace std;

int length ,number , number2 , input2[105][3] ,connect[105][105] , countat = 0 , maxi , level , now , count2 = 0 , d[105];
bool last ;

int main()
{
    void DFS(int , int ) ;
    for (; cin >> number && number != 0 ; count2 ++ )
    {
        maxi = 0 , countat = 0 , level = 0 ;
        last = true ;
        for ( int i = 0 ; i < 105 ; i ++)
            for (int j = 0 ; j < 105 ; j++)
                connect[i][j] = false ;
        for ( int i = 0 ; i < 105 ; i ++)
            d[i] = 0 ;
        length = 0 ;
        cin >> number2 ;
        d[number2] = 0 ;
        now = number2 ;
        int x , px ;
        for ( ; cin >> px >> x && ( px!= 0 && x != 0 ) ;  )
            connect[px][x] = true ;
        DFS(number2,0)  ;
        input2[count2][0] = number2 , input2[count2][1] = maxi , input2[count2][2] = now ;
    }
    for ( int i = 0 ; i < count2 ; i ++)
    {
        cout << "Case " << i+1 << ": The longest path from " <<  input2[i][0] <<  " has length " << input2[i][1] << ", finishing at " << input2[i][2] << "." ;
            cout << endl << endl ;
    }
    return 0;

}

void DFS(int x , int lvl)
{
    int a = -1, b = -1, mini = 1e9;
    int count1 = 0 ;
    for ( int y = 0 ; y <= number ; y ++ )
    {
        if ( connect[x][y] && d[y] < d[x]+ 1)
        {
            lvl += 1 ;
            DFS(y,lvl);
            lvl -- ;
            count1 ++ ;
        }
        if ( count1 == 0)
        {
            d[x] = lvl ;
            if ( lvl > maxi)
            {
                maxi = lvl ;
                now = x ;
            }
            else if ( lvl == maxi)
            {
                if ( now > x)
                    now = x ;
            }
        }
    }
}





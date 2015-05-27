#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number , array1[30][30] , array2[30];
    for ( ; cin >> number ; )
    {
        int n1 , n2 ;
        string mov , ove  ;
        for ( int i = 0 ; i < 30 ; i++ )
        {
            for ( int j = 0 ; j < 30 ; j ++ )
            {
                array1[i][j] = -1 ;
            }
        }
        for ( int i = 0 ; i < 30 ; i ++ )
            array1[i][0] = i ;
        for ( ; cin >> mov && mov != "quit" ; )
        {
            for ( int i = 0 ; i < 30 ; i++)
                array2[i] = -1 ;
            int n2site1 , n2site2 ;
            cin >> n1 >> ove >> n2 ;
            if ( n1 == n2 )
                continue ;
            else
            {
                bool getn1 = false , getn2 = false ;
                int n1site , n2site ;
                for ( int i = 0 ; i < number ; i++)
                {
                    for ( int j = 0 ; j < number ; j++ )
                    {
                        if ( array1[i][j] == n1 )
                        {
                            n1site = i ;
                            getn1 = true ;
                            break ;
                        }
                        if ( getn1 == true )
                            break ;
                    }
                }
                for ( int i = 0 ; i < number ; i++)
                {
                    for ( int j = 0 ; j < number ; j++ )
                    {
                        if ( array1[i][j] == n2 )
                        {
                            n2site = i ;
                            getn2 = true ;
                            break ;
                        }
                        if ( getn2 == true )
                            break ;
                    }
                }
                if ( n1site == n2site )
                    continue ;
            }
            if ( mov == "move" )
            {
                bool get = false ;
                int site1 , site2 ;
                for ( int i = 0 ; i < number ; i ++ )
                {
                    for ( int j = 0 ; j < number ; j++ )
                    {
                        if ( array1[i][j] == n1 )
                        {
                            get = true ;
                            site1 = i , site2 = j ;
                            break ;
                        }
                    }
                    if ( get == true )
                        break ;
                }
                 array1[site1][site2] = -1 ;
                for ( int i = site2 +1   ; i < number  ; i++ )
                {
                    if ( array1[site1][i] != -1 )
                    {
                        array1[array1[site1][i]][0] = array1[site1][i] ;
                        array1[site1][i] = -1 ;
                    }
                    else if ( array1[site1][i] == -1 )
                        break ;
                }
            }
            if ( mov == "pile" )
            {
                bool get = false ;
                int site1 , site2 ;
                for ( int i = 0 ; i < number ; i ++ )
                {
                    for ( int j = 0 ; j < number ; j++ )
                    {
                        if ( array1[i][j] == n1 )
                        {
                            get = true ;
                            site1 = i , site2 = j ;
                            break ;
                        }
                    }
                    if ( get == true )
                        break ;
                }
                for ( int i = site2 , j = 0 ; i < number ; i++ )
                {
                    if ( array1[site1][i] != -1 )
                    {
                        array2[j] = array1[site1][i] ;
                        j ++ ;
                        array1[site1][i] = -1 ;
                    }
                    else if ( array1[site1][i] == -1 )
                        break ;
                }
            }
            if ( ove == "onto" )
            {
                bool get = false ;
                int site1 , site2 ;
                for ( int i = 0 ; i < number ; i ++ )
                {
                    for ( int j = 0 ; j < number ; j++ )
                    {
                        if ( array1[i][j] == n2 )
                        {
                            get = true ;
                            site1 = i , site2 = j ;
                            break ;
                        }
                    }
                    if ( get == true )
                        break ;
                }
                for ( int i = site2 + 1 ; i < number ; i++ )
                {
                    if ( array1[site1][i] != -1 )
                    {
                        array1[array1[site1][i]][0] = array1[site1][i] ;
                        array1[site1][i] = -1 ;
                    }
                    else if ( array1[site1][i] == -1 )
                        break ;
                }
                n2site1 = site1 ;
                n2site2 = site2 ;
            }
            if ( ove == "over" )
            {
                bool get = false ;
                int site1 , site2 ;
                for ( int i = 0 ; i < number ; i ++ )
                {
                    for ( int j = 0 ; j < number ; j++ )
                    {
                        if ( array1[i][j] == n2 )
                        {
                            get = true ;
                            site1 = i , site2 = j ;
                            break ;
                        }
                    }
                    if ( get == true )
                        break ;
                }
                n2site1 = site1 ;
                n2site2 = site2 ;
                for ( int i = n2site2 ; i < number ; i++ )
                {
                    if ( array1[n2site1][i] == -1 )
                    {
                        n2site2 = i ;
                        break ;
                    }
                }
            }

            if ( mov == "move" && ove == "onto" )
            {
                array1[n2site1][n2site2+1] = n1 ;
            }
            else if ( mov == "move" && ove == "over" )
            {
                array1[n2site1][n2site2] = n1 ;
            }
            else if ( mov == "pile" && ove == "onto" )
            {
                for ( int i = 0 ; i < number ; i ++ )
                {
                    if ( array2[i] != -1 )
                    {
                        array1[n2site1][n2site2+1] = array2[i] ;
                        n2site2 ++ ;
                    }
                    else
                        break ;
                }
            }
            else if ( mov == "pile" && ove == "over" )
            {
                for ( int i = 0 ; i < number ; i ++ )
                {
                    if ( array2[i] != -1 )
                    {
                        array1[n2site1][n2site2] = array2[i] ;
                        n2site2 ++ ;
                    }
                    else
                        break ;
                }
            }
        }
        for ( int i = 0 ; i < number ; i++)
        {
            cout << i << ":" ;
            for ( int j = 0 ; j < number ; j++)
            {
                if ( array1[i][j] == -1 )
                    break ;
                else
                    cout << " " << array1[i][j] ;
            }
            cout << endl ;
        }
    }
    return 0;
}

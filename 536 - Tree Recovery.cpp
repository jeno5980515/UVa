#include <iostream>

using namespace std;

int fillsite ;
string a , b ;
char c[26] ;
int length ;

void findRoot(int l , int r){
    if ( l >= r  )
        return ;
    char root ;
    int rootsite ;
    bool isFind = false ;
    for ( int i = 0 ; i < length ; i ++ ){
        for ( int j = l ; j < r ; j ++ ){
            if ( a[i] == b[j] ){
                isFind = true ;
                rootsite = j ;
                root = a[i] ;
                break ;
            }
        }
        if ( isFind == true )
            break ;
    }
    c[fillsite] = root ;
    fillsite -- ;
    findRoot(rootsite+1,r);
    findRoot(l,rootsite) ;
}

int main()
{
    while ( cin >> a >> b ){
        length = a.length() ;
        fillsite = length - 1 ;
        findRoot(0,length) ;
        for ( int i = 0 ; i < length ; i ++ )
            cout << c[i] ;
        cout << endl ;
    }
    return 0;
}

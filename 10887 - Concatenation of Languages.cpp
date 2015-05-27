#include <iostream>
#include <set>
using namespace std;

int main()
{
    set <string> A , B , C ;
    int T ;
    cin >> T ;
    for ( int M , N , t = 0 ; t < T && cin >> M >> N ; t ++ ) {
        A.clear() , B.clear() , C.clear() ;
        string input ;
        cin.ignore() ;
        for ( int m = 0  ; m < M && getline(cin,input) ; m ++ ){
            A.insert(input) ;
        }
        for ( int n = 0  ; n < N && getline(cin,input) ; n ++ ){
            B.insert(input) ;
        }
        set<string>::iterator it , it2;
        for ( it = A.begin() ; it != A.end() ; it ++ ){
            for (  it2 = B.begin() ; it2 != B.end() ; it2 ++ ){
                C.insert(*it+*it2) ;
            }
        }
        cout << "Case " << t+1 << ": " << C.size() << endl ;
    }

    return 0;
}

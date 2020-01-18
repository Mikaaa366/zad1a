#include "tstring.h"

#include <string>

using namespace std;

ostream& MojeOperatory::operator<<( ostream& strumien, const TString& s ) {
    return strumien << ( s.ptr ? s.ptr : "pusty" );
}

istream& MojeOperatory::operator>>( istream& strumien, TString& s ) {
    string tmp;
    getline( strumien, tmp ); // wszystko najpierw ląduje do tmp
    delete [] s.ptr;
    s.len = tmp.length();
    if ( s.len > 0 ) {
        s.ptr = new char[ s.len + 1 ];
        strcpy( s.ptr, tmp.c_str() ); // metoda c_str() zwraca const char* z obiektu string 
    } else {
        s.ptr = nullptr;
    } 
    return strumien;
}

TString MojeOperatory::operator+( const TString& a, const TString& b ) {
    TString tmp ( a );
    cout << a << endl;
    tmp.insert( tmp.size(), b); // konwersja albo trzeba b.c_str() jako drugi argument
    return tmp;
}

TString& MojeOperatory::operator+=( TString& a, const TString& b ) {
    return a=a+b;
} 

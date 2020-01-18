#include <iostream>
#include <algorithm>
#include "tstring.h"

using namespace std;
using namespace MojeOperatory;

int main(int argc, const char * argv[]) {
    
    TString s1;
    TString s2("ttrter");
    TString s3 = "alfa beta";
    s3 = s2;
    TString s4 = std::move(s2);
    s3 = std::move(s1);
    s1 = "zebym nie byl pusty"; cout << s1[3] << endl;
    
    for ( auto& n : s1 ) { ++n; } endl ( cout ); // zmieniamy literki
    for ( const auto& n : s1 ) cout << n << " – "; cout << endl; // odczytujemy tylko
    
    return 0;
}

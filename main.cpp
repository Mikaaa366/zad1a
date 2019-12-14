#include <iostream>
#include <string>
#include <algorithm>
#include <thread>


using namespace std;
void addstring(unsigned n, string&s){
    while (n--)(
        s+="*"; cout <<"A";
    )
}
void removestring (string&s){
    while (!s,empty()){
        s.erase(s.end()-1); cout<<"B";

    }
}

int main() {
	string m;
    thread t1(addstring, 100, ref(m));
    thread t2(removestring, ref(m));
    t1.join();
    t2.join();
    }
}

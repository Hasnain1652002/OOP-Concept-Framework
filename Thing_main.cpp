#include"bits\stdc++.h"
#include"Thing.cpp"
using namespace std;

void Do2(int level);
void Do1(int level);
void Do(Thing Tcopy, int level){
    Tcopy.set(level);
}

int main(){

    Thing T(1);  cout << endl;
     Do2(2);  cout << endl;
     Do1(3);  cout << endl;
     Do2(5);  cout << endl;

    Thing TT = T;
    cout << "*(T.x) == " << T.get() << endl;
    cout << "*(TT.x) == " << TT.get() << endl;
    T.set(2);
    cout << "*(T.x) == " << T.get() << endl;
    cout << "*(TT.x) == " << TT.get() << endl;
    Do(T, 3);
    cout << "After calling Do(T, 3) *(T.x) == " << T.get(); cout << endl;

    return 0;
}

void Do2(int level){
    cout << "Enter Do2 with level = " << level << endl;

    Thing TT(level);
}

void Do1(int level){
    cout << "Enter Do1 with level = " << level << endl;

    Thing TTT(level);

    Do2(level + 1);
}

// void Do(Thing Tcopy, int level)[
    
//     Tcopy.set(level);
// ]
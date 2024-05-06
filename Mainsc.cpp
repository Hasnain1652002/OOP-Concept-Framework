#include"bits\stdc++.h"
#include"Scenerio1.cpp"
using namespace std;

int main(){
    cout << " Line 1" << endl;
    Office *pOff = new Office();

    cout << " Line 2" << endl;
    Boss *pBoss = new Boss(pOff);

    cout << " Line 3" << endl;
    delete pBoss;

    cout << " Line 4" << endl;
    Employee *pEmp = new Boss(pOff);

    cout << " Line 5" << endl;
    delete pEmp;

    return 0;
}
#include"bits\stdc++.h"
using namespace std;

class Desk{
    public:
        Desk()
        {
            cout << "Desk :: Desk() \n";
        }
        ~Desk()
        {
            cout << "Desk :: ~Desk() \n";
        }
};

class Office{
    public:
        Office()
        {
            cout << "Office :: Office() \n";
        }
        ~Office()
        {
            cout << "Office :: ~Office() \n";
        }
};

class PC{
    public:
        PC()
        {
            cout << "PC :: PC() \n";
        }
        ~PC()
        {
            cout << "PC :: ~PC() \n";
        }
        void turn_on()
        {
            cout << "PC :: Turn ON \n";
        }
        void turn_off()
        {
             cout << "PC :: Turn OFF \n";
        }
};

class Employee{
    private:
        Desk myDesk;
        Office *myOffice;
    
    public:
        Employee(Office *o)
        {
            this -> myOffice = o;
            cout << "Employee :: Employee() \n";
        }
        ~Employee()
        {
            cout << "Employee :: ~Employee() \n";
        }

};

class Boss : public Employee{
    private:
        PC myPC;
    
    public:
        Boss(Office *o) : Employee(o)
        {
            myPC.turn_on();
            cout << "Boss :: Boss() \n";
        }
        ~Boss()
        {
            myPC.turn_off();
            cout << "Boss :: ~Boss() \n";
        }

};
#include <iostream>
#include "Vmachine.h"

using namespace std;

    int main()
    {
        Vmachine v;
        v.menu();
        v.EnterMoney();
        while(v.getC()!=11){
        if(v.chooseItem()) v.pickItem();
        }
        return 0;
    }

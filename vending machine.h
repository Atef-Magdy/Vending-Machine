#ifndef VMACHINE_H
#define VMACHINE_H
#include <vector>
#include <string.h>

using namespace std;

    class Vmachine
    {
        private:
            double money;
            int choose;
            vector<pair<int , int>> goods = {{1,10} , {2,10} , {3,10} , {4,10} , {5,10} , {6,10} , {7,10} , {8,10} , {9,10} , {10,10}};
            double cost[10]={6,6,6,7,15,2,5,2.5,3,4};
        public:
            Vmachine();
            void setM(double money);
            void setC(int choose);
            double getM();
            int getC();
            void menu();
            void EnterMoney();
            bool chooseItem();
            void pickItem();
            virtual ~Vmachine();

    };

    #endif

# Vending-Machine
A model for a vending machine simulator that simulates the operation of a vending machine.

    // Program: Vending Machine
    // Purpose: A model for a vending machine simulator
    //          that simulates the operation of a vending machine.
    // Author:  Atef Magdy
    // Date:    3 Nov 2018
    // Version: 1.0

    /// Main CPP File

    


    /// Vending Machine.h

    
    /// Vending Machine .cpp

    #include "Vmachine.h"
    #include <iostream>
    #include <vector>

    using namespace std;

    Vmachine::Vmachine(){setM(0); setC(0);}

    void Vmachine::setM(double money){this->money = money;}
    void Vmachine::setC(int choose){this->choose = choose;}
    double Vmachine::getM(){return money;}
    int Vmachine::getC(){return choose;}

    void Vmachine::menu(){
        cout << "Ahlan Ya User Ya Hbiby" << endl;
        cout << "Welcome To Snacks Vending Machine ^_^" << endl << endl;
        cout << "Put a money and choose your good" << endl << endl;
        cout << "---------------------------------------------------" <<endl;
        cout << "  -(Drinks)-                      -(Snacks)-" << endl;
        cout << "1- Cola     (6$)             6- Biskreme   (2$)" <<endl;
        cout << "2- Sprite   (6$)             7- Doritos    (5$)" <<endl;
        cout << "3- Fanta    (6$)             8- Bake Rolz  (2.5$)" <<endl;
        cout << "4- Birell   (7$)             9- Sunchine   (3$)" <<endl;
        cout << "5- Red Bull (15$)           10- Molto      (4$)" <<endl;
        cout << "                   11-Exit" <<endl;
        cout << "---------------------------------------------------" <<endl;
    }
    void Vmachine::EnterMoney(){
        double m;
        cout << "Your Money : ";
        cin >> m;
        setM(m);
    }
    bool Vmachine::chooseItem(){
        int c;
        cout << "Enter Your Choice : ";
        cin >> c;
        setC(c);
        while(getC() > 11 || getC() <1){
            cout << "Please Enter a Correct Choice : ";
            cin >> c;
            setC(c);
        }
        if(getC() == 11){
            cout << "\nYour Reminder Money : " << getM() << "$ Pick it." << endl;
            cout << "We are so glad to serve you ^_^" << endl;
                return false;
        }
        else if(getM()<cost[getC()-1]){
            double moreMoney;
            cout << "\nYour money is Less than the good price." << endl;
            cout << "Add money or choose another good or choose Exit." <<endl << endl;
            cout << "Add More Money : ";
            cin >> moreMoney;
            money += moreMoney;
            cout << "\nYour Money : " << getM() << "$" <<endl;
            chooseItem();
        }
        else if(goods[getC()-1].second < 1){
            cout << "\nThis good is Expired." <<endl;
            cout << "Choose another good or choose Exit." <<endl << endl;
            chooseItem();
        }
        else return true;
    }
    void Vmachine::pickItem(){
        (goods[getC()-1].second) -=1;
        money -= cost[choose-1];
        cout << "\nYour Process is succeeded. Please Pick Your Good >>>" << endl;
        cout << "Your Money : " << getM() <<endl <<endl;
    }
    Vmachine::~Vmachine(){}

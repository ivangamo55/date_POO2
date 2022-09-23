#include <iostream>
#include<string>
#include "clases_date.h"

using namespace std;

int dia, mes, anno;
bool bis = false;

Date::Date(string _day, string _month, string _year) {
    day = _day;
    month = _month;
    year = _year;
}

void Date::intro() {
    cout << "Introdusca la fecha deseada" << endl;
    cout << "Dia" << endl;
    cin >> day;
    dia = stoi(day);
    cout << "Mes" << endl;
    cin >> month;
    mes = stoi(month);
    cout << "Anno" << endl;
    cin >> year;
    anno = stoi(year);
}

void Date::validation() {
    if(anno%4==0 && anno%100!=100 || anno%400==0)
        bis = true;

    if(dia>0 && dia<32 && mes>0 && mes<13 && anno>0){
        if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)
        {
            cout << dia<<"/"<<mes<<"/"<<anno;
            cout << "\nFecha valida";
        }
        else
        {
            if(mes==2 && dia<30 && bis)
                cout << "\nFecha valida";
            else if(mes==2 && dia<29 && !bis)
                cout << "\nFecha valida";
            else if(mes!=2 && dia<31)
                cout << "\nFecha valida";
            else
                cout << "\nFecha no valida";
        }
    }
    else {
        cout << "\nFecha no valida";
    }
}


int main() {
    Date vd("","","");
    vd.intro();
    vd.validation();
    return 0;
}


/* Llamado de objeto con puntero
Date *vd[1];
vd[0] = new Date("","","");
vd[0] -> intro();
*/
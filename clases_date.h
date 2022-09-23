//
// Created by Ivang on 22/09/2022.
//
#include<iostream>
#include<string>

using namespace std;

class Date {
private:
    string day;
    string month;
    string year;
public:
    Date(string, string, string);
    void intro();
    void validation();
};
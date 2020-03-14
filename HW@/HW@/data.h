#define _CRT_SECURE_NO_WARNINGS
#ifndef PROJECT_INCLUDE_DATA_H
#define PROJECT_INCLUDE_DATA_H

struct masterRecord {
    int Number;
    char Name[20];
    char Surname[20];
    char addres[30];
    char TelNumber[15];
    double indebtedness;
    double credit_limit;
    double cash_payments;
};
typedef struct masterRecord Data;

#endif //PROJECT_INCLUDE_DATA_H

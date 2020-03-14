#define _CRT_SECURE_NO_WARNINGS
#ifndef PROJECT_INCLUDE_INPUT_H
#define PROJECT_INCLUDE_INPUT_H
#include "data.h"

void masterWrite(FILE* ofPTR, Data Client);
void transactionWrite(FILE* ofPtr, Data transfer);
void blackRecord(FILE* ofPTR, FILE* ofPTR_2, FILE* blackrecord, Data client_data, Data transfer);
#endif //PROJECT_INCLUDE_INPUT_H

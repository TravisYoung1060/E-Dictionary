/*
 * Created by FallenGemini on 2022/7/13.
 * 管理员功能声明
*/

#ifndef HAOJIXING_ELECTRONIC_DICTIONARY_ADMIN_H
#define HAOJIXING_ELECTRONIC_DICTIONARY_ADMIN_H


#include <stdio.h>

void Add(FILE *rPtr, char* word, char* attribute, char* CNinterp);
void Delete();
void Modify();

#endif //HAOJIXING_ELECTRONIC_DICTIONARY_ADMIN_H
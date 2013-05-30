#ifndef _FILE_H_
#define _FILE_H_

#include "types.h"

bool readFile (char* filename, char *str);
CodeTable* readZip (char* filename, int *size, char *bit, int *bit_len);

bool writeFile(char* filename, char* str);
bool writeZip(char* filename, CodeTable *ct, int size, char* bit, int bit_len);


#endif

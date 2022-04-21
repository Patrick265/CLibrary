#ifndef CL_STRING_H_
#define CL_STRING_H_

#include <stdbool.h>
#include <stddef.h>

#include "Definitions/Types.h"
typedef struct String
{
	char* str;
	size_t len;
} String;

bool StringEqualTo(String* s1, String* s2);
bool StringStartsWith(String* str, char cToFind);
bool StringEndsWith(String* str, char cToFind);
bool StringContains(String* str, char cToFind);
u32 StringGetCharIndex(String* s, char cToFind);
void StringStripWhiteSpace(String* str);
void StringToUppercase(String* str);
void StringToLowercase(String* str);


#endif

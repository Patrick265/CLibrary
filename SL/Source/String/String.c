#include "String/String.h"

#include <string.h>

bool StringEqualTo(String* s1, String* s2)
{
	return s1->len == s2->len && (strcmp(s1->str, s2->str) == 0);
}

bool StringStartsWith(String* str, char cToFind)
{
	return str->str[0] == cToFind;
}

bool StringEndsWith(String* str, char cToFind)
{
	return str->str[str->len - 1] == cToFind;
}

bool StringContains(String* str, char cToFind)
{
	char* s = str->str;
	bool found = false;
	for(u32 i = 0; i < str->len; i++)
	{
		found = (s[i] == cToFind);
	}
	return found;
}

u32 StringGetCharIndex(String* s, char cToFind)
{
	u32 index = 0;
	for(; ((index < s->len) && (s->str[index] != cToFind)); index++);
	return index;
}

void StringStripWhiteSpace(String* str)
{
	(void)str;
}

void StringToUppercase(String* str)
{
	(void)str;
}

void StringToLowercase(String* str)
{
	(void)str;
}

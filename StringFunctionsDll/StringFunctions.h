#ifndef CHARCOUNTER_H
#define CHARCOUNTER_H

#ifdef CHARCOUNTER_EXPORTS
#define CHARCOUNTER_API __declspec(dllexport)
#else
#define CHARCOUNTER_API __declspec(dllimport)
#endif

extern "C" CHARCOUNTER_API int countChar(const char* text, char target);
extern "C" CHARCOUNTER_API char mostFrequentChar(const char* text);

#endif // CHARCOUNTER_H

#ifndef STRINGS_H
#define STRINGS_H

typedef struct SString {
    char content[];
    int length;
} string;

string createString(char str[]);
void destroyString(string str);

void int_to_ascii(int n, char str[]);
void hex_to_ascii(int n, char str[]);
void reverse(char s[]);
int strlen(char s[]);
void backspace(char s[]);
void append(char s[], char n);
void strcpy(char s1[], char s2[]);
int strcmp(char s1[], char s2[]);

#endif
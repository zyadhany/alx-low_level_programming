#include "main.h"
#include <stdio.h>

int _putchar(char c) {
    return putchar(c);
}

int _islower(int c) {
    return (c >= 'a' && c <= 'z');
}

int _isalpha(int c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int _abs(int n) {
    return (n < 0 ? -n : n);
}

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c) {
    return (c >= '0' && c <= '9');
}

int _strlen(char *s) {
    int len = 0;
    while (*s++) {
        len++;
    }
    return len;
}

void _puts(char *s) {
    while (*s) {
        _putchar(*s++);
    }
    _putchar('\n');
}

char *_strcpy(char *dest, char *src) {
    char *p = dest;
    while (*src) {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

int _atoi(char *s) {
    int n = 0;
    int sign = 1;
    while (*s == ' ' || *s == '\t' || *s == '\n') {
        s++;
    }
    if (*s == '+' || *s == '-') {
        sign = (*s++ == '+' ? 1 : -1);
    }
    while (*s >= '0' && *s <= '9') {
        n = n * 10 + (*s++ - '0');
    }
    return sign * n;
}

char *_strcat(char *dest, char *src) {
    char *p = dest + _strlen(dest);
    while (*src) {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

char *_strncat(char *dest, char *src, int n) {
    char *p = dest + _strlen(dest);
    while (*src && n--) {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

char *_strncpy(char *dest, char *src, int n) {
    char *p = dest;
    while (*src && n--) {
        *p++ = *src++;
    }
    while (n--) {
        *p++ = '\0';
    }
    return dest;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

char *_memset(char *s, char b, unsigned int n) {
    char *p = s;
    while (n--) {
        *p++ = b;
    }
    return s;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *p = dest;
    while (n--) {
        *p++ = *src++;
    }
    return dest;
}

char *_strchr(char *s, char c) {
    while (*s && *s != c) {
        s++;
    }
    return (*s == c ?s : NULL);
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int n = 0;
    while (*s && _strchr(accept, *s++)) {
        n++;
    }
    return n;
}

char *_strpbrk(char *s, char *accept) {
    while (*s) {
        if (_strchr(accept, *s++)) {
            return --s;
        }
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    while (*haystack) {
        char *p = haystack;
        char *q = needle;
        while (*q && *p == *q) {
            p++;
            q++;
        }
        if (*q == '\0') {
            return haystack;
        }
        haystack++;
    }
    return NULL;
}

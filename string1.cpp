#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <cctype>
#include "string1.h"
using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char* s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String& st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String()
{
    --num_strings;
    delete[] str;
}

void String::stringlow()
{
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
}

void String::stringup()
{
    for (int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
}

int String::has(const char& ch)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch)
            count++;
    }
    return count;
}

String& String::operator=(const String& st)
{
    if (this == &st)
        return *this;
    delete[] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String& String::operator=(const char* s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

//String String::operator+(const String& st)
//{
//    int newLen = len + st.len;
//    char* temp = new char[newLen + 1];
//    std::strcpy(temp, str);
//    std::strcat(temp, st.str);
//    String newSt(temp);
//    delete[] temp;
//    return newSt;
//}
//
//String String::operator+(const char* s)
//{
//
//    int newLen = len + std::strlen(s);
//    char* temp = new char[newLen + 1];
//    std::strcpy(temp, str);
//    std::strcat(temp, s);
//    String newSt(temp);
//    delete[] temp;
//    return newSt;
//}

char& String::operator[](int i)
{
    return str[i];
}

const char& String::operator[](int i) const
{
    return str[i];
}

//String operator+(const char* s, const String& st)
//{
//    String temp(s);
//    return temp + st;
//}

String operator+(const String& st1, const String& st2)
{
    int len = st1.len + st2.len;
    char* temp = new char[len + 1];
    std::strcpy(temp, st1.str);
    std::strcat(temp, st2.str);
    String newSt(temp);
    delete[] temp;
    return newSt;
}

bool operator<(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
    return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

std::ostream& operator<<(std::ostream& os, const String& st)
{
    os << st.str;
    return os;
}

std::istream& operator>>(std::istream& is, String& st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}
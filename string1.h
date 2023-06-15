#pragma once
#include <iostream>
#ifndef STRING1_H_
#define STRING1_H_
class String
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String(const char* s);
	String();
	String(const String& st);
	~String();
	int length() const { return len; }

	void stringlow();
	void stringup();
	int has(const char& ch);

	String& operator=(const String& st);
	String& operator=(const char* s);
	//String operator+(const String& st);
	//String operator+(const char* s);
	char& operator[](int i);
	const char& operator[](int i) const;

	//friend String operator+(const char* s, const String& st);
	friend String operator+(const String& st1, const String& st2);
	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);	
	friend std::ostream& operator<<(std::ostream& os, const String& st);
	friend std::istream& operator>>(std::istream& is, String& st);

	static int HowMany();
};

#endif
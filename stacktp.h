#pragma once
#ifndef STACKTP_H_
#define STACKTP_H_

template <class Item>
class Stack
{
private:
	enum {SIZE = 10};
	int stacksize;
	Item* items;
	int top;
public:
	explicit Stack(int ss = SIZE);
	Stack(const Stack& st);
	~Stack() { delete[] items; }
	bool isempty() { return top == 0 };
	bool isfull() { return top == stacksize; }
	bool push(const Item& item);
	bool pop(Item& item);
	Stack& operator=(const Stack& st);
};

template <class Item>
Stack<Item>::Stack(int ss) : stacksize(ss), top(0)
{
	items = new Item[stacksize];
}

template <class Item>
Stack<Item>::Stack(const Stack& st)
{
	stacksize = st.stacksize;
	top = st.top;
	items = new Item[stacksize];
	for (int i = 0; i < top; i++)
		items[i] = st.items[i];
}

template <class Item>
bool Stack<Item>::push(const Item& item)
{
	if (top < stacksize)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}

template <class Item>
bool Stack<Item>::pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}

template <class Item>
Stack<Item>& Stack<Item>::operator=(const Stack<Item>& st)
{
	if (this == &st)
		return *this;
	delete[] items;
	stacksize = st.stacksize;
	top = st.top;
	items = new Item[stacksize];
	for (int i = 0; i < top; i++)
		items[i] = st.items[i];
	return *this;
}

#endif
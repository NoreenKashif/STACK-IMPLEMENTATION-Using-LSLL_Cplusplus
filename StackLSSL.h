#ifndef STACK_H
#define STACK_H
#include"Node.cpp"
template<typename T>
class Stack
{
	int NOE;
	Node<T>* head;
public:
	Stack();
	void push(T);
	T pop();
	T stackTop();
	int getNumberOfElements();
	void print();
};
#endif

#include"LinkedList.h"
#include "Stack.h"
template<class T>
class LinkedStack :public Stack<T> {
private:
	LinkNode<T>* top;
public:
	LinkedStack() :top(NULL){}//这是组合类的构造函数，这是在给Stack的top传参
	void Push(const T& x);
	void getTop(T& x);
};
template<class T>
void LinkedStack<T>::Push(const T& x) {
	top = new LinkNode<T>(x, top);
	assert(top != NULL);
}
template<class T>
void LinkedStack<T>::getTop(T& x) {
	x = top->data;
}


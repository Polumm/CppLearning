#include<iostream>
#include<stdlib.h>
#include"LinearList.h"
const int defaultSize = 100;
template<class T>
class SeqList : public LinearList<T> {
protected:
	T* data;
	int maxSize;
	int last;
	void reSize(int newSize);
public:
	SeqList(int sz = defaultSize);
	SeqList(SeqList<T>& L);
	SeqList(delete[] data;)
};
template<class T>
SeqList<T>::SeqList(SeqList<T>& L) {
	if (sz>0){
		maxSize = sz; last = -1;
		data = new T[maxSize];
	}
}
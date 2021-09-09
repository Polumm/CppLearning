#include<iostream>
#include<stdlib.h>
#include"LinearList.h"
const int defaultSize = 100;
template<class T>
class SeqList : public LinearList<T> {
protected:
	T* data;//数组指针
	int maxSize;//最大容量
	int last;//当前最后一个元素下标
	void reSize(int newSize);
public:
	SeqList(int sz = defaultSize);
	SeqList(SeqList<T>& L);
	~SeqList(){delete[] data;}
	void getValue(T& t, int len);
};
template<class T>
SeqList<T>::SeqList(int sz) {//默认构造
	if (sz < 0) {
		cout << "no_room!";
		exit(1);
	}
	maxSize = sz; T = new T[maxSize]; //申请空间
	last = -1;//标识为空表
}
template<class T>
SeqList<T>::SeqList(SeqList<T>& L) {//复制构造函数
	maxSize = L.maxSize; last = L.last;//复制属性
	T = new T[L.maxSize];//申请空间
	if(!T){
		cout << "no_room!"; 
		exit(1);
	}
	for (int i = 0; i < last; i++) T[i] = L[i];//复制数据
}
template<class T>
void SeqList<T>::getValue(T&t,int len) {
	for (int i = 0; i < len; i++){
		T[i] = t[i];
	}
}
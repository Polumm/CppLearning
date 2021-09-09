#include<iostream>
#include<stdlib.h>
#include"LinearList.h"
const int defaultSize = 100;
template<class T>
class SeqList : public LinearList<T> {
protected:
	T* data;//����ָ��
	int maxSize;//�������
	int last;//��ǰ���һ��Ԫ���±�
	void reSize(int newSize);
public:
	SeqList(int sz = defaultSize);
	SeqList(SeqList<T>& L);
	~SeqList(){delete[] data;}
	void getValue(T& t, int len);
};
template<class T>
SeqList<T>::SeqList(int sz) {//Ĭ�Ϲ���
	if (sz < 0) {
		cout << "no_room!";
		exit(1);
	}
	maxSize = sz; T = new T[maxSize]; //����ռ�
	last = -1;//��ʶΪ�ձ�
}
template<class T>
SeqList<T>::SeqList(SeqList<T>& L) {//���ƹ��캯��
	maxSize = L.maxSize; last = L.last;//��������
	T = new T[L.maxSize];//����ռ�
	if(!T){
		cout << "no_room!"; 
		exit(1);
	}
	for (int i = 0; i < last; i++) T[i] = L[i];//��������
}
template<class T>
void SeqList<T>::getValue(T&t,int len) {
	for (int i = 0; i < len; i++){
		T[i] = t[i];
	}
}
#include<assert.h>
#include "abs.h"
#include "OutPutArray.h"
#include "store.h"
#include "SeqList.h"
//#include "LinkedList.h" �����������ã�С���ظ�������
#include "LinkedStack.h"

int main() {
	cout << "//==========================" << endl;
	int a = -9;
	double b = -9.2;
	cout << abs(a) << endl << abs(b) << endl;
	cout << "//==========================" << endl;
	const int sz1 = 3, sz2 = 4, sz3 = 5;
	int a1[sz1] = { 1,3,5 };
	float a2[sz2] = { 1.1, 2.2, 3.3, 4.4 };
	char a3[sz3] = "asdf";
	OutPutArray(a1, sz1);
	OutPutArray(a2, sz2);
	OutPutArray(a3, sz3);
	cout << "//==========================" << endl;
	/*
	cout << "//==========================" << endl;
	store<int> s1, s2;//��������store<int>�Ͷ���itemΪint��
	s1.putElem(3);
	s2.putElem(-7);
	cout << s1.getElem() << " " << s2.getElem() << endl;
	Student g = { 1000, 23 };//����ṹ�������Ȼ����Ҫ���캯������
	store<Student> s3;//����store<Student>���������itemΪstudent��
	s3.putElem(g);
	cout << "The Student id is " << s3.getElem().id << endl;
	cout << "The Student gpa is " << s3.getElem().gpa << endl;
	cout << "//==========================" << endl;
	SeqList<float> sq1;
	float f[] = { 1.2,2.3,5.4,1,10,9 };
	sq1.getValue(f, 6);
	*/
	LinkedStack<int> stack1;
	stack1.Push(1);
	stack1.Push(2);
	stack1.Push(3);
	int x;
	stack1.getTop(x);
	cout << x;
}
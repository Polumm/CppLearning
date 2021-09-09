#include<stdlib.h>
//δ���������ϰ�����غ�������[] + = const��������
template <class T>
class Array
{
public:
	Array(int sz);
	~Array();
	Array(const Array<T>& a);//���ƹ��캯����Ҫ����
private:
	int size;//�����С
	T* list;//�����׵�ַ
};
//���캯��
template <class T>
Array<T>::Array(int sz)
{
	//assert(sz >= 0);//Evaluates an expression and, when the result is false, prints a diagnostic message and aborts the program.
	size = sz;
	list = new T[size];//��̬��������
}
//��������
template <class T>
Array<T>::~Array()
{
	delete [] list;
}
//���ƹ��캯��
//���ƹ��캯������Ҳ���ǹ��캯�������أ������˸���Ķ�������Ҫ�Լ�������ô���ٿռ䣬��ô��������
template <class T>
Array<T>::Array(const Array<T>& a) {//��Array<T>����и��ƣ�ע�����ñ����Լ�const����
	size = a.size;
	list = new T[size];
	for (int i = 0; i < size; i++){
		list[i] = a.list[i];
	}
}
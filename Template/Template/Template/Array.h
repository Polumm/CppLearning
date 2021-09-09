#include<stdlib.h>
//未完待续，复习完重载后再来对[] + = const进行重载
template <class T>
class Array
{
public:
	Array(int sz);
	~Array();
	Array(const Array<T>& a);//复制构造函数需要声明
private:
	int size;//数组大小
	T* list;//数组首地址
};
//构造函数
template <class T>
Array<T>::Array(int sz)
{
	//assert(sz >= 0);//Evaluates an expression and, when the result is false, prints a diagnostic message and aborts the program.
	size = sz;
	list = new T[size];//动态创建数组
}
//析构函数
template <class T>
Array<T>::~Array()
{
	delete [] list;
}
//复制构造函数
//复制构造函数本质也就是构造函数的重载，传入了该类的对象，你需要自己想想怎么开辟空间，怎么复制数据
template <class T>
Array<T>::Array(const Array<T>& a) {//对Array<T>类进行复制，注意引用变量以及const保护
	size = a.size;
	list = new T[size];
	for (int i = 0; i < size; i++){
		list[i] = a.list[i];
	}
}
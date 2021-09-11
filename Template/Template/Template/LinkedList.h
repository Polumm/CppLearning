template <class T>
struct LinkNode {//链结点类的定义
	T data;//数据域
	LinkNode<T>* link;//链指针域
	LinkNode(LinkNode<T>* ptr = nullptr) { link = ptr; }
	//仅初始化指针的构造函数
	LinkNode(const T& item, LinkNode<T>* ptr = nullptr) { link = ptr; data = item; }
	//初始化指针和数据域，注意数据域是常引用传参
};
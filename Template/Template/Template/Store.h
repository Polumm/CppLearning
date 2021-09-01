struct Student{//学生结构体，用来验证T的通用性
	int id;
	float gpa;
};
template<class T>
class store {//模板类store存储任意类型
private:
	T item;
	bool haveitem;//是否为空的标志符
public:
	store();
	T& getElem();//读取元素
	void putElem(const T & x);//存入元素
};

template<class T>//类外定义一定不要忘了参数声明
store<T>::store() { haveitem = false; }

template<class T>
T& store<T>::getElem() {//返回为store类型的引用
	if (!haveitem){//判空
		cout << "NO ITEM!" << endl;
		exit(1);//程序直接结束
	}
	return item;
}
template<class T>
void store<T>::putElem(const T& z) {
	haveitem = 1;
	item = z;
}






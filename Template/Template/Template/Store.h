struct Student{//ѧ���ṹ�壬������֤T��ͨ����
	int id;
	float gpa;
};
template<class T>
class store {//ģ����store�洢��������
private:
	T item;
	bool haveitem;//�Ƿ�Ϊ�յı�־��
public:
	store();
	T& getElem();//��ȡԪ��
	void putElem(const T & x);//����Ԫ��
};

template<class T>//���ⶨ��һ����Ҫ���˲�������
store<T>::store() { haveitem = false; }

template<class T>
T& store<T>::getElem() {//����Ϊstore���͵�����
	if (!haveitem){//�п�
		cout << "NO ITEM!" << endl;
		exit(1);//����ֱ�ӽ���
	}
	return item;
}
template<class T>
void store<T>::putElem(const T& z) {
	haveitem = 1;
	item = z;
}






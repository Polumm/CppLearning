template <class T>
struct LinkNode {//�������Ķ���
	T data;//������
	LinkNode<T>* link;//��ָ����
	LinkNode(LinkNode<T>* ptr = nullptr) { link = ptr; }
	//����ʼ��ָ��Ĺ��캯��
	LinkNode(const T& item, LinkNode<T>* ptr = nullptr) { link = ptr; data = item; }
	//��ʼ��ָ���������ע���������ǳ����ô���
};
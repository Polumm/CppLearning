#include<iostream>
using namespace std;
template <class T>//<>里是class标识符，是类型占位形参
T abs(T x){//返回值、形参、局部变量都可以被占位
	return x < 0 ? -x : x;//bool ? A : B;
	}



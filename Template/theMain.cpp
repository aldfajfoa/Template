#include<iostream>
using std::cout;
using std::cin;
using std::endl;

//�e���v���[�g  �^���p�����[�^�ɂƂ��Ă��낢��Ȍ^�ɑΉ��ł���@�\
//              ���Ԑ��̈��(�����֐���A�N���X���A�����Ȍ^�ɑΉ���������)

int myMax(int a, int b);//��̐����̂����傫������Ԃ�
float myMax(float a, float b);//��̒P���x����(float)�̂����傫������Ԃ�
double myMax(double a, double b);//��̔{���x����(double)�̂����傫������Ԃ�

template <typename T>
T tMax(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}

//�N���X�e���v���[�g
template <typename T>
class Vec2
{
public:
	T x;
	T y;
	T GetX() { return(x); }
	void SetX(T _x) { x = _x; }
	void PrintVec() { cout << "(x, y) = (" << x << "," << y << ")" << endl; }

	T Length(T _x, T _y) { return ((T)sqrt(_x * _x + _y * _y)); }
	bool operator >(const Vec2<T>& other) {
		return(this->Length() > other.Length());
	}
};
//�x�N�g���̒�����T�^�ŕԂ������o�֐������
//�x�N�g���̒����Ŕ�r����>���Z�q���I�[�o�[���[�h
//�x�N�g���̒������ׂĒ������\�����Ė{���ɂ����Ă��邩�m�F


int main() {
	/*int var1 = 10;
	int var2 = 20;
	int res = tMax<int>(var1, var2);
	cout << "myMax " << var1 << " "<<var2<<" : " << res << endl;

	float var3 =10.6;
	float var4 = 2.1;
	float res2 = tMax<float>(var3, var4);
	cout << "myMax " << var3 << " " << var4 << " : " << res2 << endl;

	double var5 = 0.000062;
	double var6 = 1e-15;//10�̃}�C�i�X15��
	double res3 = tMax<double>(var5, var6);
	cout << "myMax " << var5 << " " << var6 << " : " << res3 << endl;*/
	double Len;
	double Len2;
	Vec2<double> v;
	Vec2<double> v2;
	v.x = 2;
	v.y = 3;
	v2.x = 4;
	v2.y = 6;
	Len = v.Length(v.x, v.y);
	Len2 = v2.Length(v2.x, v2.y);
	cout << tMax(Len, Len2) << endl;
	return 0;
}

int myMax(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

float myMax(float a, float b)
{
	if (a > b)
		return a;
	else
		return b;
}

double myMax(double a, double b)
{
	if (a > b)
		return a;
	else
		return b;
}

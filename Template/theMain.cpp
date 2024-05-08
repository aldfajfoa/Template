#include<iostream>
using std::cout;
using std::cin;
using std::endl;

//テンプレート  型をパラメータにとっていろいろな型に対応できる機能
//              多態性の一つ(同じ関数や、クラスを、いろんな型に対応させられる)

int myMax(int a, int b);//二つの整数のうち大きい方を返す
float myMax(float a, float b);//二つの単精度実数(float)のうち大きい方を返す
double myMax(double a, double b);//二つの倍精度実数(double)のうち大きい方を返す

template <typename T>
T tMax(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}

//クラステンプレート
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
//ベクトルの長さをT型で返すメンバ関数を作る
//ベクトルの長さで比較する>演算子をオーバーロード
//ベクトルの長さを比べて長い方表示して本当にあっているか確認


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
	double var6 = 1e-15;//10のマイナス15乗
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

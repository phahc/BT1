#include<iostream>
using namespace std;

// Tính giá trị tuyệt đối cho 1 số bất kỳ
double myabs(double x)
{
	return (x >= 0) ? x : -x;
}

double BT_2b_run(double a)
{
	// Số thuc duong cần tính căn bậc 3
	double xo = 0;
	// e: là độ sai số 0.00000001
	double x3 = 1, e = 1e-8;

	// Thực hiện lặp hữu hạn để tìm kết quả có độ sai số bé nhất
	// Khi x3 - xo vẫn còn > 0.0000001 thì tiếp tục lặp
	do
	{
		// Gán giá trị mới cho xo
		xo = x3;
		// Thực hiện tính giá trị cho căn bậc 3
		x3 = (a / xo / xo + 2.0 * xo) / 3.0;
	} while (myabs(x3 - xo) > e);

	return x3;
}
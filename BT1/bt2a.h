#include<iostream>
using namespace std;

double Func(double x, double n)
{
	return x * x * x - n;
}

double Solve(double n, double epsilon)
{
	if (n < 0)
	{
		return -Solve(-n, epsilon);
	}
	
	// Nếu n là 0 hoặc 1
	if (n >= 0 && n <= 1)
	{
		return n;
	}

	// x left
	double xL = 0;
	// x right
	double xR = n < 1 ? 1 : n;
	// Thỏa mãn độ sai số 0.001
	while (xR - xL > epsilon)
	{
		// Thực hiện chia đôi
		double xM = (xL + xR) / 2;
		if (Func(xM, n) < 0)
		{
			// Gán lại giá trị cho x left
			xL = xM;
		}
		else
		{
			// Gán lại giá trị cho x right
			xR = xM;
		}
	}

	// kết quả
	return (xL + xR) / 2;
}
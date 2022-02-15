#include "bt1.h"
#include "bt2a.h"
#include "bt2b.h"
#include "bt3.h"

// Driver code
int main()
{
    int numberInput = 0;
    string numberString;
    string result = "";
    double n2 = 0;
    double n3 = 0;
    double x3 = 0;
    cout << "** Tac gia: HUYNH CONG PHA" << endl;
    cout << "** MSSV:    20850024" << endl;
    cout << "*****************************************" << endl;
    cout << "** Nhap so 1 neu muon xem bai 1" << endl;
    cout << "** Nhap so 2 neu muon xem bai 2a" << endl;
    cout << "** Nhap so 3 neu muon xem bai 2b" << endl;
    cout << "** Nhap so 4 neu muon xem bai 3" << endl;

    do
    {
        cout << "*****************************************" << endl;
        cout << "Vui long chon bai tap muon xem ket qua: " << endl;
        cin >> numberInput;

        switch (numberInput)
        {
            case 1:
                /*******************BT1********************/
                cout << "BAI TAP 1 - START" << endl;
                cout << "Nhap so: ";
                cin >> numberString;
                result = BT1_run(numberString);
                cout << result << endl;
                cout << "BAI TAP 1 - END" << endl;
                /*******************BT1********************/
                break;
            case 2:
                /*******************BT2-a********************/
                cout << "BAI TAP 2a - START" << endl;
                cout << "Nhap so: ";
                cin >> n2;
                cout << Solve(n2, 0.001) << endl;
                cout << "BAI TAP 2a - END" << endl;
                /*******************BT2-a********************/
                break;
            case 3:
                /*******************BT2-b********************/
                cout << "BAI TAP 2b - START" << endl;
                // Nhập số cần tính căn bậc 3
                cout << "Nhap so thuc duong" << endl;
                cin >> n3;
                x3 = BT_2b_run(n3);
                cout << "Can bac 3 cua " << n3 << " la: " << x3 << endl;
                cout << "BAI TAP 2b - END" << endl;
                /*******************BT2-b********************/
                break;
            case 4:
                cout << "BAI TAP 3 - START" << endl;
                BT3_run();
                cout << "BAI TAP 3 - END" << endl;
                break;
            default:
                cout << "Khong co bai tap tuong ung. Xin cam on! " << endl;
                break;
        }
    } while (numberInput > 0);

    return 0;
}
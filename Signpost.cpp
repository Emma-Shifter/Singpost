#include <iostream>
#include "TXLib.h"

using namespace std;

/*��������� ������������ ����� �������, ��������� ������� ������ ������
������ �������� (����������, ��������, ����������) ��� �������.
��� � ������, ��������� ����������� ��� ���������� ������� � �������.
������ � ������� �� ������ ��������� �������� �������� �������������.*/

int main()
{
    int choice;
    cout << "1 - don't use signpoint; 2 - use signpoint"<< endl;
    cout << "Wrote 1 or 2: ";
    cin >> choice;

    txCreateWindow(700, 600);

    switch (choice)
    {
        case 1:
        {
            int x = 10; //x-����������
            int y = 20; //y-����������
            txRectangle(x, y, x+30, y+40);//��������� ��� ���������� ������ �������������
            break;
        }
        case 2:
        {
            int x = 30; //x-����������
            int *b; //������ ���������
            b = &x; //���������, ��� �� ��������� �� x

            *b = 50; //������ �������� ����������, �� ������� �

            cout << "Address = " << b << endl;//����� ������, ��� ��������� ���� ����������
            cout << "Value = " << *b << endl;//����� ������� � ��������
            txRectangle(x, *b, x+30, *b+40); //��������� ���������� � ������� ��������� �������������
            break;
        }
        default:
        cout << "Incorrect entering" << endl;
    }
}

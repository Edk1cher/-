#include "TXLib.h"

int main()
    {
    txCreateWindow (1200, 800);
    //�������������� ���������� ������ ����� ���������� ���������
    txDisableAutoPause();
    txTextCursor(false);

    while(!GetAsyncKeyState(VK_ESCAPE))
        {
            txBegin();
            txSetColor(TX_WHITE);
            txSetFillColor(TX_BLACK);
            txClear();
            //������(�����)

            txSetFillColor(TX_RED);
            Win32::RoundRect(txDC(), 464, 287, 736, 336, 30, 35);

            txSetColor(TX_BLACK);
            txSetFillColor(TX_WHITE);
            Win32::RoundRect(txDC(), 459, 282, 731, 331, 30, 35);

            txSetColor(TX_BLACK);
            ///txSelectFont("Comic Sans MS", 32);
            txDrawText(459, 282, 731, 331, "������");

            txSleep(50);
            txEnd();
        }

    return 0;
    }


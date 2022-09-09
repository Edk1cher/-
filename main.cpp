#include "TXLib.h"

int main()
    {
    txCreateWindow (1200, 800);
    //јвтоматическое закрывание окошко после завершени€ программы
    txDisableAutoPause();
    txTextCursor(false);

    while(!GetAsyncKeyState(VK_ESCAPE))
        {
            txBegin();
            txSetColor(TX_WHITE);
            txSetFillColor(TX_BLACK);
            txClear();
            // нопка(ќбъЄм)

            txSetFillColor(TX_RED);
            Win32::RoundRect(txDC(), 464, 287, 736, 336, 30, 35);

            txSetColor(TX_BLACK);
            txSetFillColor(TX_WHITE);
            Win32::RoundRect(txDC(), 459, 282, 731, 331, 30, 35);

            txSetColor(TX_BLACK);
            ///txSelectFont("Comic Sans MS", 32);
            txDrawText(459, 282, 731, 331, "Ќј„ј“№");

            txSleep(50);
            txEnd();
        }

    return 0;
    }


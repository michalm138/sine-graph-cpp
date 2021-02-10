#include <iostream>
#include <graphics.h>
#include <math.h>

using namespace std;

int main()
{
    initwindow(800, 600);

    //Workspace
    outtextxy(321, 25, "WYKRES FUNKCJI");
    rectangle(50, 50, 750, 550);
    floodfill(51, 51, WHITE);
    outtextxy(50, 555, "VER 0.1");
    outtextxy(645, 555, "Michal Michalak");

    //Axes
    setcolor(BLACK);
    line(100, 50, 100, 550);        //Axis Y
    line(50, 300, 750, 300);        //Axis X
    line(90, 60, 100, 50);          //Arrow on axis Y
    line(110, 60, 100, 50);         //Arrow on axis Y
    line(740, 290, 750, 300);       //Arrow on axis X
    line(740, 310, 750, 300);       //Arrow on axis X

    //Signing axes
    for (int i=100; i<=700; i+=50) {
        line(i, 295, i, 305);
    }
    line(95, 200, 105, 200);
    line(95, 400, 105, 400);

    //Drawing the sine graph
    double y;
    moveto(100, 300);
    setcolor(RED);
    for (int x=100; x<=720; x++) {
        y = int(sin(x/31.75)*100+300);
        lineto(x, y);
        moveto(x, y);
        cout << "X: " << x << " Y: " << y << endl;
    }

    getch();
    closegraph();
    return 0;
}

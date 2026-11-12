#include <graphics.h>
#include <conio.h>

int main()
{
    int graphicsDriver = DETECT;
    int graphicsMode;

    char graphicsPath[] = "";
    initgraph(&graphicsDriver, &graphicsMode, graphicsPath);

    // Draw a horizontal straight line
    line(100, 100, 300, 100);

    // Draw a circle
    circle(200, 220, 70);

    // Draw a rectangle
    rectangle(400, 120, 600, 250);

    // Draw a triangle using three connected lines
    line(400, 400, 500, 280);
    line(500, 280, 600, 400);
    line(600, 400, 400, 400);

    // Wait until a key is pressed
    getch();

    // Exit graphics mode
    closegraph();

    return 0;
}

#include <iostream>
#include <graphics.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int graphicsDriver = DETECT;
    int graphicsMode;
    initgraph(&graphicsDriver, &graphicsMode, "");

    float startX, startY, endX, endY;
    float differenceX, differenceY, totalSteps;
    float stepX, stepY;
    float currentX, currentY;

    // Read the starting and ending coordinates
    cout << "Enter starting point (x1 y1): ";
    cin >> startX >> startY;

    cout << "Enter ending point (x2 y2): ";
    cin >> endX >> endY;

    // Find the change in X and Y
    differenceX = endX - startX;
    differenceY = endY - startY;

    // Determine the number of steps required
    totalSteps = max(abs(differenceX), abs(differenceY));

    // Select white for the line
    setcolor(WHITE);

    if (totalSteps == 0)
    {
        putpixel(round(startX), round(startY), WHITE);
    }
    else
    {
        // Calculate the increment for each step
        stepX = differenceX / totalSteps;
        stepY = differenceY / totalSteps;

        currentX = startX;
        currentY = startY;

        // Plot pixels using the DDA line drawing method
        for (int i = 0; i <= totalSteps; i++)
        {
            putpixel(round(currentX), round(currentY), WHITE);

            currentX += stepX;
            currentY += stepY;
        }
    }

    cout << "\\nDDA Line Drawing completed!";
    cout << "\\nPress any key in the graphics window to exit.";

    getch();
    closegraph();

    return 0;
}

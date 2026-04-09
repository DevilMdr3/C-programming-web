#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;  // Automatically detect the best driver and mode

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");  // Initialize graphics mode

    // Draw a rectangle
    rectangle(100, 100, 300, 200);

    getch();  // Wait for user input
    closegraph();  // Close graphics mode
    return 0;
}


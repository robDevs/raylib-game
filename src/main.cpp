#include "raylib.h"

int main(void)
{
    const int screenWidth = 500;
    const int screenheight = 500;

    InitWindow(screenWidth, screenheight, "Hello world");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        DrawText("Hello world!", screenWidth/2, screenheight/2, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
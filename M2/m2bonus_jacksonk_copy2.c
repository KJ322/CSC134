/*******************************************************************************************
*
*   raylib [core] examples - basic screen manager
*
*   NOTE: This example illustrates a very simple screen manager based on a states machines
*
*   Example originally created with raylib 4.0, last time updated with raylib 4.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2021-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include <stdlib.h>

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic screen manager");

    GameScreen currentScreen = LOGO;

    // TODO: Initialize all required variables and load all required data here!

    int framesCounter = 0;          // Useful to count frames

    SetTargetFPS(60);               // Set desired framerate (frames-per-second)
    //--------------------------------------------------------------------------------------
    //variables
    int player_x = screenWidth / 2;
    int player_y = screenHeight / 2;
    int speed_x = 0;
    int speed_y = 0;
    
    int fruit_x;
    int fruit_y;

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        switch(currentScreen)
        {
            case LOGO:
            {
                // TODO: Update LOGO screen variables here!

                framesCounter++;    // Count frames

                // Wait for 2 seconds (120 frames) before jumping to TITLE screen
                if (framesCounter > 120)
                {
                    currentScreen = TITLE;
                }
            } break;
            case TITLE:
            {
                // TODO: Update TITLE screen variables here!

                // Press enter to change to GAMEPLAY screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = GAMEPLAY;
                }
            } break;
            case GAMEPLAY:
            {
                // TODO: Update GAMEPLAY screen variables here!

                // Press enter to change to ENDING screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = ENDING;
                }
            } break;
            case ENDING:
            {
                // TODO: Update ENDING screen variables here!

                // Press enter to return to TITLE screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = TITLE;
                }
            } break;
            default: break;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            switch(currentScreen)
            {
                case LOGO:
                {
                    // TODO: Draw LOGO screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, BLACK);
                    DrawText("LOGO SCREEN", 20, 20, 40, RAYWHITE);
                    DrawText("Loading SNAKE...Please Wait...", 290, 220, 20, RAYWHITE);
                    
                    DrawRectangle(300, 400, 200, 200, MAROON);

                } break;
                case TITLE:
                {
                    // TODO: Draw TITLE screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, BEIGE);
                    DrawText("TITLE SCREEN", 20, 20, 40, DARKBROWN);
                    DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20, DARKBROWN);
                    
                    DrawRectangle(300, 400, 200, 200, DARKBROWN);

                } break;
                case GAMEPLAY:
                {
                    // TODO: Draw GAMEPLAY screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, DARKPURPLE);
                    DrawText("GAMEPLAY SCREEN", 20, 20, 40, YELLOW);
                    DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 130, 220, 20, YELLOW);
                    
                    DrawRectangle(300, 400, 200, 200, PURPLE);
                    
                    //update position
                    player_x = player_x + speed_x;
                    player_y = player_y + speed_y;
                    
                    
                    
                    int base_speed = 3;
                    
                    if (IsKeyPressed(KEY_LEFT))
                    {
                        speed_x = -base_speed;
                        speed_y = 0;
                    }
                    if (IsKeyPressed(KEY_RIGHT))
                    {
                        speed_x = base_speed;
                        speed_y = 0;
                    }
                    if (IsKeyPressed(KEY_UP))
                    {
                        speed_y = -base_speed;
                        speed_x = 0;
                    }
                    if (IsKeyPressed(KEY_DOWN))
                    {
                        speed_y = base_speed;
                        speed_x = 0;
                    }
                    
                    //wrap around
                    if (player_x > screenWidth) 
                    {
                        player_x = 0;  //wrap
                        //speed_x = -speed_x; //bounce
                    }
                    if (player_x < 0)
                    {
                        player_x = screenWidth;  //wrap
                        //speed_x = -speed_x; //bounce
                    }
                    if (player_y > screenHeight)
                    {
                        player_y = 0;
                        //speed_y = -speed_y; //bounce
                    }
                    if (player_y < 0)
                    {
                        player_y = screenHeight;
                        //speed_y = -speed_y; //bounce
                    }
                    
                    //draw fruit
                    fruit_x = 300;
                    fruit_y = 300;
                    DrawCircleGradient(fruit_x, fruit_y, 15, ORANGE, RED);
                    DrawCircle(fruit_x + 8, fruit_y - 5, 3, RAYWHITE);
                    
                    //draw player here
                    DrawCircleGradient(player_x, player_y, 25, BLUE, DARKBLUE);
                    DrawCircle(player_x - 10, player_y, 2, RAYWHITE);
                    DrawCircle(player_x + 10, player_y, 2, RAYWHITE);
                    DrawRectangle(player_x - 10, player_y + 10, 20, 2, RAYWHITE);
                    
                    if (abs(player_x - fruit_x) < 10)
                    {
                        if (abs(player_y - fruit_y) < 10)
                        {
                            player_x = 10;
                            player_y = 10;
                            currentScreen = ENDING;
                            base_speed + 1;
                        }
                    }

                } break;
                case ENDING:
                {
                    // TODO: Draw ENDING screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, DARKBLUE);
                    DrawText("ENDING SCREEN", 20, 20, 40, GOLD);
                    DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, GOLD);
                    
                    DrawRectangle(300, 400, 200, 200, GOLD);

                } break;
                /*
                case LOSE:
                DrawRectangle (0, 0, screenWidth, screenHeight, BLACK);
                DrawText("YOU DIED", 400, 200, 20, MAROON);
                DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, MAROON);
                default: break;
                */
            }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    // TODO: Unload all loaded data (textures, fonts, audio) here!

    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

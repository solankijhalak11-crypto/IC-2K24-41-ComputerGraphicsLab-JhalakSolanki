
# Computer Graphics – Practical 01

## Drawing Basic Geometric Shapes

### Assignment Overview

This practical introduces basic computer graphics using C++ and the `graphics.h` library. The program creates four geometric figures inside one graphics window:

- Straight Line
- Circle
- Rectangle
- Triangle

### Aim

To understand graphics initialization and use the built-in drawing functions to display simple geometric shapes through coordinate-based instructions.

## Software and Libraries

| Tool / Library | Purpose |
|---|---|
| C++ | Programming language |
| `graphics.h` | Drawing and graphics operations |
| `conio.h` | Keyboard input using `getch()` |
| GCC / MinGW | C++ compilation environment |
| Visual Studio Code | Code editing |

## Source File

**Program:** `Basic_Geometric_Shapes.cpp`

## Shapes Implemented

1. **Straight Line:** Drawn between two endpoints with the `line()` function.
2. **Circle:** Created with `circle()` using its centre point and radius.
3. **Rectangle:** Drawn with `rectangle()` by providing its upper-left and lower-right coordinates.
4. **Triangle:** Formed by connecting three line segments with the `line()` function.

## Graphics Functions

| Function | Use |
|---|---|
| `initgraph()` | Starts the graphics environment |
| `line()` | Draws a line between two points |
| `circle()` | Draws a circle using centre and radius |
| `rectangle()` | Draws a rectangle from two corner coordinates |
| `getch()` | Pauses the program until a key is pressed |
| `closegraph()` | Closes the graphics environment |

## Header Files

- **`graphics.h`** – Provides the functions required to initialize graphics and draw geometric figures.
- **`conio.h`** – Provides `getch()`, which keeps the graphics window open until a key is pressed.

## Expected Output

When executed successfully, the program opens a graphics window containing all four shapes: a straight horizontal line, a circle, a rectangle, and a triangle.

## Prerequisites

- A working C++ compiler
- GCC / MinGW environment
- Configured `graphics.h` library
- `conio.h` support
- Visual Studio Code or another compatible C++ IDE

## Learning Outcomes

By completing this practical, the student becomes familiar with:

- The fundamentals of computer graphics programming.
- Initializing and closing graphics mode.
- Using coordinates to position objects.
- Drawing basic geometric primitives.
- Applying common functions from the `graphics.h` library.

## Student Information

- **Name:** Jhalak Solanki
- **Roll Number:** IC-2K24-41
- **Programme:** MCA (5 Years)
- **Semester:** 5th Semester
- **Subject:** Computer Graphics
- **Practical:** Lab Assignment 1

## Conclusion

This practical demonstrates how basic geometric shapes can be created in C++ using the `graphics.h` library. It provides an introduction to graphics initialization, coordinate placement, and drawing functions.

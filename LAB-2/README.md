

# Computer Graphics – Practical 02

## DDA Line Drawing Algorithm

### Aim

To implement the Digital Differential Analyzer (DDA) line drawing algorithm in C++ using the `graphics.h` library and display a line between two user-provided points.

### About the Practical

This program accepts the starting and ending coordinates of a line. It calculates the difference between the coordinates, determines the number of steps, and finds the incremental change in X and Y. The algorithm then plots the required pixels to draw the line.

### Source File

**Program:** `DDA_Line_Drawing.cpp`

### Libraries and Tools

| Library / Tool | Purpose |
|---|---|
| C++ | Programming language |
| `iostream` | Reading coordinates and displaying messages |
| `graphics.h` | Graphics operations and pixel plotting |
| `cmath` | Rounding coordinate values |
| `algorithm` | Finding the maximum number of steps |
| `conio.h` | Waiting for a key press |
| GCC / MinGW | C++ compilation environment |
| Visual Studio Code | Code editor |

### Working Steps

1. Initialize the graphics window.
2. Read the starting point `(x1, y1)` and ending point `(x2, y2)`.
3. Calculate `dx` and `dy`.
4. Find the number of steps using the greater of `|dx|` and `|dy|`.
5. Calculate the X and Y increments.
6. Plot pixels using rounded coordinates and update X and Y after each step.
7. Wait for a key press and close graphics mode.

If both endpoints are the same, the program plots a single pixel at that coordinate.

### Sample Input

```text
Enter starting point (x1 y1): 100 100
Enter ending point (x2 y2): 500 300
```

### Console Message

```text
DDA Line Drawing completed!
Press any key in the graphics window to exit.
```

### Expected Graphics Output

The graphics window displays a white line from `(100, 100)` to `(500, 300)` on a black background for the sample input.

**Output Image:** `DDA_Line_Drawing_Output.png`

### Functions Used

| Function | Purpose |
|---|---|
| `initgraph()` | Initializes graphics mode |
| `max()` | Selects the larger coordinate difference |
| `abs()` | Gets the absolute value |
| `round()` | Rounds coordinates |
| `setcolor()` | Sets the drawing color |
| `putpixel()` | Plots an individual pixel |
| `getch()` | Waits for a key press |
| `closegraph()` | Closes graphics mode |

### Requirements

- C++ compiler
- GCC / MinGW environment
- Configured `graphics.h` library
- `conio.h` support
- Visual Studio Code or another compatible C++ IDE

### Learning Outcomes

- Understand the DDA line drawing algorithm.
- Calculate coordinate differences and step increments.
- Generate a line by plotting individual pixels.
- Use `putpixel()` and other graphics functions.
- Understand how input coordinates affect the displayed line.

### Student Information

- **Name:** Jhalak Solanki
- **Roll Number:** IC-2K24-41
- **Programme:** MCA (5 Years)
- **Semester:** 5th Semester
- **Subject:** Computer Graphics
- **Practical:** Lab Assignment 2

### Conclusion

The program demonstrates line generation using the DDA algorithm. It calculates intermediate positions from the supplied endpoints and plots pixels to display the required line in the graphics window.

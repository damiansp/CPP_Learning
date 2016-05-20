/* A simplified turtle draw program */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int dim = 20;         /* grid dimensions */
int turtle[2] = {0};        /* turtle location */
int heading = 0;            /* turtle's heading 0: E, 1: S, 2: W, 3: N */
int grid[dim][dim] = {0};   /* drawing area: 0 = blank; 1 = drawn on */
bool isDrawing = false;     /* draw if true */


void showGrid(int grid[dim][dim], int gridDim, int heading) {
  char turtlePlot = '>';
  
  // Loop over rows
  for (int i = 0; i < gridDim; i++) {
    // ...and over cols
    for (int j = 0; j < gridDim; j++) {
      // Use a ">", etc to show the turtle's location and heading
      if (i == turtle[0] && j == turtle[1]) {
        switch (heading) {
        case 0:
          turtlePlot = '>';
          break;
        case 1:
          turtlePlot = 'v';
          break;
        case 2:
          turtlePlot = '<';
          break;
        case 3:
          turtlePlot = '^';
          break;
        default:
          printf("Bad heading value %d", heading);
          break;
        }

        cout << turtlePlot;
      } else {
        cout << (grid[i][j] ? "* " : "  ");
      }
    }
    cout << endl;
  }
}

int turn(int direction, int heading) {
  if (direction == 0) { /* turn left */
    heading = (--heading < 0 ? 3 : heading);
  } else if (direction == 1) { /* turn right */
    heading++;
    heading %= 4;
  } else {
    printf("Bad turn direction input %d", direction);
  }
  return heading;;
}

bool startDrawing() {
  return true;
}

bool stopDrawing() {
  return false;
}

void move(int steps, int heading, bool isDrawing) {
  int startCoords[2] = { turtle[0], turtle[1] };

  switch (heading) {
  case 0: /* E */
    turtle[1] += steps;
    // Can't move off grid
    if (turtle[1] >= dim) {
      turtle[1] = dim - 1;
    }
    break;
  case 1: /* S */
    turtle[0] += steps;
    if (turtle[0] >= dim) {
      turtle[0] = dim - 1;
    }
    break;
  case 2: /* W */
    turtle[1] -= steps;
    if (turtle[1] < 0) {
      turtle[1] = 0;
    }
    break;
  case 3: /* N */
    turtle[0] -= steps;
    if (turtle[0] < 0) {
      turtle[0] = 0;
    }
    break;
  default:
    printf("Bad heading value %d", heading);
    break;
  }

  if (isDrawing) {
    int rowmin, rowmax, colmin, colmax;

    rowmin = (startCoords[0] < turtle[0] ? startCoords[0] : turtle[0]);
    rowmax = (startCoords[0] > turtle[0] ? startCoords[0] : turtle[0]);
    colmin = (startCoords[1] < turtle[1] ? startCoords[1] : turtle[1]);
    colmax = (startCoords[1] > turtle[1] ? startCoords[1] : turtle[1]);

    /* debugging 
    cout << "start: (" << startCoords[0] << ", " << startCoords[1] << ")\n"
         << "end:   (" << turtle[0]      << ", " << turtle[1]      << ")\n"
         << "(rowmin, rowmax): (" << rowmin << ", " << rowmax      << ")\n"
         << "(colmin, colmax): (" << colmin << ", " << colmax      << ")\n";
    */

    // fil in grid
    for (int r = rowmin; r <= rowmax; r++) {
      for (int c = colmin; c <= colmax; c++) {
        grid[r][c] = 1;
      }
    }
  }
}


int main() {
  showGrid(grid, dim, heading);
  move(5, heading, true);
  showGrid(grid, dim, heading);
  
  heading = turn(1, heading); /* turn right */
  showGrid(grid, dim, heading);
  
  move(5, heading, true);
  heading = turn(0, heading); /* turn left*/
  showGrid(grid, dim, heading);

  move(7, heading, true);
  heading = turn(1, heading); /* turn right */
  showGrid(grid, dim, heading);
  
  return 0;
}

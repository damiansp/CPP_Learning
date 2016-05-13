/* Solve the Tower of Hanoi puzzle recursively
 * Rules:
 * Move only 1 disk at a time
 * A disk can only be stacked on an empty peg or a larger disc
 * Disc may also be spelled disk
 */

// Label pegs
int A[], B[], C[],
  n = 6, // number of discs

  d1 = 1, d2 = 2, d3 = 3, d4 = 4, d5 = 5, d6 = 6; // disks and sizes


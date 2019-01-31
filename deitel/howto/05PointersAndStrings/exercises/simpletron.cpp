/* Simulate a (pseudo-) assembly language */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;
using std::ios;

long accumulator = 0;
const int MEMORY_SIZE = 100;
int memory[MEMORY_SIZE] = {0};
int counter = 0,
  instruction = 0;

void read(int input, int mem) {
  /* Read an input instruction to the next spot in memory */
  memory[mem] = input;
}

void write(int mem) {
  /* write a variable in memory to standard out */
  cout << memory[mem];
}

void load(int mem) {
  /* load variable from memory into accumulator */
  accumulator = memory[mem];
}

void store(int mem) {
  /* store contents of accumulator in memory */
  memory[mem] = accumulator;
}

void add(int n) {
  /* add n to accumultor */
  accumulator += n;
}

void subtract(int n) {
  /* subtract n from accumulator */
  accumulator -= n;
}

void multiply(int n) {
  /* mutliply accumulator by n */
  accumulator *= n;
}

void divide(int n) {
  /* (int) divide accumulator by n */
  accumulator /= n;
}

void showMenu(void) {
  char cont = 'x';
  cout << "All instructions should be entered in the form of 4-digit\n"
       << "numbers, iimm, where ii indicates the instruction (see below),\n"
       << "and mm indicates the memory location of the operand." << endl
       << endl
       << "     10 READ       Read input to memory location" << endl
       << "     11 WRITE      Write contents of memory to standard out" << endl
       << "     20 LOAD       Load contents of memory into the accumulator"
       << endl
       << "     21 STORE      Store contens of accumulator to memory" << endl
       << "     30 ADD        Add contents of memory to accumulator" << endl
       << "     31 SUBTRACT   Subtract contents of memory from accumulator"
       << endl
       << "     32 MULTIPLY   Multiply accumulator by contents of memory"
       << endl
       << "     33 DIVIDE     Divide accumulator by contents of memory "
       << " (integer division)" << endl
       << "     40 BRANCH     (If accumulator is positive) Branch to "
       << "instruction mm" << endl
       << "     41 BRANCHNEG  (If accumulator is negative) Branch to "
       << "instruction mm" << endl
       << "     42 BRANCHZERO (If accumulator is 0) Branch to instruction mm"
       << endl
       << "     43 HALT       Terminate program (completed)." << endl << endl
       << "For example 1072 means read input and save to memory location 72."
       << endl;

  while (cont != 'c') {
    cout << "Press 'c' to continue: ";
    cin >> cont;
  }
}

void showStatus(int operation, int operand) {
  cout << "REGISTERS:" << endl;
  printf("accumulator %04ld\n", accumulator);
  printf("counter     %02d\n", counter);
  printf("instruction %04d\n", instruction);
  printf("operation   %02d\n", operation);
  printf("operand     %02d\n\n", operand);

  cout << "MEMORY:" << endl;
  // print header
  cout << "  "; /* indent for side-headers */
  for (int i = 0; i < 10; i++) {
    printf("%5d", i);
  }

  // print contents of memory
  for (int i = 0; i < MEMORY_SIZE; i++) {
    // every 10th value starts a new row; print row header
    if (i % 10 == 0) {
      printf("\n%2d %04d", i, memory[i]);
    } else {
      printf(" %04d", memory[i]);
    }
  }

  cout << endl << endl;
}


void readProgram(void) {
  int instructionNumber = 0,
    operation,
    operand;
  char cont = 'x';
  
  cout << endl << endl << endl << endl
       << "*** Welcome to Simpletron! ***" << endl << endl
       << "*** Enter your program one instruction at a time. ***" << endl
       << endl
       << "Enter -1 to see available operations or" << endl
       << "-9999 when done entering: "
       << endl;

  cout << endl << endl;

  printf("%02d ? ", instructionNumber);

  cin >> instruction;

  if (instruction == -1) {
    showMenu();
    printf("%02d ? ", instructionNumber);
    cin >> instruction;
  }

  while(instruction != -9999) {
    operation = instruction / 100;
    operand = instruction % 100;
    memory[instructionNumber++] = instruction;
    showStatus(operation, operand);
    printf("%02d ? ", instructionNumber);
    cin >> instruction;
  }
}




int main() {
  readProgram();
  
  return 0;
}


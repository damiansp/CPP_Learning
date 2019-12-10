Game::Game() {
  // Create 3 empty stacks
  for (int i = 0; i < 3; i++) {
    Stack stackOfCubes;
    stacks_.pushBack(stackOfCubes);
  }


  // Create the 4 cubes, placing each on 0th stack
  Cube blue(4, 'b');
  Cube orange(3, 'o');
  Cube purple(2, 'p');
  Cube yellow(1, 'y');
  

  stacks_[0].pushBack(blue);
  stacks_[0].pushBack(orange);
  stacks_[0].pushBack(purple);
  stacks_[0].pushBack(yellow);
}


void Game::_move(
    unsigned start, unsigned end, Stack &source, Stack &target, Stack &spare,
    unsigned depth) {
  //cout << "Planning (depth=" << depth++ << "): Move [" << /* ... */

  // Check if moving only 1 cube
  if (start == end) {
    // if so, move it directly
    _moveCube(source, target);
    cout << *this << endl;
  } else {
    // Use move strategy
    _move(start + 1, end  , source, spare , target, depth);
    _move(start    , start, source, target, spare , depth);
    _move(start + 1, end  , spare , target, source, depth);
  }
}

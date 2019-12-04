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


void Game::_move(unsigned p1, unsigned p2) {
  Cube cube = stacks_[p1].removeTop();
  stacks_[p2].pushBack(cube);
}


void Game::_legalMove(unsigned p1, unsigned p2) {
  if (stacks_[p1].size() == 0 && stacks_[p2].size() > 0 ) {
    _move(p2, p1);
  } else if (stacks_[p1].size() > 0 && stacks_[p2].size() == 0) {
    _move(p1, p2);
  } else if (stacks_[p1].size() > 0 && stacks_[p2].size() > 0) {
    if (stacks_[p1].peekTop().getLength() < stacks_[p2].peekTop().getLength()) {
      _move(p1, p2);
    } else { _move(p2, p1); }
  }
  cout << *this << endl;
}


void Game::solve() {
  while (stacks_[2].size != 4) {
    _legalMove(0, 1);
    _legalMove(0, 2);
    _legalMove(1, 2);
  }
}

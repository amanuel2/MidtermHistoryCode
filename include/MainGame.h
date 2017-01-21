#pragma once
#include <string>

using std::string;

class Game
{
public:
  Game();
  ~Game();
  void init();
private:
  void main_menu();
  void quit();
  void last_state();
  void print_inst();
  void init_round();
  void invalid_cmd();
  bool running=true;
  string theme;
};

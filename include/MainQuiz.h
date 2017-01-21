#pragma once

#include <string>

using std::string;

class Quiz
{
public:
  Quiz(string theme);
  ~Quiz();
  void init();
private:

  void rel_handler();
  void ren_handler();
  void ref_handler();
  void exp_handler();
  void abs_handler();
  string theme;
};

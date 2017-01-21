#include <MainQuiz.h>
#include <iostream>

using std::cout;
using std::endl;

Quiz::Quiz(string theme) : theme(theme)
{

}

void Quiz::init()
{

  if(this->theme.compare("Rel")==0)
    this->rel_handler();
  else if(this->theme.compare("Ren")==0)
    this->ren_handler();
  else if(this->theme.compare("Ref")==0)
    this->ref_handler();
  else if(this->theme.compare("Exp")==0)
    this->exp_handler();
  else if(this->theme.compare("Abs")==0)
    this->abs_handler();
}

void Quiz::rel_handler()
{
  cout << "Religion HANDLER" << endl;
}


void Quiz::ren_handler()
{
  cout << "Renaissance HANDLER" << endl;
}


void Quiz::ref_handler()
{
  cout << "Reformation HANDLER" << endl;
}


void Quiz::exp_handler()
{
  cout << "Exploration HANDLER" << endl;
}


void Quiz::abs_handler()
{
  cout << "Absolutism HANDLER" << endl;
}

Quiz::~Quiz()
{

}

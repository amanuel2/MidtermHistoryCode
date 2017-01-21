#include <MainQuiz.h>
#include <Dictonary.h>
#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::cin;

Quiz::Quiz(string theme) : theme(theme)
{

}

void Quiz::init()
{
  init_questions();
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
 num_questions = 8;
 string answer_user;
 cout << "***Religion (overview) multiple choice questions***" << endl;
 for(int i=0; i<8; i++)
 {
   cout << "QUESTION #" << (i+1) << " : " << questions_religion[i].question << endl;
   for(int j=0; j<4; j++)
     cout << (j+1) << ") " << questions_religion[i].opts.mc.attempts[j] << endl;
   cout << endl << "What is your answer?(1-4) : ";
   cin >> answer_user;
   cout << endl;
   int answer_user_index = atoi(answer_user.c_str());
   answer_user = questions_religion[i].opts.mc.attempts[answer_user_index-1];

   if(answer_user.compare(questions_religion[i].opts.answer)==0)
    this->questions_right+=1;
   else
    this->questions_wrong+=1;
 }
 this->print_final_results();
}

void Quiz::print_final_results()
{
  cout << "********************* RESULTS *********************" << endl;
  cout << "TOTAL CORRECT : " << this->questions_right << endl;
  cout << "TOTAL INCORRECT : " << this->questions_wrong << endl;
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

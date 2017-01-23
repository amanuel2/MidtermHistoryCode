#include <MainQuiz.h>
#include <iostream>
#include <string.h>
#include <Dictonary.h>

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
 cout << "***Religion (overview) multiple choice questions***" << endl << endl;
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
  num_questions = 4;
  string answer_user;
  cout << "***Rennaisance multiple choice questions***" << endl << endl;
  for(int i=0; i<4; i++)
  {
    cout << "QUESTION #" << (i+1) << " : " << questions_renaissance[i].question << endl;
    for(int j=0; j<4; j++)
      cout << (j+1) << ") " << questions_renaissance[i].opts.mc.attempts[j] << endl;
    cout << endl << "What is your answer?(1-4) : ";
    cin >> answer_user;
    cout << endl;
    int answer_user_index = atoi(answer_user.c_str());
    answer_user = questions_renaissance[i].opts.mc.attempts[answer_user_index-1];

    if(answer_user.compare(questions_renaissance[i].opts.answer)==0)
     this->questions_right+=1;
    else
     this->questions_wrong+=1;
  }
  this->print_final_results();
}


void Quiz::ref_handler()
{
  num_questions = 6;
  string answer_user;
  cout << "***Reformation multiple choice questions***" << endl << endl;
  for(int i=0; i<6; i++)
  {
    cout << "QUESTION #" << (i+1) << " : " << questions_reformation[i].question << endl;
    for(int j=0; j<4; j++)
      cout << (j+1) << ") " << questions_reformation[i].opts.mc.attempts[j] << endl;
    cout << endl << "What is your answer?(1-4) : ";
    cin >> answer_user;
    cout << endl;
    int answer_user_index = atoi(answer_user.c_str());
    answer_user = questions_reformation[i].opts.mc.attempts[answer_user_index-1];

    if(answer_user.compare(questions_reformation[i].opts.answer)==0)
     this->questions_right+=1;
    else
     this->questions_wrong+=1;
  }
  this->print_final_results();
}


void Quiz::exp_handler()
{
  num_questions = 11;
  string answer_user;
  cout << "***Exploration multiple choice questions***" << endl << endl;
  for(int i=0; i<11; i++)
  {
    cout << "QUESTION #" << (i+1) << " : " << questions_exploration[i].question << endl;
    for(int j=0; j<4; j++)
      cout << (j+1) << ") " << questions_exploration[i].opts.mc.attempts[j] << endl;
    cout << endl << "What is your answer?(1-4) : ";
    cin >> answer_user;
    cout << endl;
    int answer_user_index = atoi(answer_user.c_str());
    answer_user = questions_exploration[i].opts.mc.attempts[answer_user_index-1];

    if(answer_user.compare(questions_exploration[i].opts.answer)==0)
     this->questions_right+=1;
    else
     this->questions_wrong+=1;
  }
  this->print_final_results();
}


void Quiz::abs_handler()
{
 num_questions = 4;
 string answer_user;
 cout << "***Absolutism multiple choice questions***" << endl << endl;
 for(int i=0; i<4; i++)
 {
   cout << "QUESTION #" << (i+1) << " : " << question_absolutism[i].question << endl;
   for(int j=0; j<4; j++)
     cout << (j+1) << ") " << question_absolutism[i].opts.mc.attempts[j] << endl;
   cout << endl << "What is your answer?(1-4) : ";
   cin >> answer_user;
   cout << endl;
   int answer_user_index = atoi(answer_user.c_str());
   answer_user = question_absolutism[i].opts.mc.attempts[answer_user_index-1];

   if(answer_user.compare(question_absolutism[i].opts.answer)==0)
    this->questions_right+=1;
   else
    this->questions_wrong+=1;
 }
 this->print_final_results();
}

Quiz::~Quiz()
{

}

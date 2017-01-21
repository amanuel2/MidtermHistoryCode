#include <MainGame.h>
#include <MainQuiz.h>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using std::cout;
using std::endl;
using std::cin;
using std::string;

Game::Game()
{

}

Game::~Game()
{

}

void Game::quit()
{
  this->running = false;
}

void Game::init()
{
  while(running)
  {
    this->main_menu();
    string _tmp_usr;
    cin >> _tmp_usr;
    if(_tmp_usr.compare("q")==0)
      this->quit();
    else if(_tmp_usr.compare("i")==0)
      this->print_inst();
    else if(_tmp_usr.compare("s")==0)
      this->init_round();
    else
      this->invalid_cmd();
  }

  this->last_state();
}

void Game::invalid_cmd()
{
  cout << "That was an invalid command. Please try again!" << endl;
  std::this_thread::sleep_for(std::chrono::milliseconds(4000));
  return;
}

void Game::init_round()
{
    cout << endl << "--------------------------------------------" << endl;
    cout << "Welcome! Lets start the Midterm Review Game!" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl << "Choose from either of these topics : " << endl <<endl;
    cout << "Type 'Rel' then enter for Religion (overview)" << endl;
    cout << "Type 'Ren' then enter for Renaissance " << endl;
    cout << "Type 'Ref' then enter for Reformation" << endl;
    cout << "Type 'Exp' then enter for Exploration" << endl;
    cout << "Type 'Abs' then enter for Absolutism" << endl << endl << endl;

    cin >> this->theme;
    if(this->theme.compare("Rel")!=0 &&
       this->theme.compare("Ren")!=0 &&
       this->theme.compare("Ref")!=0 &&
       this->theme.compare("Exp")!=0 &&
       this->theme.compare("Abs")!=0)
    {
      this->invalid_cmd();
      return;
    }

  Quiz quiz_instance(this->theme);
  quiz_instance.init();  
}

void Game::last_state()
{
  cout << endl << "EXITING GAME" << endl;
}

//TODO : Implement Instructions
void Game::print_inst()
{
  string tmpp;
  cout << "\t\t INSTRUCTIONS" << endl;
  cout << "\t\t ------------" << endl;
  cout << "When you start the game you first get presented a theme to start with." << endl;
  cout << "Themes to choose from : " << endl;
  cout <<endl<< "1) Religion (overview)"<< endl << "2) Renaissance" << endl <<"3) Reformation" << endl << "4) Exploration" << endl << "5) Absolutism" << endl;
  cout << endl << "After you chose your theme it presents you a set of multiple questions to answer." << endl;
  cout << "Finally displays score , and asks if you want to play again." << endl;
  cout << endl <<"**Enter a letter Press enter to go back to main menu**" << endl;
  (cin>>tmpp);
}

void Game::main_menu()
{
  cout << "****************************************************************\n" << endl;
  cout << "\t\t\t MIDTERM REVIEW QUESTIONS\t\n" << endl;
  cout << "\t\t\t ------------------------\t\n\n" << endl;
  cout << "\t   Program created by Amanuel Bogale under MIT Licence\n" << endl;
  cout << "****************************************************************\n\n" << endl;
  cout << "Commands\n" << endl;
  cout << "--------\n" << endl;
  cout << "1) press 'i' for instruction\n" << endl;
  cout << "2) press 's' to start the exam\n" << endl;
  cout << "3) press 'q' to end the exam\n" << endl;
}

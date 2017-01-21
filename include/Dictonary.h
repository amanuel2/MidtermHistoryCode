#pragma once

#include <string>
#include <string.h>

using std::string;

typedef struct
{
  string attempts[4];
}multiple_choice_t;

typedef struct
{
    multiple_choice_t mc;
    string answer;
}opts_t;

typedef struct
{
  string question;
  opts_t opts;
}question_t;

question_t questions_religion[7];

void init_questions()
{
  questions_religion[0].question =  "What were the major characteristics and beliefs of Judaism?";
  questions_religion[0].opts.answer = "Monothestic religion who believed in Moses and Abraham. It also originated from Isreal.";
  questions_religion[0].opts.mc.attempts[0].assign("Polythestic religion which originated from india and whose sacred text was Vedas.");
  questions_religion[0].opts.mc.attempts[1].assign("Polythestic religion which originated from india and whose sacred text was Tripitaka. Founded by Siddartha.");
  questions_religion[0].opts.mc.attempts[2].assign("More of a philosophy than a religion, which originated in South Asia.");
  questions_religion[0].opts.mc.attempts[3].assign("Monothestic religion who believed in Moses and Abraham. It also originated from Isreal.");
}

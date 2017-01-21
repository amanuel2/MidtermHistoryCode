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

  questions_religion[1].question =  "What were the major characteristics and beliefs of Hinduism?";
  questions_religion[1].opts.answer = "Polythestic religion which originated from india and whose sacred text was Vedas.";
  questions_religion[1].opts.mc.attempts[0].assign("Polythestic religion which originated from india and whose sacred text was Vedas.");
  questions_religion[1].opts.mc.attempts[1].assign("Polythestic religion which originated from india and whose sacred text was Tripitaka. Founded by Siddartha.");
  questions_religion[1].opts.mc.attempts[2].assign("More of a philosophy than a religion, which originated in South Asia.");
  questions_religion[1].opts.mc.attempts[3].assign("Monothestic religion who believed in Moses and Abraham. It also originated from Isreal.");

  questions_religion[2].question =  "What were the major characteristics and beliefs of Buddhism?";
  questions_religion[2].opts.answer = "Polythestic religion which originated from india and whose sacred text was Tripitaka. Founded by Siddartha.";
  questions_religion[2].opts.mc.attempts[0].assign("Polythestic religion which originated from india and whose sacred text was Vedas.");
  questions_religion[2].opts.mc.attempts[1].assign("Polythestic religion which originated from india and whose sacred text was Tripitaka. Founded by Siddartha.");
  questions_religion[2].opts.mc.attempts[2].assign("More of a philosophy than a religion, which originated in South Asia.");
  questions_religion[2].opts.mc.attempts[3].assign("Monothestic religion who believed in Moses and Abraham. It also originated from Isreal.");

  questions_religion[3].question =  "What were the major characteristics and beliefs of Confucianism?";
  questions_religion[3].opts.answer = "More of a philosophy than a religion, which originated in South Asia.";
  questions_religion[3].opts.mc.attempts[0].assign("Polythestic religion which originated from india and whose sacred text was Vedas.");
  questions_religion[3].opts.mc.attempts[1].assign("Polythestic religion which originated from india and whose sacred text was Tripitaka. Founded by Siddartha.");
  questions_religion[3].opts.mc.attempts[2].assign("More of a philosophy than a religion, which originated in South Asia.");
  questions_religion[3].opts.mc.attempts[3].assign("Monothestic religion who believed in Moses and Abraham. It also originated from Isreal.");

  questions_religion[4].question =  "What were the major characteristics and beliefs of Daoism?";
  questions_religion[4].opts.answer = "Religion that originated from China. The founder of Daoism is Laozi.";
  questions_religion[4].opts.mc.attempts[0].assign("Polythestic religion which originated from india and whose sacred text was Vedas.");
  questions_religion[4].opts.mc.attempts[1].assign("Polythestic religion which originated from india and whose sacred text was Tripitaka. Founded by Siddartha.");
  questions_religion[4].opts.mc.attempts[2].assign("Religion that originated from China. The founder of Daoism is Laozi.");
  questions_religion[4].opts.mc.attempts[3].assign("Monothestic religion who believed in Moses and Abraham. It also originated from Isreal.");

  questions_religion[5].question =  "What were the major characteristics and beliefs of Christianity?";
  questions_religion[5].opts.answer = "The most popular religion in the world. The founder of the religoin is Jesus Christ.";
  questions_religion[5].opts.mc.attempts[0].assign("Polythestic religion which originated from india and whose sacred text was Vedas.");
  questions_religion[5].opts.mc.attempts[1].assign("The most popular religion in the world. The founder of the religoin is Jesus Christ.");
  questions_religion[5].opts.mc.attempts[2].assign("Religion that originated from China. The founder of Daoism is Laozi.");
  questions_religion[5].opts.mc.attempts[3].assign("Monothestic religion who believed in Moses and Abraham. It also originated from Isreal.");

  questions_religion[6].question =  "What were the major characteristics and beliefs of Islam?";
  questions_religion[6].opts.answer = "Second most popular religion in the world. The founder of the religoin is Muhammad.";
  questions_religion[6].opts.mc.attempts[0].assign("Second most popular religion in the world. The founder of the religoin is Muhammad.");
  questions_religion[6].opts.mc.attempts[1].assign("The most popular religion in the world. The founder of the religoin is Jesus Christ.");
  questions_religion[6].opts.mc.attempts[2].assign("Religion that originated from China. The founder of Daoism is Laozi.");
  questions_religion[6].opts.mc.attempts[3].assign("Monothestic religion who believed in Moses and Abraham. It also originated from Isreal.");

  questions_religion[7].question =  "What religions were monotheistic?";
  questions_religion[7].opts.answer = "Christianity,Islam,Judaism";
  questions_religion[7].opts.mc.attempts[0].assign("Hinduism,Islam,Buddhism");
  questions_religion[7].opts.mc.attempts[1].assign("Christianity,Islam,Judaism");
  questions_religion[7].opts.mc.attempts[2].assign("Christianity,Confucianism,Islam");
  questions_religion[7].opts.mc.attempts[3].assign("Judaism,Daoism,Buddhism");

}

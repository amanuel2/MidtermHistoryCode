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
question_t questions_renaissance[3];
question_t questions_reformation[5];
question_t questions_exploration[11];
question_t question_absolutism[4];


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

  questions_renaissance[0].question = "What was the difference between medieval European culture and Renaissance culture?";
  questions_renaissance[0].opts.answer = "The Middle Ages was a period from the 5th to 16th centuries. The Renaissance was the period between the 14th and the 16th centuries.";
  questions_renaissance[0].opts.mc.attempts[0].assign("There is no difference.");
  questions_renaissance[0].opts.mc.attempts[1].assign("The Middle Ages was a period from the 5th to 16th centuries. The Renaissance was the period between the 14th and the 16th centuries.");
  questions_renaissance[0].opts.mc.attempts[2].assign("Christianity,Confucianism,Islam");
  questions_renaissance[0].opts.mc.attempts[3].assign("Middle ages didnt exist.");

  questions_renaissance[1].question = "Define humanism. How did it relate to the Renaissance?";
  questions_renaissance[1].opts.answer = "A system of values and beliefs that is based on the idea that people are basically good and that problems can be solved using reason instead of religion.";
  questions_renaissance[1].opts.mc.attempts[0].assign("Humanism was the act of being human.");
  questions_renaissance[1].opts.mc.attempts[1].assign("People are terrible.");
  questions_renaissance[1].opts.mc.attempts[2].assign("A system of values and beliefs that is based on the idea that people are basically good and that problems can be solved using reason instead of religion.");
  questions_renaissance[1].opts.mc.attempts[3].assign("A system where problems can be solved via religion.");

  questions_renaissance[2].question = "What were the causes of Renaissance?";
  questions_renaissance[2].opts.answer = "secularism,humanism, questioning of ideas, traditions, and institutions";
  questions_renaissance[2].opts.mc.attempts[0].assign("secularism,humanism, questioning of ideas, traditions, and institutions");
  questions_renaissance[2].opts.mc.attempts[1].assign("That is not a thing.");
  questions_renaissance[2].opts.mc.attempts[2].assign("Religions were the cause");
  questions_renaissance[2].opts.mc.attempts[3].assign("Revolution of people caused this because of unfair state.");

  questions_renaissance[3].question = "What were the acomplishments of the following : Shakespeare , Machiavelli, and Gutenberg?";
  questions_renaissance[3].opts.answer = "Shakesphere was known for making poets, Machiavelli was a major poltiacal scientist, Gutenberg introduced printing.";
  questions_renaissance[3].opts.mc.attempts[0].assign("secularism,humanism, questioning of ideas, traditions, and institutions");
  questions_renaissance[3].opts.mc.attempts[1].assign("That is not a thing.");
  questions_renaissance[3].opts.mc.attempts[2].assign("Shakesphere was known for making poets, Machiavelli was a major poltiacal scientist, Gutenberg introduced printing.");
  questions_renaissance[3].opts.mc.attempts[3].assign("They had no acomplishments.");

  questions_reformation[0].question = "What was the protestant reformation?";
  questions_reformation[0].opts.answer = "The Protestant Reformation was the 16th-century religious, political, intellectual and cultural upheaval that splintered Catholic Europe, setting in place the structures and beliefs that would define the continent in the modern era.";
  questions_reformation[0].opts.mc.attempts[0].assign("secularism,humanism, questioning of ideas, traditions, and institutions");
  questions_reformation[0].opts.mc.attempts[1].assign("The Protestant Reformation was the 16th-century religious, political, intellectual and cultural upheaval that splintered Catholic Europe, setting in place the structures and beliefs that would define the continent in the modern era.");
  questions_reformation[0].opts.mc.attempts[2].assign("Shakesphere was known for making poets, Machiavelli was a major poltiacal scientist, Gutenberg introduced printing.");
  questions_reformation[0].opts.mc.attempts[3].assign("There is nothing called like so");

  questions_reformation[1].question = "What role did Marthin Luther Play in Reformation?";
  questions_reformation[1].opts.answer = "Was a priest who made the 95-thesis which started reformation.";
  questions_reformation[1].opts.mc.attempts[0].assign("No role what so ever.");
  questions_reformation[1].opts.mc.attempts[1].assign("The Protestant Reformation was the 16th-century religious, political, intellectual and cultural upheaval that splintered Catholic Europe, setting in place the structures and beliefs that would define the continent in the modern era.");
  questions_reformation[1].opts.mc.attempts[2].assign("Shakesphere was known for making poets, Machiavelli was a major poltiacal scientist, Gutenberg introduced printing.");
  questions_reformation[1].opts.mc.attempts[3].assign("Was a priest who made the 95-thesis which started reformation.");

  questions_reformation[2].question = "Why did Henry VII Break from the church?";
  questions_reformation[2].opts.answer = "Because he wanted to divorce and mary another wife.";
  questions_reformation[2].opts.mc.attempts[0].assign("No role what so ever.");
  questions_reformation[2].opts.mc.attempts[1].assign("No reason");
  questions_reformation[2].opts.mc.attempts[2].assign("Because he wanted to divorce and mary another wife.");
  questions_reformation[2].opts.mc.attempts[3].assign("Was a priest who made the 95-thesis which started reformation.");

  questions_reformation[3].question = "Who was John Calvin?";
  questions_reformation[3].opts.answer = "French theologian , who  was a principal figure in the development of the system of Christian theology later called Calvinism.";
  questions_reformation[3].opts.mc.attempts[0].assign("French theologian , who  was a principal figure in the development of the system of Christian theology later called Calvinism.");
  questions_reformation[3].opts.mc.attempts[1].assign("Priest who was an enlightned thinker.");
  questions_reformation[3].opts.mc.attempts[2].assign("No one.");
  questions_reformation[3].opts.mc.attempts[3].assign("That pants brand.");


  questions_reformation[4].question = "What descions were made in the council of Trent?";
  questions_reformation[4].opts.answer = "Catholics and Protestants went against the rise of Reformation.";
  questions_reformation[4].opts.mc.attempts[0].assign("Catholics and Protestants went against the rise of Reformation.");
  questions_reformation[4].opts.mc.attempts[1].assign("None.");
  questions_reformation[4].opts.mc.attempts[2].assign("that the world will end so we need to get prepared.");
  questions_reformation[4].opts.mc.attempts[3].assign("elightment thinkers should be executed.");

  questions_reformation[5].question = "What were the major effects of Reformation?";
  questions_reformation[5].opts.answer = "Authority should be delievered by the bible not the pope.";
  questions_reformation[5].opts.mc.attempts[0].assign("Authority should be delievered by the bible not the pope.");
  questions_reformation[5].opts.mc.attempts[1].assign("95-thesis");
  questions_reformation[5].opts.mc.attempts[2].assign("Ended the world");
  questions_reformation[5].opts.mc.attempts[3].assign("executed enlightment thinkers.");

  questions_exploration[0].question = "Who was the chiniese explorer of the Ming Dynasity.";
  questions_exploration[0].opts.answer = "Zheng he.";
  questions_exploration[0].opts.mc.attempts[0].assign("Zheng he.");
  questions_exploration[0].opts.mc.attempts[1].assign("Donald Trump.");
  questions_exploration[0].opts.mc.attempts[2].assign("John Calvin.");
  questions_exploration[0].opts.mc.attempts[3].assign("None.");

  questions_exploration[1].question = "What capital city of the Byzantine empire was conquered by the Ottoman Turks.";
  questions_exploration[1].opts.answer = "Istanbul";
  questions_exploration[1].opts.mc.attempts[0].assign("China City.");
  questions_exploration[1].opts.mc.attempts[1].assign("Donald Trump City.");
  questions_exploration[1].opts.mc.attempts[2].assign("Istanbul");
  questions_exploration[1].opts.mc.attempts[3].assign("None.");

  questions_exploration[2].question = "How did this event lead to European exploration?";
  questions_exploration[2].opts.answer = "Narrowed land , so want to get more land.";
  questions_exploration[2].opts.mc.attempts[0].assign("Narrowed land , so want to get more land.");
  questions_exploration[2].opts.mc.attempts[1].assign("Cause they can.");
  questions_exploration[2].opts.mc.attempts[2].assign("There was no European exploration.");
  questions_exploration[2].opts.mc.attempts[3].assign("None.");

  questions_exploration[3].question = "How were Marco Polo's writings influential to future European explorers.";
  questions_exploration[3].opts.answer = "Wrote a book about his travels, that inspired other explorers.";
  questions_exploration[3].opts.mc.attempts[0].assign("It wasnt inspiring.");
  questions_exploration[3].opts.mc.attempts[1].assign("Wrote a book about his travels, that inspired other explorers.");
  questions_exploration[3].opts.mc.attempts[2].assign("There was no European exploration.");
  questions_exploration[3].opts.mc.attempts[3].assign("None.");

  questions_exploration[4].question = "What is the signifcance of Christopher Columbus?";
  questions_exploration[4].opts.answer = "Came to the America's. Traveled many places.";
  questions_exploration[4].opts.mc.attempts[0].assign("By the first to get to North America");
  questions_exploration[4].opts.mc.attempts[1].assign("Wrote a book about his travels, that inspired other explorers.");
  questions_exploration[4].opts.mc.attempts[2].assign("No significance");
  questions_exploration[4].opts.mc.attempts[3].assign("Came to the America's. Traveled many places.");

  questions_exploration[5].question = "What was the line of Demarcation?";
  questions_exploration[5].opts.answer = "The Line of Demarcation between Spanish and Portuguese territory was first defined by Pope Alexander VI (1493) and was later revised by the Treaty of Tordesillas (1494). Spain won control of lands discovered west of the line, while Portugal gained rights to new lands to the east.";
  questions_exploration[5].opts.mc.attempts[0].assign("Straight line crossed with a Diagonal line.");
  questions_exploration[5].opts.mc.attempts[1].assign("The Line of Demarcation between Spanish and Portuguese territory was first defined by Pope Alexander VI (1493) and was later revised by the Treaty of Tordesillas (1494). Spain won control of lands discovered west of the line, while Portugal gained rights to new lands to the east.");
  questions_exploration[5].opts.mc.attempts[2].assign("Line that seperrated east and west berlin.");
  questions_exploration[5].opts.mc.attempts[3].assign("Nothing");

  questions_exploration[6].question = "What was notable of Vasco de Gama , Magellan, Cortez, and Pizarro?";
  questions_exploration[6].opts.answer = "Vasco de Gama Was the first to reach India by sea , Magellan discovered the straight of Magellan , Cortez defeated Aztec Empire, and Pizarro discovered the Incan empire.";
  questions_exploration[6].opts.mc.attempts[0].assign("They all are explorers.");
  questions_exploration[6].opts.mc.attempts[1].assign("They all were men.");
  questions_exploration[6].opts.mc.attempts[2].assign("Vasco de Gama Was the first to reach India by sea , Magellan discovered the straight of Magellan , Cortez defeated Aztec Empire, and Pizarro discovered the Incan empire.");
  questions_exploration[6].opts.mc.attempts[3].assign("Nothing Notable.");

  questions_exploration[7].question = "About how many slaves were brought from Afria to the Americas in total?";
  questions_exploration[7].opts.answer = "12.5 Million";
  questions_exploration[7].opts.mc.attempts[0].assign("12.5 Million");
  questions_exploration[7].opts.mc.attempts[1].assign("10 thousand");
  questions_exploration[7].opts.mc.attempts[3].assign("100 million.");
  questions_exploration[7].opts.mc.attempts[2].assign("1 million.");

  questions_exploration[8].question = "What were causes and events of Atlantic Slave trade?";
  questions_exploration[8].opts.answer = "Enormous demand for labor in the plantations.";
  questions_exploration[8].opts.mc.attempts[0].assign("Unknown cause");
  questions_exploration[8].opts.mc.attempts[1].assign("Enormous demand for labor in the plantations.");
  questions_exploration[8].opts.mc.attempts[3].assign("Cause was the white people felt superior.");
  questions_exploration[8].opts.mc.attempts[2].assign("Atlantic Slave trade didnt happen.");

  questions_exploration[9].question = "What was the triangluar slave trade?";
  questions_exploration[9].opts.answer = "transatlantic slave trade, that operated from the late 16th to early 19th centuries";
  questions_exploration[9].opts.mc.attempts[0].assign("Transatlantic slave trade, that operated from the late 16th to early 19th centuries");
  questions_exploration[9].opts.mc.attempts[1].assign("There was no slave trade.");
  questions_exploration[9].opts.mc.attempts[3].assign("Cause was the white people felt superior.");
  questions_exploration[9].opts.mc.attempts[2].assign("Atlantic Slave trade didnt happen.");

  questions_exploration[10].question = "Define Columbian Exchange.";
  questions_exploration[10].opts.answer = "The Columbian Exchange was the widespread transfer of plants, animals, culture, human populations, technology, and ideas between the Americas and the Old World in the 15th and 16th centuries.";
  questions_exploration[10].opts.mc.attempts[0].assign("Columbian Exchange was an exchange of goods between Columbia and Prince George County.");
  questions_exploration[10].opts.mc.attempts[1].assign("The Columbian Exchange was the widespread transfer of plants, animals, culture, human populations, technology, and ideas between the Americas and the Old World in the 15th and 16th centuries.");
  questions_exploration[10].opts.mc.attempts[3].assign("There is no such thing as the Columbian Exchange.");
  questions_exploration[10].opts.mc.attempts[2].assign("It was a trade.");



 question_absolutism[0].question = "Who were the absolute monarch we studied?";
 question_absolutism[0].opts.answer = "Louis XVI and Mary Antoinette";
 question_absolutism[0].opts.mc.attempts[0].assign("Donald and Melina Trump.");
 question_absolutism[0].opts.mc.attempts[1].assign("Henry VII");
 question_absolutism[0].opts.mc.attempts[3].assign("Louis XVI and Mary Antoinette");
 question_absolutism[0].opts.mc.attempts[2].assign("Ms.Wallen");

 question_absolutism[1].question = "How did england change after the glorious revolution?";
 question_absolutism[1].opts.answer = "Replaced king james II , and stopped Catholic Succession.";
 question_absolutism[1].opts.mc.attempts[0].assign("No such revolution.");
 question_absolutism[1].opts.mc.attempts[1].assign("England started to have a powerfull military.");
 question_absolutism[1].opts.mc.attempts[3].assign("Replaced king james II , and stopped Catholic Succession.");
 question_absolutism[1].opts.mc.attempts[2].assign("England became a threat to the world.");

 question_absolutism[2].question = "Who was the most powerfull in Absolute Monarchy of France?";
 question_absolutism[2].opts.answer = "Clergy and Church People.";
 question_absolutism[2].opts.mc.attempts[0].assign("The majority of population");
 question_absolutism[2].opts.mc.attempts[1].assign("Clergy and Church People.");
 question_absolutism[2].opts.mc.attempts[3].assign("Royal Family.");
 question_absolutism[2].opts.mc.attempts[2].assign("The Pope.");

 question_absolutism[3].question = "What were the first, second and third estates?";
 question_absolutism[3].opts.answer = "First estate were the most powerfull who were catholic clergy , followed by second estate which was royal family which also were powerfull and didnt have to pay tax. Third estate made majority but very poor and had to pay taxes.";
 question_absolutism[3].opts.mc.attempts[0].assign("First estate were least powerfull(most population) , second being second least powerfull (royal), and third being most powerfull(clergy)");
 question_absolutism[3].opts.mc.attempts[1].assign("First estate were the most powerfull who were catholic clergy , followed by second estate which was royal family which also were powerfull and didnt have to pay tax. Third estate made majority but very poor and had to pay taxes.");
 question_absolutism[3].opts.mc.attempts[3].assign("There is no concept of estates.");
 question_absolutism[3].opts.mc.attempts[2].assign("First estate were least powerfull(royal) , second being second least powerfull (clergy), and third being most powerfull(most population)");


}

/*Tutorial: https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=52s */

/* Hello World Program
#include <iostream>

using namespace std;

int main()
{
  cout << "Hello world!" << endl;
  return 0;
}
*/

/*Drawing a Shape
#include <iostream>

using namespace std;

int main()
{
  cout << "   /|" << endl;
  cout << "  / |" << endl;
  cout << " /  |" << endl;
  cout << "/___|" << endl;

  return 0;
}
*/

/* Variables

#include <iostream>

using namespace std;

int main()
{
  string characterName = "John";
  int CharacterAge;
  CharacterAge = 35;
  cout << "There once was a man named " << characterName << endl;
  cout << "He was " << CharacterAge << " years old." << endl;
  cout << "He liked the name " << characterName << endl;
  cout << "But did not like being " << CharacterAge << endl;

  return 0;
}

*/

/* Variables Part 2

#include <iostream>

using namespace std;

int main()
{
  char grade = 'A';
  string phrase = "Giraffe Academy";
  int age = 50;
  int neg = -3;
  double gpa = 3.9;
  bool isMale = true;


  return 0;
}
*/

/*Strings

#include <iostream>

using namespace std;

int main()
{
  string phrase = "Giraffe Academy";
  cout << phrase.length() << endl;
  cout << phrase[4] << endl;
  cout << phrase.find('Academy', 0);
  string phrasesub = phrase.substr(8, 3);
  cout << phrasesub;

  return 0;
}

/* Numeric Variables
Math between 2 integers will give an interger answer.*/
#include <iostream>
#include <cmath> //packages

using namespace std;

int main()
{
  int wnum = 5;
  double dnum = 5.5;

  wnum ++; //Add 1
  cout << wnum << endl;
  wnum --; // Subtract 1
  cout << wnum << endl;
  wnum += 70; //Add 70
  cout << wnum << endl;
  wnum -=3; // Subtract 3
  cout << wnum << endl;

  cout << pow(2, 5) << endl; //Exponents
  cout << sqrt(36) << endl; //Square Root (will return double, even if int arg))
  cout << round(4.6) << endl; //Rounds the number
  cout << round(4.4) << endl; //Rounds the number
  cout << ceil(4.1) << endl; // Ceiling Function
  cout << floor(4.8) << endl; //Floor Function
  cout << fmax(3, 10) << endl; //Max Function
  cout << fmin(3, 10) << endl; //Min Function

  return 0;
}

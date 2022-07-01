/*
 Guidelines for choosing good passwords are typically designed to make passwords harder to discover by intelligent guessing. Common guidelines advocated by proponents of software system security include:
 Use a minimum password length of 20 or more characters if permitted.
 Include lowercase and uppercase alphabetic characters, numbers and symbols if permitted.
 Generate passwords randomly where feasible.
 Avoid using the same password twice (e.g., across multiple user accounts and/or software systems).
 Avoid character repetition, keyboard patterns, dictionary words, letter or number sequences.
 Avoid using information that is or might become publicly associated with the user or the account, such as username, ancestors' names or dates.
 Avoid using information that the user's colleagues and/or acquaintances might know to be associated with the user, such as relative or pet names, romantic links (current or past) and biographical information (e.g., ID numbers, ancestors' names or dates)..
 Do not use passwords which consist wholly of any simple combination of the aforementioned weak components.
 */
#include <iostream>
#include <string>
#include <random>
#include <algorithm>

void prompts();

int main() {
	
	int minAmount, maxAmount, upperAmount, lowerAmount, numAmount, uniqueAmount;
	std::random_device random;
	std::mt19937 generator(random());
	std::uniform_int_distribution<int>numberDis(0,9);
	std::uniform_int_distribution<int>lowerDis(0,25);
	std::uniform_int_distribution<int>upperDis(0,25);
	std::uniform_int_distribution<int>uniqueDis(0,31);
	
	
	std::string numbersArr[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	std::string lowercaseArr[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n",
		"o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
	std::string uppercaseArr[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N",
		"O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
	std::string uniqueArr[] = {"!", "\"", "#", "$", "%", "&", "'", "(", ")", "*", "+", ",", "-", ".",
		"/", ":", ";", "<", "=", ">", "?", "@", "[", "\\", "]", "^", "_", "`", "{", "|", "}", "~"};
	
	prompts();
	
	std::cout << "\nMINIMUM LENGTH: ";
	std::cin >> minAmount;
	std::cout << "\nMAXIMUM LENGTH: ";
	std::cin >> maxAmount;
	std::cout << "\nTOTAL NUMBERS: ";
	std::cin >> numAmount;
	std::cout << "\nTOTAL LOWERCASE LETTERS: ";
	std::cin >> lowerAmount;
	std::cout << "\nTOTAL UPPERCASE LETTERS: ";
	std::cin >> upperAmount;
	std::cout << "\nTOTAL UNIQUE LETTERS: ";
	std::cin >> uniqueAmount;
	
	//randomally select a total number of characters from each category
	//then fill them into one array
	//then randomize that array again
	
	std::string numbersFinal[numAmount];
	std::string lowercaseFinal[lowerAmount];
	std::string uppercaseFinal[upperAmount];
	std::string uniqueFinal[uniqueAmount];
	std::string password = "";
	
	std::cout << "\n\npassword:" << std::endl;
	
	//NUMBERS......................................................................................................................................
	for (int i = 0; i < numAmount; i++) {
		numbersFinal[i] = numbersArr[numberDis(generator)];
		std::cout << numbersFinal[i];
		if (i == numAmount - 1){
			std::cout << '-';
		}
	}
	//UNQIUE........................................................................................................................................
	for (int i = 0 ; i < uniqueAmount; i++){
		uniqueFinal[i] = uniqueArr[uniqueDis(generator)];
		std::cout << uniqueFinal[i];
		if (i == uniqueAmount - 1){
			std::cout << '-';
		}
	}
	//LOWERCASE....................................................................................................................................
	for (int i = 0 ; i < lowerAmount; i++){
		lowercaseFinal[i] = lowercaseArr[lowerDis(generator)];
		std::cout << lowercaseFinal[i];
		if (i == lowerAmount - 1){
			std::cout << '-';
		}
	}
	//UPPERCASE....................................................................................................................................
	for (int i = 0; i < upperAmount; i++) {
		uppercaseFinal[i] = uppercaseArr[upperDis(generator)];
		std::cout << uppercaseFinal[i];
		if (i == upperAmount - 1){
			std::cout << '-';
		}
	
		std::cout << "\n\n\n" << std::endl;
	
	
	
		return(0);
}

}


void prompts() {
	
	std::cout << "\nWELCOME TO THE PASSWORD GENERATOR";
	std::cout << "\n‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾";
	std::cout << "\nTHIS PROGRAM WILL GENERATE A PSEUDO RANDOMALLY GENERATED PASSWORD BASED ON A CRITERIA YOU SET.";
	std::cout << "\nTHE FOLLOWING IS THE ASCII STANDARD VALUE CHARACTER SET, WITH WHICH YOUR PASSWORD WILL DERIVE FROM.";
	std::cout << "\n\nCHARACTER SET\n‾‾‾‾‾‾‾‾‾‾‾‾‾\n";
	std::cout << "NATURAL NUMBERS:      0 1 2 3 4 5 6 7 8 9\n\n";
	std::cout << "LOWERCASE LETTERS:    a b c d e f g h i j k l m n o p q r s t u v w x y z\n\n";
	std::cout << "UPPERCASE LETTERS:    A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n\n";
	std::cout << "SPECIAL CHARACTERS:   ! \" # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \\ ] ^ _ ` { | } ~";
	std::cout << "\n\nPASSWORD CRITERIA\n‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾";
	
}

/*
 
 sogmas-pokqyf-wexWy6
 
 Password Generator
 
 ! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _ ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~
 
 Natural Numbers
 0 1 2 3 4 5 6 7 8 9
 
 Lowercase Letters
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 
 Uppercase Letters
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 
 Special Characters:
 ! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~
 
 
 
 IBM Password Guidelines
 Do not use your user ID as a password.
 Do not use it reversed, doubled, or otherwise modified.
 Do not reuse passwords. The system might be set up to deny the reuse of passwords.
 Do not use any person's name as your password.
 Do not use words that can be found in the online spelling-check dictionary as your password.
 Do not use passwords shorter than six characters.
 Do not use obscene words; they are some of the first ones checked when guessing passwords.
 Do use passwords that are easy to remember, so you won't have to write them down.
 Do use passwords that use both letters and numbers and that have both lowercase and uppercase letters.
 Do use two words, separated by a number, as a password.
 Do use pronounceable passwords. They are easier to remember.
 Do not write passwords down. However, if you must write them down, place them in a physically secure place, such as a locked cabinet.
 
 ASCII (American Standard Code for Information Interchange) is the most common format for text files in computers and on the Internet. In an ASCII file, each alphabetic, numeric, or special character is represented with a 7-bit binary number (a string of seven 0s or 1s).
 
 
 " \"world\""
 
 WOULD YOU LIKE A DEFINITION OF "ASCII VALUE CHARACTER SETS"?
 ENTER YES OR NO:
 WOULD YOU LIKE A CONCEPT DEFINITION OF "PSEUDO RANDOMALLY GENERATED PASSWORD"?
 ENTER YES OR NO:
 WOULD YOU LIKE A COLLOQUIAL OR TECHNICAL DEFINITION OF PSEUDO RANDOMIZED PASSWORD GENERATION?
 ENTER YES OR NO:
 
 */

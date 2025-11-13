#include <iostream>
#include <string>
#include <algorithm>  
#include <cctype> 
#include <cstdlib>
#include <thread>
#include <chrono>

void reason(std::string cause) {
	std::cout << "You died to " << cause << std::endl;
}

void victory(std::string win) {
	std::cout << "CONGRATS YOU WON" << std::endl;
	std::cout << "You won by " << win << std::endl;
}

void gameover(std::string cause) {
	std::cout << "|GAME OVER|" << std::endl;
	reason(cause);
}
void camp() {
	system("cls");
	std::cout << "You decide to go camping in the nearby woods." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << "You enter the pitch black paths of the forest. A dark shroud comsuming you as you progres." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << "You find the perfect spot for camp and for the next hours you set up your tent and fire, then rest." << std::endl;
}

int main() {
	std::string death1 = "being torn to shreds by the creture in the dark";
	std::string death2 = "going left and falling into a pit of spikes";
	std::string death3 = "slowing down before you got to the cabin and it caught up";
	std::string death4 = "by getting a hole blown through your chest";
	std::string win1 = "not going camping";
	std::string win2 = "sleeping. Making the creature think you were dead";
	std::string win3 = "hidding in the basment rest of your life becasue it locked you in and you died";
	std::string camping;
	std::string encounter;

	std::cout << "Would you like to go camping?" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << "'yes' or 'no' ";
	std::getline(std::cin, camping);
	std::transform(camping.begin(), camping.end(), camping.begin(), ::tolower);

	if (camping == "yes") {
		camp();
		std::this_thread::sleep_for(std::chrono::seconds(3));
		std::cout << "Then." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "A noise." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "From the bushes." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(2));
		std::cout << "Do you 'ignore' it 'investagate' or go to 'sleep'? ";
		std::getline(std::cin, encounter);
		std::transform(encounter.begin(), encounter.end(), encounter.begin(), ::tolower);

		if (encounter == "ignore") {
			system("cls");
			gameover(death1);
		}
		else if (encounter == "investagate") {
			system("cls");
			std::cout << "THIS IS A TEST" << std::endl;
		}
		else if (encounter == "sleep") {
			system("cls");
			victory(win2);
			std::cout << "_______________\n|SECRET ENDING|\n---------------" << std::endl;
		}

	}

	if (camping == "no") {
		system("cls");
		victory(win1);
		std::cout << "_______________\n|SECRET ENDING|\n---------------" << std::endl;
	}

	return 0;
}
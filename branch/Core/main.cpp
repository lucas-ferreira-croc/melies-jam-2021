#include <iostream>
#include <Windows.h>
#include <map>
#include <vector>
#include <string>
#include <thread>
#include <chrono>
#include <fstream>

#include "employee.h"

void menuSound() 
{
	while (true) 
	{
		Beep(261, 200);
		Beep(293, 200);
		Beep(329, 200);
	}

}

void displayCroc(HANDLE& hConsole)
{
	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "                                                             mmmmmmmmmmmm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "                                                            dhhhhhhhhhhhh" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "                                                         dhhhhhhhhhhhhhhhhhh" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "                                                         dhhhdddddhhhhhhhhhhNNNNNNNNN" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "                                   dhhhhhhhhhhhh         dhhm     mhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "                                mddhhhhhhhhhhhhhdddddddddhhhm     mhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "                                dhhhhhhhhhhhhhhhhhhhhhhhhhhhm     mhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "                                dhhm     mhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "                                dhhm     mhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "                                dhhm     mhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "                             dhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "                          NNNhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "                          hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "                       dddhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "	              Nhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));


	std::cout << "                   Nhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	std::cout << "                Nmmdhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";

	SetConsoleTextAttribute(hConsole, 5);
	std::cout << "hhhhhhhhhhhh";

	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "hhhhhhhhm" << std::endl;
	
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "                mhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";

	SetConsoleTextAttribute(hConsole, 5);
	std::cout << "hhhhhhhhhhhhhhh";

	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "hhhhhhhhm" << std::endl;

	std::cout << "             mhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	SetConsoleTextAttribute(hConsole, 5);
	std::cout << "hhhhhhhhhhhhhhh";

	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "hhhhhhhhN" << std::endl;

	std::cout << "          NNNdhhhhhhhhyyyyhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
	SetConsoleTextAttribute(hConsole, 5);
	std::cout << "hhhhhhhhhhhdddddddd";
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "ddddddddN" << std::endl;

	std::cout << "          dhhhhhhhhhhhyooohhhhhhhhhhhhhhhhhhhhhhhhhh";
	SetConsoleTextAttribute(hConsole, 5);
	std::cout << "hhhhhhhhhhhhhhm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));


	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "       mddhhhhhhyssshhyyyyhhhhhhhhhhhhhhhhhhhh";

	SetConsoleTextAttribute(hConsole, 5);
	std::cout << "hhhhhhhhhhhh";
	std::cout << "hhmNNNNNN" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "       dhhhhhhhhyssshhhhhhhhhhhhhhhhhhhhhhh";

	SetConsoleTextAttribute(hConsole, 5);
	std::cout << "hhhhhhhhhhhddddddN" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "       dhhhhhhhhhyyyhhhhhhhhhhhhhhhhh";

	SetConsoleTextAttribute(hConsole, 5);
	std::cout << "hhhhhhhhhhhhhhhhhN" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "       mmmmmmdhhhhhhhhhhhhhhhhh";

	SetConsoleTextAttribute(hConsole, 5);
	std::cout << "hhhhhhhhhhhhhdmmmmmmmmm" << std::endl;
	std::cout << "             mhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhd" << std::endl;

	std::cout << "\n" << "\n" << "\n";

	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\t \t hhhhhhhhhh  mhhhhhhhd  hhhhhhhhhh  dhhhhhhhhhd" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\t \t hh          mhm   mhd  hd      dh  dh" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\t \t hh          mhm mdhhd  hd      dh  dh" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\t \t hh          mhm mhd    hd      dh  dh" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\t \t hhdddddddd  mhm   mdm  hhddddddhh  dhddddddddm" << std::endl;

	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\n" << "\n" << "\n";

	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\t dddddddddd  dddddddddm  dm     md  mddddddm    dm  ddddddddd  dddddddddd" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\t mh              hd      hm     dh  dh      dm  hm  hm     dh  mh" << std::endl;;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\t mhdddddddd      hd      hm     dh  dh      hd  hm  hm     dh  dhdddddddm" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\t         hd      hm      dh     dh  hd      hm  dh  md     md          mh" << std::endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(100));
	std::cout << "\t Nddddddddh      hd      hdddddddh  dhdddddm    hm  hdddddddh  ddddddddhm" << std::endl;

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));

}

void writeText(std::string text, int textSpeed = 0, bool jumpLine = true) 
{
	for (char c : text) 
	{
		std::cout << c;
		Beep(261, 1);
		switch (textSpeed) 
		{
			case 0:
			  std::this_thread::sleep_for(std::chrono::milliseconds(50));
			  break;
			
			case 1:
			  std::this_thread::sleep_for(std::chrono::milliseconds(100));
			  break;

			case 2:
				std::this_thread::sleep_for(std::chrono::milliseconds(10));
				break;

			case 3:
				std::this_thread::sleep_for(std::chrono::milliseconds(500));
				break;
		}
	}
	
	if(jumpLine)
		std::cout << std::endl;
}

void welcome(HANDLE hConsole)
{

		SetConsoleTextAttribute(hConsole, 5);

		std::cout << std::endl << std::endl;

	    std::cout << "\t        hd          hm  mhdddddddd  dh          hhdddddddm  hhddddddhm  hm     mh  mhdddddddd" << std::endl;
		std::cout << "\t        hd    dm    hm  mh          dh          hh          hd      hm  hddm mddh  mh" << std::endl;
		std::cout << "\t        dm    dm    dm  mhdddddddd  dh          hh          hd      hm  hm  d  mh  mhdddddddd" << std::endl;
		std::cout << "\t          dm  dm  dm    mh          dh          hh          hd      hm  hm     mh  mh" << std::endl;
		std::cout << "\t            dm  dm      Nddddddddd  mddddddddd  mddddddddm  hdddddddhm  md     md  mddddddddd" << std::endl;

		std::cout << std::endl << std::endl;

		std::cout << "\t                                         mmmmhhmmmm  hdhdhdhdhd" << std::endl;
		std::cout << "\t                                             dh      hd      hd" << std::endl;
		std::cout << "\t                                             dh      hd      hd" << std::endl;
		std::cout << "\t                                             dh      hd      hd" << std::endl;
		std::cout << "\t                                             dm      hdhdhdhdhd" << std::endl;
		
		std::cout << std::endl << std::endl;

		std::cout << "\t                dhdhdhdh   dhdhdhd   dhdhdhdhdh  hh      hd  hhdddddddd  mh      mm" << std::endl;
		std::cout << "\t                hd     md  mhm   dh  dh      dh  hhdm    hd  hh          mh      mh" << std::endl;
		std::cout << "\t                hdddddddh  mhm mddh  dhddddddhh  hh  dm  hd  hh          mhdddddddh" << std::endl;
		std::cout << "\t                hd     mh  mhm mhm   dh      dh  hh    ddhd  hh          mh      dh" << std::endl;
		std::cout << "\t                hhdddddm   mhm   md  dh      dh  hh      hd  mddddddddm  mh      mh" << std::endl;

}


class game 
{
public:
	inline void setRunning(bool running) { m_Running = running; }
	inline bool isRunning() { return m_Running; }

	inline void setGameMode(int gameMode) { m_GameMode = gameMode; }
	inline int getGameMode() { return m_GameMode; }

	inline void setEmployeeCode(int employeeCode) { m_EmployeeCode = employeeCode; }
	inline int getEmployeeCode() { return m_EmployeeCode; }

private:
	int m_GameMode;
	bool m_Running = true;
	bool m_FreshMeat = false;
	int m_EmployeeCode;
};

const std::string clownName = "pagliacci";
const std::string wizardName = "vendebor";

int main()
{
	HANDLE hConsole;
	game game;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	displayCroc(hConsole);
	system("cls");
	
	int gameMode = -1;
	int employeeCode = -1;
	bool chooseGameMode = false;
	bool chooseToParticipate = false;
	bool chooseWhatToLearn = false;
	bool chooseProfession = false;
	//std::thread th1(menuSound);

	while (game.isRunning()) 
	{
		while (!chooseGameMode) 
		{
			system("cls");
			welcome(hConsole);

			SetConsoleTextAttribute(hConsole, 2);

			std::cout << std::endl << std::endl;

			std::cout << "\t \t \t \t \t \t 1. Play" << std::endl;
			std::cout << "\t \t \t \t \t \t 2. Enter employee code" << std::endl;
			std::cout << "\t \t \t \t \t \t 3. Quit" << std::endl;

			std::cin >> gameMode;

			switch (gameMode) 
			{
				case 1:
					writeText(" \n \n starting game", 2, false );
					writeText(" . . . .", 3);
					chooseGameMode = true;
					break;

				case 2:
					std::cout << std::endl << std::endl << "Please, enter your employee code: " << std::endl;
					std::cin >> employeeCode;
					
					switch (employeeCode) 
					{
						case 1:
							std::cout << "So you're the magician" << std::endl;
							game.setEmployeeCode(employeeCode);
							game.setGameMode(2);
							chooseGameMode = true;

							break;
						case 2:
							std::cout << "So you're the clown" << std::endl;
							game.setEmployeeCode(employeeCode);
							chooseGameMode = true;
							break;
						default:
							std::cout << "Oh Rookie, it looks like you're not an employee. Yet." << std::endl;
					}
					return 0;
					break;

				case 3:
					std::terminate();
					return 0;
					break;
			}
		} 
		system("cls");
		
		std::string birthName;

		game.setGameMode(gameMode);
		
		Employee employee;
		int choice = -1;
		
		switch (game.getGameMode()) 
		{
			case 1:
				std::cout << "Alastor: ";  writeText("Welcome to Ygg, our humble Circus!", 2);
				std::cout << "Alastor: ";  writeText("What's your name child?", 2);
				
				std::cout << "Please Enter your name (and then, press enter): ";
				std::cin >> birthName;

				employee.setBirthName(birthName);

				writeText(birthName + ". . . what a lovely name", 1);

				std::cout << "Alastor: "; writeText(" So, " +  employee.getBirthName() + " if you're here, I think you already know about the Ygg circus, am I right?");
				
				std::cout << "1. Yes, I'm not a Rookie!" << std::endl;
				std::cout << "2. No, I'm a newcomer" << std::endl;
				std::cin >> choice;

				if (choice == 1)
				{
					system("cls");
					std::cout << "Alastor: "; writeText("Off course, how sily could I be... hehe");
					writeText("If that's the case, you should know the keyword for employees. please, say it: ");
					std::string keyword;
					std::cout << "Please Enter the employee keyword: ";
					std::cin >> keyword;
					std::cout << std::endl;

					if (keyword == "drasil")
					{	
						if ((employee.getBirthName() == wizardName || employee.getBirthName() == clownName)) 
						{
							std::cout << "Alastor: "; writeText("I see, welcome my fellow!");
							std::cout << "Alastor: "; writeText("If you came to talk with me..., that might mean . . .  FRESH MEAT?");
							std::cout << "Alastor: "; writeText("I love it, I FUCKING love it, show me the new One, bring it to me");
							std::cout << "Alastor: "; writeText("I hope that this child is as sily as you were my darling...");
							std::cout << "Alastor: "; writeText("I'll restart my presentation.", false);
							writeText(" 3 2 1", false);
							writeText("... bye ", 3);
							chooseGameMode = false;
						}
						else
						{
							std::cout << "Alastor: "; writeText("Oh darling... I see...");
							std::cout << "Alastor: "; writeText("You're one of them, aren't you?");
							std::cout << "Alastor: "; writeText("YOU CHEATED");
							std::cout << "Alastor: "; writeText("You nearly fooled me in my own game...");
							std::ofstream file;
							file.open("YOU'RE A LIAR, YOU CHEATED.txt");
							
							for (int i = 0; i < 10000; i++)
								file << "YOU'RE A LIAR, YOU CHEATED! \n";
							file.close();
							return 0;
						}
					}
					else 
					{
						std::cout << "Alastor: "; writeText("Oh darling... I see you're confused, let me help you by telling the history of the Ygg Circus");
						choice = 2;
					}
				}
				else if(choice == 2)
				{
					system("cls");
					std::cout << "Alastor: "; writeText("Let me tell the story of the Ygg Circus");
					std::cout << "Alastor: "; writeText("It all started 5000 thousand years ago");
					std::cout << "Alastor: "; writeText("Our founder was the first Alastor... that reminds me that I Haven't introduced myself");
					std::cout << "Alastor: "; writeText("Our founder was the first Alastor... that reminds me that I Haven't introduced myself");
					std::cout << "Alastor: "; writeText("My name is Alastor! I'm the 454th Alastor!");
					std::cout << "Alastor: "; writeText("It's an gigantic honor to be an Alastor, but it's also a quite heavy burden");
					std::cout << "Alastor: "; writeText("Being an Alastor means that you're responsible for everyone in the circus besides taking care of the whole show");

					std::cout << "Alastor: "; writeText("Well " + employee.getBirthName() + ", I'm happy you're, would you like to be a part of the Ygg Circus?");

					do {
						std::cout << "1. Yes, I'd like to be a part of the team" << std::endl;
						std::cout << "2. No, I'd like to think a bit" << std::endl;
						std::cin >> choice;

						switch (choice)
						{
						case 1:
							std::cout << "Alastor: "; writeText(employee.getBirthName() + " You just made my day! let's talk about what you should do to prove your worth");							
							std::cout << "Alastor: "; writeText("Oh... I'm sorry if I sounded rude, I didn't mean you're not worth, but we need to know a bit more about you, rigt?");
							std::cout << "Alastor: "; writeText("First of all, you need to know that if you will be working with us, you'll have to abandon your current name");
							std::cout << "Alastor: "; writeText("You'll need to accept a title.");
							std::cout << "Alastor: "; writeText("From now on, you'll be known as 'The wanderer'");
							std::cout << "Alastor: "; writeText("But it all depends on which path you intend to follow, there are many, but now there only three remaining.");
							
							std::cout << "Alastor: "; writeText("Wizard.");
							std::cout << "Alastor: "; writeText("Pierrot.");

							std::cout << "Alastor: "; writeText("Which one of them do you wanna know more about?");
							
							chooseToParticipate = false;
							do {
								std::cout << "1. Wizard";
								std::cout << "2. Pierrot";
								std::cout << "3. I already know what I wanna";

								std::cin >> choice;

								switch (choice) 
								{
									case 1:
										employee.setProfession("wizard");
										std::cout << "Alastor: "; writeText("I love talking about the wizard, I almost took that option when it was my time");
										std::cout << "Alastor: "; writeText("The wizard is knowm as the wiser person in the Circus");
										std::cout << "Alastor: "; writeText("At the show, they usually perfom beautiful spells, all sort of magic you think off");
										std::cout << "Alastor: "; writeText("Fake fire Dragons, Sensient rock Golens, water Behemots and so on");
										std::cout << "Alastor: "; writeText("If you seek knowledge of all the things and domain of the elements, wizard might be your choice", false);
										writeText(". . . . .", 3);
										system("cls");
										break;

									case 2:
										employee.setProfession("pierrot");
										std::cout << "Alastor: "; writeText("The Pierrot is a singular character");
										std::cout << "Alastor: "; writeText("The Pierrot is known as the circus's heart");
										std::cout << "Alastor: "; writeText("At the show, they usually perfom sily jokes, stupid dances and a sily monnologue");
										std::cout << "Alastor: "; writeText("He brings you inner child back, that one child that is long forgotten");
										std::cout << "Alastor: "; writeText("If you keen to help people feel lighter and happy, pierrot might be your choice", false);
										writeText(". . . . .", 3);
										system("cls");
										break;
									case 3:
										
										system("cls");
										if (employee.getProfession() == "wizard" || employee.getProfession() == "pierrot") 
										{
											std::cout << "Alastor: "; writeText("Sure, I'm already talking too much . . . hehe");
										}
										else 
										{
											std::cout << "Alastor: "; writeText("You seem to be the kind of person who don't enjoy small talk");
										}

										do{
											system("cls");
											std::cout << "Alastor: "; writeText("So, what's your choice?");
											std::cout << "1. Wizard";
											std::cout << "2. Pierrot";
											std::cin >> choice;

											switch (choice)
											{
											case 1:
												std::cout << "Alastor: "; writeText("I'm utterly glad you chose the path of the wizard");
												std::cout << "Alastor: "; writeText("Know you must talk to the wizard, he'll aid you from know on");
												std::cout << "Alastor: "; writeText("But do not fear, we shall talk again");
												std::cout << "Alastor: "; writeText("soon");
												std::cout << "Alastor: "; writeText("He's on the wizard Branch, go talk to him");
												std::cout << "Alastor: "; writeText("Use the keycode" + wizardName + " when you get there, okay?");
												std::cout << "Alastor: "; writeText("I'll write it down for you, do not worry");
												std::cout << "Alastor: "; writeText("See you, wanderer");
												std::cout << "Alastor: "; writeText("bye", 1);
												std::cout << "Alastor: "; writeText(". . . . .", 3);
												break;
											case 2:
												std::cout << "Alastor: "; writeText("I'm quite glad you chose the path of the pierrot");
												std::cout << "Alastor: "; writeText("Know you must talk to the pierrot, he'll aid you from know on");
												std::cout << "Alastor: "; writeText("But do not fear, we shall talk again");
												std::cout << "Alastor: "; writeText("soon");
												std::cout << "Alastor: "; writeText("He's on the pierrot Branch, go talk to him");
												std::cout << "Alastor: "; writeText("Use the keycode" + clownName + " when you get there, okay?");
												std::cout << "Alastor: "; writeText("I'll write it down for you, do not worry");
												std::cout << "Alastor: "; writeText("See you, wanderer");
												std::cout << "Alastor: "; writeText("bye", 1);
												std::cout << "Alastor: "; writeText(". . . . .", 3);
												break;

											default:
												std::cout << "Alastor: "; writeText("Wanderer, it looks like you didn't choose right, please try again");
											}
										} while (!chooseProfession);
									default:
										std::cout << "Alastor: "; writeText("Oh darling, it looks like you don't know what to choose, please say it again  . . .");
								}
							} while (!chooseProfession);
						case 2:
							chooseGameMode = false;
							chooseToParticipate = true;
						default:
							std::cout << "Alastor: "; writeText(employee.getBirthName() + " it looks like you're confused, please say it again!");
							break;
						}
					} while (!chooseToParticipate);
				}
				break;
			case 2: 
			{
				switch (game.getEmployeeCode()) 
				{
					case 1:
						std::cout << "Alastor: "; std::cout << "Endeed, I did felt your magic aura the first time you were here, please, come with me" << std::endl;
						break;
					case 2:
						std::cout << "Alastor: "; std::cout << "Endeed, I did felt your charismatic aura when you entered the place" << std::endl;
						break;
				}
			}
		}
	}
	
	delete hConsole;
}
#include <iostream>
#include <Windows.h>
#include <map>
#include <vector>
#include <string>
#include <thread>
#include <chrono>

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

	    std::cout << "        hd          hm  mhdddddddd  dh          hhdddddddm  hhddddddhm  hm     mh  mhdddddddd" << std::endl;
		std::cout << "        hd    dm    hm  mh          dh          hh          hd      hm  hddm mddh  mh" << std::endl;
		std::cout << "        dm    dm    dm  mhdddddddd  dh          hh          hd      hm  hm  d  mh  mhdddddddd" << std::endl;
		std::cout << "          dm  dm  dm    mh          dh          hh          hd      hm  hm     mh  mh" << std::endl;
		std::cout << "            dm  dm      Nddddddddd  mddddddddd  mddddddddm  hdddddddhm  md     md  mddddddddd" << std::endl;

		std::cout << std::endl << std::endl;

		std::cout << "                                         mmmmhhmmmm  hdhdhdhdhd" << std::endl;
		std::cout << "                                             dh      hd      hd" << std::endl;
		std::cout << "                                             dh      hd      hd" << std::endl;
		std::cout << "                                             dh      hd      hd" << std::endl;
		std::cout << "                                             dm      hdhdhdhdhd" << std::endl;
		
		std::cout << std::endl << std::endl;

		std::cout << "                dhdhdhdh   dhdhdhd   dhdhdhdhdh  hh      hd  hhdddddddd  mh      mm" << std::endl;
		std::cout << "                hd     md  mhm   dh  dh      dh  hhdm    hd  hh          mh      mh" << std::endl;
		std::cout << "                hdddddddh  mhm mddh  dhddddddhh  hh  dm  hd  hh          mhdddddddh" << std::endl;
		std::cout << "                hd     mh  mhm mhm   dh      dh  hh    ddhd  hh          mh      dh" << std::endl;
		std::cout << "                hhdddddm   mhm   md  dh      dh  hh      hd  mddddddddm  mh      mh" << std::endl;

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
	int m_EmployeeCode;
};

int main()
{
	HANDLE hConsole;
	game game;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	//displayCroc(hConsole);
	system("cls");
	
	int gameMode = -1;
	int employeeCode = -1;
	bool chooseGameMode = false;
	int past;
	std::string birthName;

	//std::thread th1(menuSound);

	while (game.isRunning()) 
	{
		while (!chooseGameMode) 
		{

			system("cls");
			welcome(hConsole);

			SetConsoleTextAttribute(hConsole, 2);

			std::cout << "1. Play" << std::endl;
			std::cout << "2. Enter employee code" << std::endl;
			std::cout << "3. Quit" << std::endl;

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
							std::cout << "So you're a magician" << std::endl;
							game.setEmployeeCode(employeeCode);
							game.setGameMode(2);
							chooseGameMode = true;

							break;
						case 2:
							std::cout << "So you're a clown" << std::endl;
							game.setEmployeeCode(employeeCode);
							chooseGameMode = true;
							break;
						default:
							std::cout << "Oh Rookie, it looks like you're not an employee. Yet." << std::endl;
					}
					break;

				case 3:
					game.setRunning(false);
					chooseGameMode = true;
					break;
			}
		} 
		system("cls");

		if (gameMode == 3) 
		{
			std::terminate();
			return 0;

		}

		game.setGameMode(gameMode);

		switch (game.getGameMode()) 
		{
			case 1:
				std::cout << "Alastor:";  writeText(" Welcome to Ygg, our humble Circus!", 2);
				std::cout << "Alastor:";  writeText("Alastor: What's your name child?", 2);
				
				std::cout << "Please Enter your name: ";
				std::cin >> birthName;

				std:: cout << 
				
				//std::cout << "Alastor: Welcome to our Ygg, our humble Circus" << std::endl;
				std::cin >> past;
				break;
			case 2: 
			{
				switch (game.getEmployeeCode()) 
				{
					case 1:
						std::cout << "Endeed, I did felt your magic aura the first time you were here, please, come with me" << std::endl;
						std::cin >> past;
						break;
					case 2:
						std::cout << "Endeed, I did felt your charismatic aura when you entered the place" << std::endl;
						std::cin >> past;
						break;
				}
			}
		}
	}
	

	delete hConsole;
	std::terminate();
}
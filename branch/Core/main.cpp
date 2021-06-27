#include <iostream>
#include <Windows.h>
#include <map>
#include <vector>
#include <string>
#include <thread>
#include <chrono>

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

void welcome(HANDLE hConsole)
{
		SetConsoleTextAttribute(hConsole, 5);

	    std::cout << "        hd          hm  mhdddddddd  dh          hhdddddddm  hhddddddhm  hm     mh  mhdddddddd" << std::endl;
		std::cout << "        hd          hm  mh          dh          hh          hd      hm  hddm mddh  mh" << std::endl;
		std::cout << "        dm          dm  mhdddddddd  dh          hh          hd      hm  hm  d  mh  mhdddddddd" << std::endl;
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

int main()
{
	HANDLE hConsole;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int i;

	//displayCroc(hConsole);
	//system("cls");
	
	welcome(hConsole);
	std::cin >> i;

	delete hConsole;

}
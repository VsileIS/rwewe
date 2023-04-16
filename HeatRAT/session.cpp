/*
##########################################################################################################################
|....######....##.............######.....###...............####################.............######......###..............|
|....######....##.............#####.......##...............#.######.######.####..............#####.......##..............|
|..............##.....############.........######....#####.....##.....##.....##....#####.....####.........######....#####|
|..............##.............###.....#.....#####.....####.....##.....##.....##.............####.....#....######....#####|
|..............##.............###............####.....#########################...........#####............#####....#####|
|....######....##.....##########..............###.....########################....##.......##..............#####....#####|
|....#####.....##..............................##.....####.....##.....##.....##....####......................###....#####|
|....######....##..................#######.....##.....####.....##.....##.....##....#####..........#######....###....#####|
|                                                    by: Nick_Vinesmoke                                                  |
|                                             https://github.com/Nick-Vinesmoke                                          |
|                                        https://github.com/Nick-Vinesmoke/Heat-RAT                                      |
##########################################################################################################################
*/


#include "main.h"
#include "transfer.h"
#include "sessionSelecter.h"



void Choose(string logo, int choose)
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	FlushConsoleInputBuffer(hConsole);
	int col = 9;
	bool logoShow = true;
	string space = "          ";
	string command = "";
	string line = "";
	string something = "";
	string curentUSER = "";
	
	logoShow= true;
	string name = "";
	string ip = "";
	string pc = "";
	string use = "";
	string date = "";
	string cunt = "";
	string os = "";
	string tim = "";
	int counte = 0;
	system("cls");
	string user = "Modules\\Grabbed\\users.txt";
	string proc = "Modules\\Grabbed\\processes.txt";
	string path = "";
	string comands_session = "Modules\\Commands\\Session.txt";
	col = 8;
	SetConsoleTextAttribute(hConsole, col);
	printf("Enter the path for downloading files: ");
	col = 11;
	SetConsoleTextAttribute(hConsole, col);
	cin >> path;
	system("cls");
	while (true)
	{
		if (logoShow)
		{
			col = 13;
			SetConsoleTextAttribute(hConsole, col);
			cout << logo << endl;
			col = 9;
			SetConsoleTextAttribute(hConsole, col);
			printf("------------------------------------------------------------------------------------------------------------------------\n");
			printf("|                                                    Sessions num %2d                                                   |\n", choose);
			printf("------------------------------------------------------------------------------------------------------------------------\n");
			printf("|          Name|              IP|              PC|            User|   Install_date|         Cuntry|             OS|Time|");
			printf("------------------------------------------------------------------------------------------------------------------------\n");
			ifstream file(user);
			if (file.is_open())
			{
				while (getline(file, line))
				{
					if (counte == 0 + (8 * choose))
						name = line;
					if (counte == 1 + (8 * choose))
						ip = line;
					if (counte == 2 + (8 * choose))
						pc = line;
					if (counte == 3 + (8 * choose))
						use = line;
					if (counte == 4 + (8 * choose))
						date = line;
					if (counte == 5 + (8 * choose))
						cunt = line;
					if (counte == 6 + (8 * choose))
						os = line;
					if (counte == 7 + (8 * choose))
					{
						tim = line;
						printf("|%14s|%16s|%16s|%16s|%15s|%15s|%15s|%4s|\n", name.c_str(), ip.c_str(), pc.c_str(), use.c_str(), date.c_str(), cunt.c_str(), os.c_str(), tim.c_str());
						printf("------------------------------------------------------------------------------------------------------------------------\n");
						break;
					}
					counte++;
				}
			}
			else
			{

				col = 4;
				SetConsoleTextAttribute(hConsole, col);
				printf("Fatal ERROR!!!\n");
			}
			file.close();
			line = "";
			col = 9;
			SetConsoleTextAttribute(hConsole, col);
			printf("Hi %s!!!\n   !help ==for==> command list\n", curentUSER.c_str());
		}
		col = 6;
		SetConsoleTextAttribute(hConsole, col);
		printf(">>> ");
		col = 11;
		SetConsoleTextAttribute(hConsole, col);
		cin >> command;
		logoShow = false;
		if (command == "!help")
		{
			Help(comands_session);

		}
		if (command == "!menu")
		{
			system("cls");
			logoShow = true;
			break;
		}
		if (command == "!screenshot")
		{
			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("doing...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(2);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("packing...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(2);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("sending...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(1000);
			}
			printf("]\n");
			col = 4;
			SetConsoleTextAttribute(hConsole, col);
			printf("Fatal ERROR!!!\n");
			cout << "\n\n";
			//HRESULT URLDownloadToFile(
			//	LPUNKNOWN            pCaller,
			//	LPCTSTR              szURL,
			//	LPCTSTR              szFileName,
			//	_Reserved_ DWORD                dwReserved,
			//	LPBINDSTATUSCALLBACK lpfnCB
			//);

		}
		if (command == "!photoWebcam")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("doing...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(2);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("packing...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(2);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("sending...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(1000);
			}
			printf("]\n");
			col = 4;
			SetConsoleTextAttribute(hConsole, col);
			printf("Fatal ERROR!!!\n");
			cout << "\n\n";

		}
		if (command == "!openLink")
		{
			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("link: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("opening...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(2);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");

			cout << "\n\n";
		}
		if (command == "!directory")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("wait...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(2);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("C:\\\n");

			cout << "\n\n";

		}
		if (command == "!directoryContent")
		{

			cout << "\n\n";
			int file = 0;
			int type = 0;
			int much = 0;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("wait...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(10);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			srand(time(NULL));

			much = rand() % (30 - 1) + 1;
			for (int i = 0; i <= file; i++)
			{
				file = rand() % (10 - 0) + 0;
				type = rand() % (10 - 0) + 0;
				switch (file)
				{
				case 0:
					printf("new folder");
					break;
				case 1:
					printf("image");
					break;
				case 2:
					printf("need");
					break;
				case 3:
					printf("application");
					break;
				case 4:
					printf("document");
					break;
				case 5:
					printf("my");
					break;
				case 6:
					printf("H8Jd6fe5");
					break;
				case 7:
					printf("374830847");
					break;
				case 8:
					printf("file");
					break;
				case 9:
					printf("_");
					break;
				case 10:
					printf("d3d9");
					break;
				default:
					break;
				}
				switch (type)
				{
				case 0:
					printf("\\");
					break;
				case 1:
					printf(".png");
					break;
				case 2:
					printf(".docx");
					break;
				case 3:
					printf(".exe");
					break;
				case 4:
					printf(".txt");
					break;
				case 5:
					printf(".pdf");
					break;
				case 6:
					printf(".jpg");
					break;
				case 7:
					printf(".zip");
					break;
				case 8:
					printf(".dll");
					break;
				case 9:
					printf(".dat");
					break;
				case 10:
					printf(".mp4");
					break;
				default:
					break;
				}
				cout << "\n";
			}


			cout << "\n\n";

		}
		if (command == "!createFolder")
		{
			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the folder and folder name, without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("creating...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(10);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("folder %s created", something.c_str());
			cout << "\n\n";
		}
		if (command == "!deleteFolder")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the folder and folder name, without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("deleting...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(10);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("folder %s deleted", something.c_str());
			cout << "\n\n";

		}
		if (command == "!deleteFile")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the file and file name, without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("deleting...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(10);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("file %s deleted", something.c_str());
			cout << "\n\n";

		}
		if (command == "!downloadFile")
		{
			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the file on your computer and file name, without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("downloading...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(100 * (i / 2));
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("file %s downloaded", something.c_str());
			cout << "\n\n";


		}
		if (command == "!video")
		{
			float dur = 0;
			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("duration in seconds: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> dur;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("recording...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep((dur * 1000) / 60);
			}
			printf("]\n");
			printf("saving...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(10 * dur);
			}
			printf("]\n");
			printf("packing...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(5 * dur);
			}
			printf("]\n");
			printf("sending...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(100 * dur);
			}
			printf("]\n");
			col = 4;
			SetConsoleTextAttribute(hConsole, col);
			printf("Fatal ERROR!!!\n");
			cout << "\n\n";

		}
		if (command == "!audio")
		{

			float dur = 0;
			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("duration in seconds: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> dur;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("recording...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep((dur * 1000) / 60);
			}
			printf("]\n");
			printf("saving...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(10 * dur);
			}
			printf("]\n");
			printf("packing...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(5 * dur);
			}
			printf("]\n");
			printf("sending...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(100 * dur);
			}
			printf("]\n");
			col = 4;
			SetConsoleTextAttribute(hConsole, col);
			printf("Fatal ERROR!!!\n");
			cout << "\n\n";

		}
		if (command == "!runFile")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the file and file name, without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("wait...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(5);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("file %s is run\n", something.c_str());
			cout << "\n\n";

		}
		if (command == "!volume")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("volume: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("wait...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(5);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("volume is: %s\n", something.c_str());
			cout << "\n\n";

		}
		if (command == "!turnOff")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("wait...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(5);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			cout << "\n\n";

		}
		if (command == "!restart")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("wait...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(5);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			Sleep(300000);
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("Hi, again!!!\n");
			cout << "\n\n";

		}
		if (command == "!alt+f4")
		{
			cout << "\n\n";

			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			cout << "\n\n";
		}
		if (command == "!crazyCursor")
		{

			cout << "\n\n";

			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			cout << "\n\n";

		}
		if (command == "!wallpaper")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the image on your PC and file name, without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("wait...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(5);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			cout << "\n\n";

		}
		if (command == "!move")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the folder without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("moveing...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(500);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("curent folder %s", something.c_str());
			cout << "\n\n";

		}
		if (command == "!rename")
		{
			cout << "\n\n";

			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("new name, without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("curent name %s", something.c_str());
			cout << "\n\n";


		}
		if (command == "!encrypt")
		{
			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the file and file name, without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("encrypting...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(10);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("file %s encrypted", something.c_str());
			cout << "\n\n";


		}
		if (command == "!decrypt")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the file and file name, without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("decrypting...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(10);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("file %s decrypted", something.c_str());
			cout << "\n\n";

		}
		if (command == "!logs")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("searching...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(2);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("packing...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(2);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("sending...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(1000);
			}
			printf("]\n");
			col = 4;
			SetConsoleTextAttribute(hConsole, col);
			printf("Fatal ERROR!!!\n");
			cout << "\n\n";

		}
		if (command == "!screamer")
		{
			cout << "\n\n";
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			cout << "\n\n";

		}
		if (command == "!moveFile")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the folder and file name without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			printf("path to the new folder without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("moveing...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(500);
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!");
			cout << "\n\n";

		}
		if (command == "!lock")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("lock? (y/n): ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!");
			cout << "\n\n";

		}
		if (command == "!downloadFolder")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("path to the folder, without spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("downloading...\n");
			printf("[");
			for (int i = 0; i <= 60; i++)
			{
				printf("=");
				Sleep(1000 * (i / 2));
			}
			printf("]\n");
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("folder %s downloaded", something.c_str());
			cout << "\n\n";

		}
		if (command == "!processes")
		{
			Help(proc);


		}
		if (command == "!closeProces")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("proces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!");
			cout << "\n\n";

		}
		if (command == "!banTM")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("ban? (y/n): ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!");
			cout << "\n\n";

		}
		if (command == "!message")
		{

			cout << "\n\n";
			col = 8;
			SetConsoleTextAttribute(hConsole, col);
			printf("massage, on spaces: ");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
			cin >> something;
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!");
			cout << "\n\n";

		}
		if (command == "!CMDbomb")
		{


			cout << "\n\n";
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!");
			cout << "\n\n";

		}

	}
}


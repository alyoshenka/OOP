#include <iostream>
#include "person.h"
#include "television.h"
#include "PiggyBank.h"
#include "ServerInfo.h"
#include "ServerBrowserService.h"

int main() {

	/*
	// Closed
	Person alexi;
	alexi.Greet();

	Television tv1;
	std::cout << "Volume: " << tv1.volume() << std::endl;
	tv1.increaseChannel();
	tv1.increaseVolume(5);
	std::cout << "Volume: " << tv1.volume() << std::endl;
	std::cout << "Channel: " << tv1.channel() << std::endl;

	PiggyBank pb1;
	std::cout << "PB1: " << pb1.balance() << std::endl;
	pb1.deposit(105.5);
	std::cout << "PB1: " << pb1.balance() << std::endl;
	pb1.withdraw();
	std::cout << "PB1: " << pb1.balance() << std::endl;

	// Open

	// Server Info
	ServerInfo server1;
	std::cout << server1.regionID << std::endl;
	server1.regionID = 1;
	server1.currentPlayerCount = 5;
	server1.maxPlayers = 20;
	server1.ping = 40;
	std::cout << server1.regionID << std::endl;
	std::cout << server1.currentPlayerCount << std::endl;
	std::cout << server1.maxPlayers << std::endl;
	std::cout << server1.ping << std::endl;
	*/

	// Server Browser Service
	// initialize various servers
	ServerInfo s1 = { 1, 5, 20, 10 };
	ServerInfo s2 = { 2, 10, 25, 10 };
	ServerInfo s3 = { 1, 5, 20, 15 };
	ServerInfo s4 = { 3, 5, 20, 10 };
	ServerBrowserService sbs1;
	// register servers to service
	sbs1.registerServer(s1);
	sbs1.registerServer(s2);
	sbs1.registerServer(s3);
	sbs1.registerServer(s4);
	std::cout << "Servers: " << sbs1.getServerCount() << std::endl;
	// Browser Filtering
	ServerInfo server1[4] = {};
	// specify by region 1
	sbs1.regionSpecifier = 1;
	std::cout << "Servers (filtered): " << sbs1.getServers(server1, 4) << std::endl;

	system("pause");
	return 0;
}
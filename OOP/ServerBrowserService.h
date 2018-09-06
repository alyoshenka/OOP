#pragma once
#include "ServerInfo.h"

// represents a server browser service for an online game
class ServerBrowserService {
private:
  // An array of all servers registered with the system.
  ServerInfo servers[50]; // note: this is hard-coded for 50 servers

  // A count of all servers currently registered.
  int serverCount = 0;

public:
	// Browser Filtering
	// Initialized variables
	// Sets a cap on the number of entries that are returned
	int maxResults = 50;
	// Excludes any servers above the specified ping limit
	int pingLimit = 100;
	// Only includes any servers that in the specified region
	int regionSpecifier = 0;
	// Includes server that are full
	bool allowFull = false;
	// Includes servers that are empty
	bool allowEmpty = false;

	// returns serverCount
	int getServerCount();

	// Registers a server with the service
	bool registerServer(ServerInfo newServer);

	// Copies server entries into the given array.
	// Returns the total number of servers provided to the array.
	int getServers(ServerInfo * dstArray, size_t dstSize);

	// Sorts servers by player count (descending)
	void sortServersByPlayerCount(ServerInfo *dstArray, size_t dstSize);
};

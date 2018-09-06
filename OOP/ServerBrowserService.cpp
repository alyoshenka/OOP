#include "ServerBrowserService.h"

int ServerBrowserService::getServerCount() {
	return serverCount;
}

// Registers a server with the service
bool ServerBrowserService::registerServer(ServerInfo newServer) {
	// cannot register new server
	if (serverCount >= 50) {
		return false;
	}

	int idx = 0;
	// finds idk to add new server
	for (int i = 0; i < 50; i++) {
		// if not initialized
		if (servers[i].regionID == 0) {
			idx = i;
			// break out of loop
			break;
		}
	}
	servers[idx] = newServer;
	// new server registered
	serverCount++;
	return true;
}

// Copies server entries into the given array.
// Returns the total number of servers provided to the array.
int ServerBrowserService::getServers(ServerInfo * dstArray, size_t dstSize) {
	
	// number of servers copied over
	int count = 0;

	// copies entries
	for (int i = 0; i < dstSize && i < maxResults; i++) {
		if (servers[i].ping < pingLimit) {
			// if region != regionSpecifier
			if (regionSpecifier != 0 && servers[i].regionID != regionSpecifier) {
				continue;
			}
			// if full
			if (!allowFull && servers[i].currentPlayerCount >= servers[i].maxPlayers) {
				continue;
			}
			// if empty
			if (!allowEmpty && servers[i].currentPlayerCount <= 0) {
				continue;
			}
			dstArray[i] = servers[i];
			count++;
		}

	}
	return count;
}

// Sorts servers by player count (descending)
void ServerBrowserService::sortServersByPlayerCount(ServerInfo *dstArray, size_t dstSize) {
	ServerInfo swap;
	for (int i = 0; i < dstSize; i++) {
		for (int j = 0; j < dstSize - 1; j++) {
			if (dstArray[i].currentPlayerCount < dstArray[i + 1].currentPlayerCount) {
				swap = dstArray[j];
				dstArray[j] = dstArray[j + 1];
				dstArray[j + 1] = swap;
			}
		}
	}
}
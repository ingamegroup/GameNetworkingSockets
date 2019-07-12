#pragma once

class GameNetworkingSocketsAndroid
{
public:
	const char * getPlatformABI();
	GameNetworkingSocketsAndroid();
	~GameNetworkingSocketsAndroid();
};

extern "C" void Connect(char *ipAdress);
extern "C" void SendMessage(char *msg);
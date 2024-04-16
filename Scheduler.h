#pragma once
#include <string>
#include <thread>

class BoostServer;
class Config;

class Scheduler
{
public:
	Scheduler(BoostServer* server,Config* config);
	~Scheduler();

	void loop();
	Config* getConfig();
private:
	void handleGetData();
	static void sendDataThread(void* arg);
	void handleSendData();
private:
	BoostServer* mServer;
	Config* mConfig;
	bool		 mIsStopLoop = true;
	std::thread* mSendDataThread;
};
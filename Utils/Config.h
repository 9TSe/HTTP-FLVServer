#pragma once
#include <string>

class Config
{
	public:
		Config(const char* file);
		Config() = delete;
		~Config();

	public:
		bool state = false;
		void show();

		const char* getIp() const {return ip.data();}
		int getPort() const {return port;}
		int getThreadNum() const {return threadNum;}
	private:
		std::string mFile;
		std::string ip;
		int         port;
		int         threadNum;
};
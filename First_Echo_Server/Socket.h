#pragma once
#include <WinSock2.h>
#include <windows.h>
#include <MSWSock.h>
#include <string>

#pragma comment(lib,"ws2_32.lib")
#pragma comment(lib,"mswsock.lib")
enum class SocketType
{
	Tcp,
	Udp,
};

class Socket
{
public:
	static const int MaxReceiveLength = 8192;
	int m_fd;
	char m_receiveBuffer[MaxReceiveLength];

	Socket();
	Socket(int fd);
	Socket(SocketType socketType);
	~Socket();

}
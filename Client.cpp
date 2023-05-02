#include "Client.hpp"

Client::Client(int clntfd) : _nickname(""), _username(""), _isInit(false) {
	_clntfd = clntfd;
}


void	Client::setInit(bool flag) { _isInit = flag; }

void Client::setNickname(string nickname) { _nickname = nickname; }

void Client::setUsername(string username) { _username = username; }

bool	Client::getInit() { return _isInit; }

int Client::getClntfd() { return _clntfd; }

string Client::getNickname() { return _nickname; }

string Client::getUsername() { return _username; }


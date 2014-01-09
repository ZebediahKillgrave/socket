#ifdef WIN32

#include "Socket.hpp"

int Socket::socket(int domain, int type, int protocol)
{
  return (socket(domain, type, protocol));
}

int Socket::connect(int sockfd, const void *addr, int addrlen)
{
  return (connect(sockfd, addr, addrlen));
}

int Socket::send(int sockfd, const void *buf, int len, int flags)
{
  return (send(sockfd, (const char *)buf, len, flags));
}

int Socket::receive(int sockfd, void *buf, int len, int flags)
{
  return (receive(sockfd, (char *)buf, len, flags));
}

int Socket::bind(int sockfd, const void *addr, int addrlen)
{
  return (bind(sockfd, addr, addrlen));
}

int Socket::listen(int sockfd, int backlog)
{
  return (listen(sockfd, backlog));
}

int Socket::accept(int sockfd, void *addr, int *addrlen)
{
  return (accept(sockfd, addr, addrlen));
}

int Socket::close(int sockfd)
{
  return (close(sockfd));
}

#endif
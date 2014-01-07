#if defined(_WIN32) || defined(__WIN32__)

#include "Socket.hpp"

int Socket::socket(int domain, int type, int protocol)
{
  return (0);
}

int Socket::connect(int sockfd, const void *addr, int addrlen)
{
  return (0);
}

int Socket::send(int sockfd, const void *buf, int len, int flags)
{
  return (0);
}

int Socket::receive(int sockfd, void *buf, int len, int flags)
{
  return (0);
}

int Socket::bind(int sockfd, const void *addr, int addrlen)
{
  return (0);
}

int Socket::listen(int sockfd, int backlog)
{
  return (0);
}

int Socket::accept(int sockfd, void *addr, int *addrlen)
{
  return (0);
}

int Socket::close(int sockfd)
{
  return (0);
}

#endif

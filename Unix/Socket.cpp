#if defined(linux) || defined(__linux)

#include <sys/types.h>
#include <sys/socket.h>
#include "Socket.hpp"

int Socket::socket(int domain, int type, int protocol)
{
  return (socket(domain, type, protocol));
}

int Socket::connect(int sockfd, const void *addr, int addrlen)
{
  return (connect(sockfd, (const struct sockaddr *)addr, (socklen_t)addrlen));
}

int Socket::send(int sockfd, const void *buf, int len, int flags)
{
  return (send(sockfd, buf, (size_t)len, flags));
}

int Socket::receive(int sockfd, void *buf, int len, int flags)
{
  return (recv(sockfd, buf, (size_t)len, flags));
}

int Socket::bind(int sockfd, const void *addr, int addrlen)
{
  return (bind(sockfd, (const struct sockaddr *)addr, (socklen_t)addrlen));
}

int Socket::listen(int sockfd, int backlog)
{
  return (listen(sockfd, backlog));
}

int Socket::accept(int sockfd, void *addr, int *addrlen)
{
  return (accept(sockfd, (struct sockaddr *)addr, addrlen));
}

int Socket::close(int sockfd)
{
  return (close(sockfd));
}

#endif

#ifndef SOCKET_HPP_
# define SOCKET_HPP_

class Socket
{
public:
  static int socket(int domain, int type, int protocol);
  static int connect(int sockfd, const void *addr, int addrlen);
  static int send(int sockfd, const void *buf, int len, int flags);
  static int receive(int sockfd, void *buf, int len, int flags);
  static int bind(int sockfd, const void *addr, int addrlen);
  static int listen(int sockfd, int backlog);
  static int accept(int sockfd, void *addr, int *addrlen);
  static int close(int sockfd);  
};

#endif /* SOCKET_HPP_ */

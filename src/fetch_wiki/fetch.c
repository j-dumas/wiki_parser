#include "fetch.h"

#include <stdio.h>
#include <winsock2.h>

int init_network() {
  WSADATA ws_data;

  int init_result = WSAStartup(MAKEWORD(2,2), &ws_data);
  if (init_result != 0) {
    printf("WSAStartup failed with error code %d\n", init_result);
    return 1;
  }

  return 0;
}

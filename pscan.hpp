#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#include <thread>
#include <mutex>
#include <vector>
#include <algorithm>

using std::thread;
using std::mutex;
using std::lock_guard;
using std::vector;

static vector<int> open_ports;

static mutex vec_mtx;

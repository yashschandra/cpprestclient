#include "lib/include/restclient-cpp/restclient.h"
#include <iostream>

int main() {
    RestClient rc;
    std::string url = "https://api.cfggl.online/gate.Gate/LoginUser";
    RestClient::response resp;
    size_t timeout = 10;
    std::string ctype = "application/json";
    std::string data = "{\"username\":\"abc\",\"password\":\"abc123\"}";
    resp = rc.post(url, ctype, data, timeout);
    std::cout << resp.body;
    return 0;
}

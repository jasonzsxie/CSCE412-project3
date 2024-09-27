#ifndef REQUEST_H
#define REQUEST_H
#include <string>

struct Request
{
    std::string IP_in;
    std::string IP_out;
    int time;
    char job_type;
};

#endif

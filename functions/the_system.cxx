#include "../includes/functions_inc.hpp"
    string black = "\u001b[30m";
    string red = "\u001b[31m";
    string green = "\u001b[32m";
    string yellow = "\u001b[33m";
    string blue = "\u001b[34m";
    string magenta = "\u001b[35m";
    string cyan = "\u001b[36m";
    string white = "\u001b[37m";
    string reset = "\u001b[0m";
void sys(const char* command){
    system(command);
}
void cmd(const char* command){
    system(command);
}
void command(const char* cmd){
    system(cmd);
}
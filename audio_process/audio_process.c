
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#include <curl/curl.h>

#include "utils.h"

int main(int argc, char **argv)
{
    // utils_init_plugins();

    // hxt_load_cfg();
    // if (hxt_get_token_cfg() == NULL)
    // {
    //     utils_print("send request to get token\n");
    //     hxt_get_token_request();
    // }
    // hxt_unload_cfg();
    // pid_t hxt_pid = fork();
    // if (hxt_pid == 0)
    // {
    //     hxt_websocket_start();
    //     return 0;
    // }
    // pid_t iflyos_pid = fork();
    // if (iflyos_pid == 0)
    // {
        iflyos_websocket_start();
    //     return 0;
    // }
    
    // int st1, st2;
    // // waitpid(hxt_pid, &st1, 0);
    // waitpid(iflyos_pid, &st2, 0);

    // utils_deinit_plugins();

    return 0;
}

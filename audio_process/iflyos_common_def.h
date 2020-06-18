#include <stdlib.h>
#include <string.h>

/*********************************************
 * {
 * "iflyos_header" : {}
 * "iflyos_context" : {}
 * "iflyos_request" : {}
 * }
 *********************************************/
typedef enum
{
    TRUE = 1, 
    FALSE = 0
} BOOL;

typedef struct iflyos_header
{
    char authorization[255];            //must
    char device_id[64];                 //must
    char device_ip[16];             
    float latitude;
    float longitude;
    char platform_name[16];             //must
    char platform_version[16];          //must
}FlyosHeader;

typedef struct iflyos_context_system
{
    char version[8];                    //must
    BOOL software_updater;
    BOOL power_controller;
    BOOL device_modes;
    BOOL factory_reset;
    BOOL reboot;
}FlyosContextSystem;

typedef struct iflyos_context_audio_player
{
    char version[8];    //must
    char state[8];      // "PLAYING | IDLE | PAUSED" //must
    char resource_id[64];   
    int offset;         //millesecond
}FLyosContextAudioPlayer;

typedef struct iflyos_context_recognizer
{
    char version[8];
}FlyosContextRecognizer;

//属性保留
//若需要使用相应功能，则作为结构体成员加入FlyosContext
typedef struct iflyos_context_speaker
{
    char version[8];    //must
    int volume;         //must
    char type;
}FlyosContextSpeaker;

typedef struct iflyos_context_alarm
{
    char version[8];    //must
    int local_alarm[5]; //
    char local_alarm_id[32];  
    long stamp;
    char active_alarm_id[32];
}FlyosContextAlarm;

typedef struct iflyos_context_screen
{
    char version[8];
    char state[4]; // "ON" | "OFF"
    long brightness;
    char type[8]; // "percent"
}FlyosContextScreen;

/*
* type:
body_template_1         : 用于展示长的纯文本
body_template_2         : 用于展示带图的长文本
body_template_3         : 用于展示短的纯文本
list_template_1         : 用于展示没有选择的纯文本列表
option_template_1       : 用于展示无图片的选择列表
option_template_2       : 用于展示竖图片的选择列表
option_template_3       : 用于展示横图片的选择列表
weather_template        : 用于展示天气信息
player_info_template
custom_template
*/
typedef struct iflyos_context_template
{
    char version[8];
    BOOL focused;
    char type[32];
}FlyosContextTemplate;

typedef struct iflyos_context_video_player
{
    char version[8];
    char state[8];  // "IDLE" | "PLAYING" | "PAUSED"
    char resource_id[32];
    long offset;
}FlyosContextVideoPlayer;

typedef struct  iflyos_context_app_action
{
    char version[8];
    char** suppored[16]; // "activity" | "broadcast" | "service" | "exit"
    char foreground_app[64];
    char activity[128];
}FlyosContextAppAction;

typedef struct iflyos_context_playback_controller
{
    char version[8];
}FlyosContextPlaybackController;

typedef struct iflyos_context_launcher
{
    char version[8]; 
}FlyosContextLauncher;

typedef struct iflyos_context_interceptor
{
    char version[8];
}FlyosContextInterceptor;
//

typedef struct iflyos_context
{
    FlyosContextSystem* system;
    FLyosContextAudioPlayer* audio_player;
}FlyosContext;


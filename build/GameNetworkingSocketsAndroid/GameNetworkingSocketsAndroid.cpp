#include "GameNetworkingSocketsAndroid.h"
#include <android/log.h>
#include <ostream>
#include <steam/steamnetworkingsockets.h>
#include <steam/isteamnetworkingutils.h>

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "GameNetworkingSocketsAndroid", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "GameNetworkingSocketsAndroid", __VA_ARGS__))
 
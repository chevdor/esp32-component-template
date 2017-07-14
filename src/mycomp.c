#include <stdlib.h>
#include <string.h>
#include "esp_log.h"
#include "esp_system.h"

#include "lwip/sockets.h"
#include "lwip/dns.h"
#include "lwip/netdb.h"
#include "lwip/igmp.h"
#include "esp_request.h"
#include "cJSON.h"

#define REQ_TAG "MYCOMP"

int mycomp_function()
{
    ESP_LOGD(TAG, "Response: %s", response);
    return 42;
}

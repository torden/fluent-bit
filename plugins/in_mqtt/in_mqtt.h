/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2015 Treasure Data Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef FLB_IN_MQTT_H
#define FLB_IN_MQTT_H

#include <mk_core/mk_core.h>

#define FLB_MQTT_ADDR    "0.0.0.0"
#define FLB_MQTT_PORT    "8082"

struct flb_in_mqtt_config {
    int server_fd;               /* TCP server file descriptor           */
    struct mk_event_loop *evl;   /* Event loop file descriptor (mk_core) */
};

int in_mqtt_collect(struct flb_config *config, void *in_context);

#endif
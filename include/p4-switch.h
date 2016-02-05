/*
 * Copyright (C) 2015 (Barefoot?) Hewlett-Packard Development Company, L.P.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _P4_SWITCH_H_
#define _P4_SWITCH_H_

#include "switchapi/switch_base_types.h"
#include "switchapi/switch_handle.h"
#include "switchapi/switch_hostif.h"
#include "switchapi/switch_interface.h"
#include "switchapi/switch_vlan.h"
#include "switchapi/switch_l3.h"
#include "switchapi/switch_hostif.h"
#include "switchapi/switch_vrf.h"
#include "switchapi/switch_status.h"
#include "switchapi/switch_acl.h"
#include "switchapi/switch_nhop.h"
#include "switchapi/switch_rmac.h"
#include "switchapi/switch_neighbor.h"

#define MAX_P4_SWITCH_PORTS 64

void p4_switch_init(void);

#endif /* _P4_SWITCH_H_ */

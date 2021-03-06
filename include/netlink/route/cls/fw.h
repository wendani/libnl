/* SPDX-License-Identifier: LGPL-2.1-only */
/*
 * Copyright (c) 2003-2006 Thomas Graf <tgraf@suug.ch>
 * Copyright (c) 2006 Petr Gotthard <petr.gotthard@siemens.com>
 * Copyright (c) 2006 Siemens AG Oesterreich
 */

#ifndef NETLINK_FW_H_
#define NETLINK_FW_H_

#include <netlink/netlink.h>
#include <netlink/route/classifier.h>

#ifdef __cplusplus
extern "C" {
#endif

extern int	rtnl_fw_set_classid(struct rtnl_cls *, uint32_t);
extern int	rtnl_fw_set_mask(struct rtnl_cls *, uint32_t);

#ifdef __cplusplus
}
#endif

#endif

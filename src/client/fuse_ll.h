// -*- mode:C++; tab-width:8; c-basic-offset:2; indent-tabs-mode:t -*- 
// vim: ts=8 sw=2 smarttab
/*
 * Ceph - scalable distributed file system
 *
 * Copyright (C) 2004-2006 Sage Weil <sage@newdream.net>
 *
 * This is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1, as published by the Free Software 
 * Foundation.  See file COPYING.
 * 
 */

struct ceph_fuse_ll_handle;

int ceph_fuse_ll_init(Client *c, int argc, const char *argv[], int fd_on_success, struct ceph_fuse_ll_handle **handle);

int ceph_fuse_ll_main(struct ceph_fuse_ll_handle *handle);

void ceph_fuse_ll_finalize(Client *c, struct ceph_fuse_ll_handle *handle);

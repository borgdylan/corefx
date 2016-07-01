// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.

//Linux standalone config for building System.Native

#pragma once

//types -> the non-standalone build will include this header as well and also needs the types header.
#if defined(STANDALONE)
#include "../Common/pal_types.h"
#else
#include "pal_types.h"
#endif

#if defined(STANDALONE)
//emulate pal_config by manually defining the defines that would be true on GNU/Linux
#define PAL_UNIX_NAME "LINUX"
#define HAVE_STAT64 1
#define HAVE_PIPE2 1
#define HAVE_STAT_BIRTHTIME 0
#define HAVE_GNU_STRERROR_R 1
#define HAVE_DIRENT_NAME_LEN 0
#define HAVE_MNTINFO 0
#define HAVE_STATFS_FSTYPENAME 0
#define HAVE_STATVFS_FSTYPENAME 0
#define HAVE_STRCPY_S 0
#define HAVE_STRLCPY 0
#define HAVE_SHM_OPEN_THAT_WORKS_WELL_ENOUGH_WITH_MMAP 1
#define HAVE_POSIX_ADVISE 1
#define PRIORITY_REQUIRES_INT_WHO 0
#define KEVENT_REQUIRES_INT_PARAMS 0
#define HAVE_IN6_U 1
#define HAVE_U6_ADDR 0
#define HAVE_IOCTL 1
#define HAVE_TIOCGWINSZ 1
#define HAVE_SCHED_GETAFFINITY 1
#define HAVE_SCHED_SETAFFINITY 1
#define KEVENT_HAS_VOID_UDATA 0
#define HAVE_FDS_BITS 0
#define HAVE_PRIVATE_FDS_BITS 0
#define HAVE_STATFS 1
#define HAVE_EPOLL 1
#define HAVE_KQUEUE 0
#define HAVE_SENDFILE 1
#define HAVE_FCOPYFILE 0
#define HAVE_GETHOSTBYNAME_R 1
#define HAVE_GETHOSTBYADDR_R 1
#define HAVE_GETPEEREID 0
#define HAVE_SUPPORT_FOR_DUAL_MODE_IPV4_PACKET_INFO 1
#define HAVE_THREAD_SAFE_GETHOSTBYNAME_AND_GETHOSTBYADDR 0
#define HAVE_TCGETATTR 1
#define HAVE_TCSETATTR 1
#define HAVE_ECHO 1
#define HAVE_ICANON 1
#define HAVE_TCSANOW 1
#define HAVE_IN_PKTINFO 1
#define HAVE_IP_MREQN 1
#define HAVE_TCP_VAR_H 0
#define HAVE_RT_MSGHDR 0
#define HAVE_SYS_SYSCTL_H 1
#define HAVE_LINUX_RTNETLINK_H 1
#define HAVE_GETDOMAINNAME_SIZET 1
#define HAVE_INOTIFY 1
#define HAVE_CLOCK_MONOTONIC 1
#define HAVE_MACH_ABSOLUTE_TIME 0
#define HAVE_CURLM_ADDED_ALREADY 1
#define HAVE_CURL_HTTP_VERSION_2_0 1
#define HAVE_CURLPIPE_MULTIPLEX 1
#define HAVE_CURL_SSLVERSION_TLSv1_012 1
#define HAVE_TCP_H_TCPSTATE_ENUM 1
#define HAVE_TCP_FSM_H 0
#define HAVE_GSSFW_HEADERS 0
#define HAVE_GSS_SPNEGO_MECHANISM 0
#define HAVE_GSS_KRB5_CRED_NO_CI_FLAGS_X 0
#define HAVE_HEIMDAL_HEADERS 0

// Mac OS X has stat64, but it is deprecated since plain stat now
// provides the same 64-bit aware struct when targeting OS X > 10.5
// and not passing _DARWIN_NO_64_BIT_INODE.
#ifdef __APPLE__
#undef HAVE_STAT64
#define HAVE_STAT64 0
#endif

//translate architectures
#if defined(__i386__)
#define _X86_
#endif

#if defined(__amd64__)
#define _AMD64_
#endif

#if defined(__arm__)
#define _ARM_
#endif

#if defined(__aarch64__)
#define _ARM64_
#endif

//utilities
#include "../Common/pal_utilities.h"
#endif

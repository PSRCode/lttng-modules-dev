/* THIS FILE IS AUTO-GENERATED. DO NOT EDIT */
#ifndef CREATE_SYSCALL_TABLE

#if !defined(_TRACE_SYSCALLS_INTEGERS_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_SYSCALLS_INTEGERS_H

#include "../../../probes/lttng-tracepoint-event.h"
#include <linux/syscalls.h>
#include "mips-32-syscalls-3.13.0_integers_override.h"
#include "syscalls_integers_override.h"

#ifdef SC_ENTER
SC_LTTNG_TRACEPOINT_EVENT_CLASS_NOARGS(syscalls_noargs,
	TP_STRUCT__entry(),
	TP_fast_assign(),
	TP_printk()
)
#ifndef OVERRIDE_32_getpid
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, getpid)
#endif
#ifndef OVERRIDE_32_getuid
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, getuid)
#endif
#ifndef OVERRIDE_32_pause
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, pause)
#endif
#ifndef OVERRIDE_32_sync
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, sync)
#endif
#ifndef OVERRIDE_32_getgid
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, getgid)
#endif
#ifndef OVERRIDE_32_geteuid
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, geteuid)
#endif
#ifndef OVERRIDE_32_getegid
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, getegid)
#endif
#ifndef OVERRIDE_32_getppid
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, getppid)
#endif
#ifndef OVERRIDE_32_getpgrp
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, getpgrp)
#endif
#ifndef OVERRIDE_32_setsid
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, setsid)
#endif
#ifndef OVERRIDE_32_sgetmask
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, sgetmask)
#endif
#ifndef OVERRIDE_32_vhangup
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, vhangup)
#endif
#ifndef OVERRIDE_32_munlockall
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, munlockall)
#endif
#ifndef OVERRIDE_32_sched_yield
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, sched_yield)
#endif
#ifndef OVERRIDE_32_gettid
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, gettid)
#endif
#ifndef OVERRIDE_32_restart_syscall
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, restart_syscall)
#endif
#ifndef OVERRIDE_32_inotify_init
SC_LTTNG_TRACEPOINT_EVENT_INSTANCE_NOARGS(syscalls_noargs, inotify_init)
#endif
#else /* #ifdef SC_ENTER */
#ifndef OVERRIDE_32_getpid
SC_LTTNG_TRACEPOINT_EVENT(getpid,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getuid
SC_LTTNG_TRACEPOINT_EVENT(getuid,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_pause
SC_LTTNG_TRACEPOINT_EVENT(pause,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sync
SC_LTTNG_TRACEPOINT_EVENT(sync,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getgid
SC_LTTNG_TRACEPOINT_EVENT(getgid,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_geteuid
SC_LTTNG_TRACEPOINT_EVENT(geteuid,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getegid
SC_LTTNG_TRACEPOINT_EVENT(getegid,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getppid
SC_LTTNG_TRACEPOINT_EVENT(getppid,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getpgrp
SC_LTTNG_TRACEPOINT_EVENT(getpgrp,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setsid
SC_LTTNG_TRACEPOINT_EVENT(setsid,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sgetmask
SC_LTTNG_TRACEPOINT_EVENT(sgetmask,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_vhangup
SC_LTTNG_TRACEPOINT_EVENT(vhangup,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_munlockall
SC_LTTNG_TRACEPOINT_EVENT(munlockall,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sched_yield
SC_LTTNG_TRACEPOINT_EVENT(sched_yield,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_gettid
SC_LTTNG_TRACEPOINT_EVENT(gettid,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_restart_syscall
SC_LTTNG_TRACEPOINT_EVENT(restart_syscall,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_inotify_init
SC_LTTNG_TRACEPOINT_EVENT(inotify_init,
	TP_PROTO(sc_exit(long ret)),
	TP_ARGS(sc_exit(ret)),
	TP_STRUCT__entry(sc_exit(__field(long, ret))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret))),
	TP_printk()
)
#endif
#endif /* else #ifdef SC_ENTER */
#ifndef OVERRIDE_32_exit
SC_LTTNG_TRACEPOINT_EVENT(exit,
	TP_PROTO(sc_exit(long ret,) int error_code),
	TP_ARGS(sc_exit(ret,) error_code),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, error_code))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(error_code, error_code))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_close
SC_LTTNG_TRACEPOINT_EVENT(close,
	TP_PROTO(sc_exit(long ret,) unsigned int fd),
	TP_ARGS(sc_exit(ret,) fd),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setuid
SC_LTTNG_TRACEPOINT_EVENT(setuid,
	TP_PROTO(sc_exit(long ret,) uid_t uid),
	TP_ARGS(sc_exit(ret,) uid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(uid_t, uid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(uid, uid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_alarm
SC_LTTNG_TRACEPOINT_EVENT(alarm,
	TP_PROTO(sc_exit(long ret,) unsigned int seconds),
	TP_ARGS(sc_exit(ret,) seconds),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, seconds))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(seconds, seconds))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_nice
SC_LTTNG_TRACEPOINT_EVENT(nice,
	TP_PROTO(sc_exit(long ret,) int increment),
	TP_ARGS(sc_exit(ret,) increment),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(int, increment))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(increment, increment))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_dup
SC_LTTNG_TRACEPOINT_EVENT(dup,
	TP_PROTO(sc_exit(long ret,) unsigned int fildes),
	TP_ARGS(sc_exit(ret,) fildes),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fildes))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fildes, fildes))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_brk
SC_LTTNG_TRACEPOINT_EVENT(brk,
	TP_PROTO(sc_exit(long ret,) unsigned long brk),
	TP_ARGS(sc_exit(ret,) brk),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, brk))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(brk, brk))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setgid
SC_LTTNG_TRACEPOINT_EVENT(setgid,
	TP_PROTO(sc_exit(long ret,) gid_t gid),
	TP_ARGS(sc_exit(ret,) gid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(gid_t, gid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(gid, gid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_umask
SC_LTTNG_TRACEPOINT_EVENT(umask,
	TP_PROTO(sc_exit(long ret,) int mask),
	TP_ARGS(sc_exit(ret,) mask),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, mask))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(mask, mask))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_ssetmask
SC_LTTNG_TRACEPOINT_EVENT(ssetmask,
	TP_PROTO(sc_exit(long ret,) int newmask),
	TP_ARGS(sc_exit(ret,) newmask),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(int, newmask))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(newmask, newmask))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fsync
SC_LTTNG_TRACEPOINT_EVENT(fsync,
	TP_PROTO(sc_exit(long ret,) unsigned int fd),
	TP_ARGS(sc_exit(ret,) fd),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getpgid
SC_LTTNG_TRACEPOINT_EVENT(getpgid,
	TP_PROTO(sc_exit(long ret,) pid_t pid),
	TP_ARGS(sc_exit(ret,) pid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fchdir
SC_LTTNG_TRACEPOINT_EVENT(fchdir,
	TP_PROTO(sc_exit(long ret,) unsigned int fd),
	TP_ARGS(sc_exit(ret,) fd),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_personality
SC_LTTNG_TRACEPOINT_EVENT(personality,
	TP_PROTO(sc_exit(long ret,) unsigned int personality),
	TP_ARGS(sc_exit(ret,) personality),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, personality))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(personality, personality))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setfsuid
SC_LTTNG_TRACEPOINT_EVENT(setfsuid,
	TP_PROTO(sc_exit(long ret,) uid_t uid),
	TP_ARGS(sc_exit(ret,) uid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(uid_t, uid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(uid, uid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setfsgid
SC_LTTNG_TRACEPOINT_EVENT(setfsgid,
	TP_PROTO(sc_exit(long ret,) gid_t gid),
	TP_ARGS(sc_exit(ret,) gid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(gid_t, gid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(gid, gid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getsid
SC_LTTNG_TRACEPOINT_EVENT(getsid,
	TP_PROTO(sc_exit(long ret,) pid_t pid),
	TP_ARGS(sc_exit(ret,) pid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fdatasync
SC_LTTNG_TRACEPOINT_EVENT(fdatasync,
	TP_PROTO(sc_exit(long ret,) unsigned int fd),
	TP_ARGS(sc_exit(ret,) fd),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mlockall
SC_LTTNG_TRACEPOINT_EVENT(mlockall,
	TP_PROTO(sc_exit(long ret,) int flags),
	TP_ARGS(sc_exit(ret,) flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sched_getscheduler
SC_LTTNG_TRACEPOINT_EVENT(sched_getscheduler,
	TP_PROTO(sc_exit(long ret,) pid_t pid),
	TP_ARGS(sc_exit(ret,) pid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sched_get_priority_max
SC_LTTNG_TRACEPOINT_EVENT(sched_get_priority_max,
	TP_PROTO(sc_exit(long ret,) int policy),
	TP_ARGS(sc_exit(ret,) policy),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, policy))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(policy, policy))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sched_get_priority_min
SC_LTTNG_TRACEPOINT_EVENT(sched_get_priority_min,
	TP_PROTO(sc_exit(long ret,) int policy),
	TP_ARGS(sc_exit(ret,) policy),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, policy))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(policy, policy))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_io_destroy
SC_LTTNG_TRACEPOINT_EVENT(io_destroy,
	TP_PROTO(sc_exit(long ret,) aio_context_t ctx),
	TP_ARGS(sc_exit(ret,) ctx),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(aio_context_t, ctx))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(ctx, ctx))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_exit_group
SC_LTTNG_TRACEPOINT_EVENT(exit_group,
	TP_PROTO(sc_exit(long ret,) int error_code),
	TP_ARGS(sc_exit(ret,) error_code),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, error_code))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(error_code, error_code))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_epoll_create
SC_LTTNG_TRACEPOINT_EVENT(epoll_create,
	TP_PROTO(sc_exit(long ret,) int size),
	TP_ARGS(sc_exit(ret,) size),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, size))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(size, size))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_timer_getoverrun
SC_LTTNG_TRACEPOINT_EVENT(timer_getoverrun,
	TP_PROTO(sc_exit(long ret,) timer_t timer_id),
	TP_ARGS(sc_exit(ret,) timer_id),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(timer_t, timer_id))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(timer_id, timer_id))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_timer_delete
SC_LTTNG_TRACEPOINT_EVENT(timer_delete,
	TP_PROTO(sc_exit(long ret,) timer_t timer_id),
	TP_ARGS(sc_exit(ret,) timer_id),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(timer_t, timer_id))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(timer_id, timer_id))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_set_thread_area
SC_LTTNG_TRACEPOINT_EVENT(set_thread_area,
	TP_PROTO(sc_exit(long ret,) unsigned long addr),
	TP_ARGS(sc_exit(ret,) addr),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(unsigned long, addr))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(addr, addr))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_unshare
SC_LTTNG_TRACEPOINT_EVENT(unshare,
	TP_PROTO(sc_exit(long ret,) unsigned long unshare_flags),
	TP_ARGS(sc_exit(ret,) unshare_flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, unshare_flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(unshare_flags, unshare_flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_eventfd
SC_LTTNG_TRACEPOINT_EVENT(eventfd,
	TP_PROTO(sc_exit(long ret,) unsigned int count),
	TP_ARGS(sc_exit(ret,) count),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, count))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(count, count))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_epoll_create1
SC_LTTNG_TRACEPOINT_EVENT(epoll_create1,
	TP_PROTO(sc_exit(long ret,) int flags),
	TP_ARGS(sc_exit(ret,) flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_inotify_init1
SC_LTTNG_TRACEPOINT_EVENT(inotify_init1,
	TP_PROTO(sc_exit(long ret,) int flags),
	TP_ARGS(sc_exit(ret,) flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_syncfs
SC_LTTNG_TRACEPOINT_EVENT(syncfs,
	TP_PROTO(sc_exit(long ret,) int fd),
	TP_ARGS(sc_exit(ret,) fd),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_kill
SC_LTTNG_TRACEPOINT_EVENT(kill,
	TP_PROTO(sc_exit(long ret,) pid_t pid, int sig),
	TP_ARGS(sc_exit(ret,) pid, sig),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_in(__field(int, sig))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(sig, sig))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setpgid
SC_LTTNG_TRACEPOINT_EVENT(setpgid,
	TP_PROTO(sc_exit(long ret,) pid_t pid, pid_t pgid),
	TP_ARGS(sc_exit(ret,) pid, pgid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_in(__field(pid_t, pgid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(pgid, pgid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_dup2
SC_LTTNG_TRACEPOINT_EVENT(dup2,
	TP_PROTO(sc_exit(long ret,) unsigned int oldfd, unsigned int newfd),
	TP_ARGS(sc_exit(ret,) oldfd, newfd),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, oldfd)) sc_in(__field(unsigned int, newfd))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(oldfd, oldfd)) sc_in(tp_assign(newfd, newfd))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setreuid
SC_LTTNG_TRACEPOINT_EVENT(setreuid,
	TP_PROTO(sc_exit(long ret,) uid_t ruid, uid_t euid),
	TP_ARGS(sc_exit(ret,) ruid, euid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(uid_t, ruid)) sc_in(__field(uid_t, euid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(ruid, ruid)) sc_in(tp_assign(euid, euid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setregid
SC_LTTNG_TRACEPOINT_EVENT(setregid,
	TP_PROTO(sc_exit(long ret,) gid_t rgid, gid_t egid),
	TP_ARGS(sc_exit(ret,) rgid, egid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(gid_t, rgid)) sc_in(__field(gid_t, egid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(rgid, rgid)) sc_in(tp_assign(egid, egid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_munmap
SC_LTTNG_TRACEPOINT_EVENT(munmap,
	TP_PROTO(sc_exit(long ret,) unsigned long addr, size_t len),
	TP_ARGS(sc_exit(ret,) addr, len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field_hex(unsigned long, addr)) sc_in(__field(size_t, len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(addr, addr)) sc_in(tp_assign(len, len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_ftruncate
SC_LTTNG_TRACEPOINT_EVENT(ftruncate,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, unsigned long length),
	TP_ARGS(sc_exit(ret,) fd, length),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_in(__field(unsigned long, length))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(length, length))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fchmod
SC_LTTNG_TRACEPOINT_EVENT(fchmod,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, umode_t mode),
	TP_ARGS(sc_exit(ret,) fd, mode),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_in(__field(umode_t, mode))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(mode, mode))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getpriority
SC_LTTNG_TRACEPOINT_EVENT(getpriority,
	TP_PROTO(sc_exit(long ret,) int which, int who),
	TP_ARGS(sc_exit(ret,) which, who),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, which)) sc_in(__field(int, who))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which, which)) sc_in(tp_assign(who, who))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_bdflush
SC_LTTNG_TRACEPOINT_EVENT(bdflush,
	TP_PROTO(sc_exit(long ret,) int func, long data),
	TP_ARGS(sc_exit(ret,) func, data),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(int, func)) sc_inout(__field(long, data))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(func, func)) sc_inout(tp_assign(data, data))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_flock
SC_LTTNG_TRACEPOINT_EVENT(flock,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, unsigned int cmd),
	TP_ARGS(sc_exit(ret,) fd, cmd),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_in(__field(unsigned int, cmd))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(cmd, cmd))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mlock
SC_LTTNG_TRACEPOINT_EVENT(mlock,
	TP_PROTO(sc_exit(long ret,) unsigned long start, size_t len),
	TP_ARGS(sc_exit(ret,) start, len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, start)) sc_in(__field(size_t, len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(start, start)) sc_in(tp_assign(len, len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_munlock
SC_LTTNG_TRACEPOINT_EVENT(munlock,
	TP_PROTO(sc_exit(long ret,) unsigned long start, size_t len),
	TP_ARGS(sc_exit(ret,) start, len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, start)) sc_in(__field(size_t, len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(start, start)) sc_in(tp_assign(len, len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_listen
SC_LTTNG_TRACEPOINT_EVENT(listen,
	TP_PROTO(sc_exit(long ret,) int fd, int backlog),
	TP_ARGS(sc_exit(ret,) fd, backlog),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field(int, backlog))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(backlog, backlog))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_shutdown
SC_LTTNG_TRACEPOINT_EVENT(shutdown,
	TP_PROTO(sc_exit(long ret,) int fd, int how),
	TP_ARGS(sc_exit(ret,) fd, how),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field(int, how))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(how, how))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_ftruncate64
SC_LTTNG_TRACEPOINT_EVENT(ftruncate64,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, loff_t length),
	TP_ARGS(sc_exit(ret,) fd, length),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned int, fd)) sc_inout(__field(loff_t, length))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(length, length))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_tkill
SC_LTTNG_TRACEPOINT_EVENT(tkill,
	TP_PROTO(sc_exit(long ret,) pid_t pid, int sig),
	TP_ARGS(sc_exit(ret,) pid, sig),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_in(__field(int, sig))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(sig, sig))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_inotify_rm_watch
SC_LTTNG_TRACEPOINT_EVENT(inotify_rm_watch,
	TP_PROTO(sc_exit(long ret,) int fd, __s32 wd),
	TP_ARGS(sc_exit(ret,) fd, wd),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field(__s32, wd))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(wd, wd))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_ioprio_get
SC_LTTNG_TRACEPOINT_EVENT(ioprio_get,
	TP_PROTO(sc_exit(long ret,) int which, int who),
	TP_ARGS(sc_exit(ret,) which, who),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, which)) sc_in(__field(int, who))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which, which)) sc_in(tp_assign(who, who))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_timerfd_create
SC_LTTNG_TRACEPOINT_EVENT(timerfd_create,
	TP_PROTO(sc_exit(long ret,) int clockid, int flags),
	TP_ARGS(sc_exit(ret,) clockid, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, clockid)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(clockid, clockid)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_eventfd2
SC_LTTNG_TRACEPOINT_EVENT(eventfd2,
	TP_PROTO(sc_exit(long ret,) unsigned int count, int flags),
	TP_ARGS(sc_exit(ret,) count, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, count)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(count, count)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setns
SC_LTTNG_TRACEPOINT_EVENT(setns,
	TP_PROTO(sc_exit(long ret,) int fd, int nstype),
	TP_ARGS(sc_exit(ret,) fd, nstype),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field(int, nstype))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(nstype, nstype))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_lseek
SC_LTTNG_TRACEPOINT_EVENT(lseek,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, off_t offset, unsigned int whence),
	TP_ARGS(sc_exit(ret,) fd, offset, whence),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_in(__field(off_t, offset)) sc_in(__field(unsigned int, whence))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(offset, offset)) sc_in(tp_assign(whence, whence))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_ioctl
SC_LTTNG_TRACEPOINT_EVENT(ioctl,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, unsigned int cmd, unsigned long arg),
	TP_ARGS(sc_exit(ret,) fd, cmd, arg),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_in(__field(unsigned int, cmd)) sc_inout(__field(unsigned long, arg))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(cmd, cmd)) sc_inout(tp_assign(arg, arg))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fcntl
SC_LTTNG_TRACEPOINT_EVENT(fcntl,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, unsigned int cmd, unsigned long arg),
	TP_ARGS(sc_exit(ret,) fd, cmd, arg),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_in(__field(unsigned int, cmd)) sc_inout(__field(unsigned long, arg))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(cmd, cmd)) sc_inout(tp_assign(arg, arg))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fchown
SC_LTTNG_TRACEPOINT_EVENT(fchown,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, uid_t user, gid_t group),
	TP_ARGS(sc_exit(ret,) fd, user, group),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_in(__field(uid_t, user)) sc_in(__field(gid_t, group))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(user, user)) sc_in(tp_assign(group, group))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setpriority
SC_LTTNG_TRACEPOINT_EVENT(setpriority,
	TP_PROTO(sc_exit(long ret,) int which, int who, int niceval),
	TP_ARGS(sc_exit(ret,) which, who, niceval),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, which)) sc_in(__field(int, who)) sc_in(__field(int, niceval))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which, which)) sc_in(tp_assign(who, who)) sc_in(tp_assign(niceval, niceval))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mprotect
SC_LTTNG_TRACEPOINT_EVENT(mprotect,
	TP_PROTO(sc_exit(long ret,) unsigned long start, size_t len, unsigned long prot),
	TP_ARGS(sc_exit(ret,) start, len, prot),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, start)) sc_in(__field(size_t, len)) sc_in(__field(unsigned long, prot))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(start, start)) sc_in(tp_assign(len, len)) sc_in(tp_assign(prot, prot))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sysfs
SC_LTTNG_TRACEPOINT_EVENT(sysfs,
	TP_PROTO(sc_exit(long ret,) int option, unsigned long arg1, unsigned long arg2),
	TP_ARGS(sc_exit(ret,) option, arg1, arg2),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, option)) sc_in(__field(unsigned long, arg1)) sc_in(__field(unsigned long, arg2))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(option, option)) sc_in(tp_assign(arg1, arg1)) sc_in(tp_assign(arg2, arg2))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_msync
SC_LTTNG_TRACEPOINT_EVENT(msync,
	TP_PROTO(sc_exit(long ret,) unsigned long start, size_t len, int flags),
	TP_ARGS(sc_exit(ret,) start, len, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, start)) sc_in(__field(size_t, len)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(start, start)) sc_in(tp_assign(len, len)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_cacheflush
SC_LTTNG_TRACEPOINT_EVENT(cacheflush,
	TP_PROTO(sc_exit(long ret,) unsigned long addr, unsigned long bytes, unsigned int cache),
	TP_ARGS(sc_exit(ret,) addr, bytes, cache),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(unsigned long, addr)) sc_inout(__field(unsigned long, bytes)) sc_inout(__field(unsigned int, cache))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(addr, addr)) sc_inout(tp_assign(bytes, bytes)) sc_inout(tp_assign(cache, cache))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sysmips
SC_LTTNG_TRACEPOINT_EVENT(sysmips,
	TP_PROTO(sc_exit(long ret,) long cmd, long arg1, long arg2),
	TP_ARGS(sc_exit(ret,) cmd, arg1, arg2),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(long, cmd)) sc_inout(__field(long, arg1)) sc_inout(__field(long, arg2))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(cmd, cmd)) sc_inout(tp_assign(arg1, arg1)) sc_inout(tp_assign(arg2, arg2))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_socket
SC_LTTNG_TRACEPOINT_EVENT(socket,
	TP_PROTO(sc_exit(long ret,) int family, int type, int protocol),
	TP_ARGS(sc_exit(ret,) family, type, protocol),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, family)) sc_in(__field(int, type)) sc_in(__field(int, protocol))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(family, family)) sc_in(tp_assign(type, type)) sc_in(tp_assign(protocol, protocol))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setresuid
SC_LTTNG_TRACEPOINT_EVENT(setresuid,
	TP_PROTO(sc_exit(long ret,) uid_t ruid, uid_t euid, uid_t suid),
	TP_ARGS(sc_exit(ret,) ruid, euid, suid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(uid_t, ruid)) sc_in(__field(uid_t, euid)) sc_in(__field(uid_t, suid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(ruid, ruid)) sc_in(tp_assign(euid, euid)) sc_in(tp_assign(suid, suid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setresgid
SC_LTTNG_TRACEPOINT_EVENT(setresgid,
	TP_PROTO(sc_exit(long ret,) gid_t rgid, gid_t egid, gid_t sgid),
	TP_ARGS(sc_exit(ret,) rgid, egid, sgid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(gid_t, rgid)) sc_in(__field(gid_t, egid)) sc_in(__field(gid_t, sgid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(rgid, rgid)) sc_in(tp_assign(egid, egid)) sc_in(tp_assign(sgid, sgid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_madvise
SC_LTTNG_TRACEPOINT_EVENT(madvise,
	TP_PROTO(sc_exit(long ret,) unsigned long start, size_t len_in, int behavior),
	TP_ARGS(sc_exit(ret,) start, len_in, behavior),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, start)) sc_in(__field(size_t, len_in)) sc_in(__field(int, behavior))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(start, start)) sc_in(tp_assign(len_in, len_in)) sc_in(tp_assign(behavior, behavior))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fcntl64
SC_LTTNG_TRACEPOINT_EVENT(fcntl64,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, unsigned int cmd, unsigned long arg),
	TP_ARGS(sc_exit(ret,) fd, cmd, arg),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned int, fd)) sc_inout(__field(unsigned int, cmd)) sc_inout(__field(unsigned long, arg))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(cmd, cmd)) sc_inout(tp_assign(arg, arg))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_readahead
SC_LTTNG_TRACEPOINT_EVENT(readahead,
	TP_PROTO(sc_exit(long ret,) int fd, loff_t offset, size_t count),
	TP_ARGS(sc_exit(ret,) fd, offset, count),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field(loff_t, offset)) sc_in(__field(size_t, count))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(offset, offset)) sc_in(tp_assign(count, count))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_tgkill
SC_LTTNG_TRACEPOINT_EVENT(tgkill,
	TP_PROTO(sc_exit(long ret,) pid_t tgid, pid_t pid, int sig),
	TP_ARGS(sc_exit(ret,) tgid, pid, sig),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, tgid)) sc_in(__field(pid_t, pid)) sc_in(__field(int, sig))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(tgid, tgid)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(sig, sig))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_ioprio_set
SC_LTTNG_TRACEPOINT_EVENT(ioprio_set,
	TP_PROTO(sc_exit(long ret,) int which, int who, int ioprio),
	TP_ARGS(sc_exit(ret,) which, who, ioprio),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, which)) sc_in(__field(int, who)) sc_in(__field(int, ioprio))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which, which)) sc_in(tp_assign(who, who)) sc_in(tp_assign(ioprio, ioprio))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_dup3
SC_LTTNG_TRACEPOINT_EVENT(dup3,
	TP_PROTO(sc_exit(long ret,) unsigned int oldfd, unsigned int newfd, int flags),
	TP_ARGS(sc_exit(ret,) oldfd, newfd, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, oldfd)) sc_in(__field(unsigned int, newfd)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(oldfd, oldfd)) sc_in(tp_assign(newfd, newfd)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_ptrace
SC_LTTNG_TRACEPOINT_EVENT(ptrace,
	TP_PROTO(sc_exit(long ret,) long request, long pid, unsigned long addr, unsigned long data),
	TP_ARGS(sc_exit(ret,) request, pid, addr, data),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(long, request)) sc_in(__field(long, pid)) sc_inout(__field_hex(unsigned long, addr)) sc_inout(__field(unsigned long, data))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(request, request)) sc_in(tp_assign(pid, pid)) sc_inout(tp_assign(addr, addr)) sc_inout(tp_assign(data, data))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fadvise64_64
SC_LTTNG_TRACEPOINT_EVENT(fadvise64_64,
	TP_PROTO(sc_exit(long ret,) int fd, loff_t offset, loff_t len, int advice),
	TP_ARGS(sc_exit(ret,) fd, offset, len, advice),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(int, fd)) sc_inout(__field(loff_t, offset)) sc_inout(__field(loff_t, len)) sc_inout(__field(int, advice))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(offset, offset)) sc_inout(tp_assign(len, len)) sc_inout(tp_assign(advice, advice))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sync_file_range
SC_LTTNG_TRACEPOINT_EVENT(sync_file_range,
	TP_PROTO(sc_exit(long ret,) int fd, loff_t offset, loff_t nbytes, unsigned int flags),
	TP_ARGS(sc_exit(ret,) fd, offset, nbytes, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field(loff_t, offset)) sc_in(__field(loff_t, nbytes)) sc_in(__field(unsigned int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(offset, offset)) sc_in(tp_assign(nbytes, nbytes)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_tee
SC_LTTNG_TRACEPOINT_EVENT(tee,
	TP_PROTO(sc_exit(long ret,) int fdin, int fdout, size_t len, unsigned int flags),
	TP_ARGS(sc_exit(ret,) fdin, fdout, len, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fdin)) sc_in(__field(int, fdout)) sc_in(__field(size_t, len)) sc_in(__field(unsigned int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fdin, fdin)) sc_in(tp_assign(fdout, fdout)) sc_in(tp_assign(len, len)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fallocate
SC_LTTNG_TRACEPOINT_EVENT(fallocate,
	TP_PROTO(sc_exit(long ret,) int fd, int mode, loff_t offset, loff_t len),
	TP_ARGS(sc_exit(ret,) fd, mode, offset, len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field(int, mode)) sc_in(__field(loff_t, offset)) sc_in(__field(loff_t, len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(mode, mode)) sc_in(tp_assign(offset, offset)) sc_in(tp_assign(len, len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mremap
SC_LTTNG_TRACEPOINT_EVENT(mremap,
	TP_PROTO(sc_exit(long ret,) unsigned long addr, unsigned long old_len, unsigned long new_len, unsigned long flags, unsigned long new_addr),
	TP_ARGS(sc_exit(ret,) addr, old_len, new_len, flags, new_addr),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field_hex(unsigned long, addr)) sc_in(__field(unsigned long, old_len)) sc_in(__field(unsigned long, new_len)) sc_in(__field(unsigned long, flags)) sc_in(__field_hex(unsigned long, new_addr))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(addr, addr)) sc_in(tp_assign(old_len, old_len)) sc_in(tp_assign(new_len, new_len)) sc_in(tp_assign(flags, flags)) sc_in(tp_assign(new_addr, new_addr))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_prctl
SC_LTTNG_TRACEPOINT_EVENT(prctl,
	TP_PROTO(sc_exit(long ret,) int option, unsigned long arg2, unsigned long arg3, unsigned long arg4, unsigned long arg5),
	TP_ARGS(sc_exit(ret,) option, arg2, arg3, arg4, arg5),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, option)) sc_inout(__field(unsigned long, arg2)) sc_in(__field(unsigned long, arg3)) sc_in(__field(unsigned long, arg4)) sc_in(__field(unsigned long, arg5))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(option, option)) sc_inout(tp_assign(arg2, arg2)) sc_in(tp_assign(arg3, arg3)) sc_in(tp_assign(arg4, arg4)) sc_in(tp_assign(arg5, arg5))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_remap_file_pages
SC_LTTNG_TRACEPOINT_EVENT(remap_file_pages,
	TP_PROTO(sc_exit(long ret,) unsigned long start, unsigned long size, unsigned long prot, unsigned long pgoff, unsigned long flags),
	TP_ARGS(sc_exit(ret,) start, size, prot, pgoff, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, start)) sc_in(__field(unsigned long, size)) sc_in(__field(unsigned long, prot)) sc_in(__field(unsigned long, pgoff)) sc_in(__field(unsigned long, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(start, start)) sc_in(tp_assign(size, size)) sc_in(tp_assign(prot, prot)) sc_in(tp_assign(pgoff, pgoff)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mips_mmap
SC_LTTNG_TRACEPOINT_EVENT(mips_mmap,
	TP_PROTO(sc_exit(long ret,) unsigned long addr, unsigned long len, unsigned long prot, unsigned long flags, unsigned long fd, off_t offset),
	TP_ARGS(sc_exit(ret,) addr, len, prot, flags, fd, offset),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(unsigned long, addr)) sc_inout(__field(unsigned long, len)) sc_inout(__field(unsigned long, prot)) sc_inout(__field(unsigned long, flags)) sc_inout(__field(unsigned long, fd)) sc_inout(__field(off_t, offset))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(addr, addr)) sc_inout(tp_assign(len, len)) sc_inout(tp_assign(prot, prot)) sc_inout(tp_assign(flags, flags)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(offset, offset))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mips_mmap2
SC_LTTNG_TRACEPOINT_EVENT(mips_mmap2,
	TP_PROTO(sc_exit(long ret,) unsigned long addr, unsigned long len, unsigned long prot, unsigned long flags, unsigned long fd, unsigned long pgoff),
	TP_ARGS(sc_exit(ret,) addr, len, prot, flags, fd, pgoff),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(unsigned long, addr)) sc_inout(__field(unsigned long, len)) sc_inout(__field(unsigned long, prot)) sc_inout(__field(unsigned long, flags)) sc_inout(__field(unsigned long, fd)) sc_inout(__field(unsigned long, pgoff))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(addr, addr)) sc_inout(tp_assign(len, len)) sc_inout(tp_assign(prot, prot)) sc_inout(tp_assign(flags, flags)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(pgoff, pgoff))),
	TP_printk()
)
#endif

#endif /*  _TRACE_SYSCALLS_INTEGERS_H */

/* This part must be outside protection */
#include "../../../probes/define_trace.h"

#else /* CREATE_SYSCALL_TABLE */

#include "mips-32-syscalls-3.13.0_integers_override.h"
#include "syscalls_integers_override.h"

#ifdef SC_ENTER
#ifndef OVERRIDE_TABLE_32_getpid
TRACE_SYSCALL_TABLE(syscalls_noargs, getpid, 4020, 0)
#endif
#ifndef OVERRIDE_TABLE_32_getuid
TRACE_SYSCALL_TABLE(syscalls_noargs, getuid, 4024, 0)
#endif
#ifndef OVERRIDE_TABLE_32_pause
TRACE_SYSCALL_TABLE(syscalls_noargs, pause, 4029, 0)
#endif
#ifndef OVERRIDE_TABLE_32_sync
TRACE_SYSCALL_TABLE(syscalls_noargs, sync, 4036, 0)
#endif
#ifndef OVERRIDE_TABLE_32_getgid
TRACE_SYSCALL_TABLE(syscalls_noargs, getgid, 4047, 0)
#endif
#ifndef OVERRIDE_TABLE_32_geteuid
TRACE_SYSCALL_TABLE(syscalls_noargs, geteuid, 4049, 0)
#endif
#ifndef OVERRIDE_TABLE_32_getegid
TRACE_SYSCALL_TABLE(syscalls_noargs, getegid, 4050, 0)
#endif
#ifndef OVERRIDE_TABLE_32_getppid
TRACE_SYSCALL_TABLE(syscalls_noargs, getppid, 4064, 0)
#endif
#ifndef OVERRIDE_TABLE_32_getpgrp
TRACE_SYSCALL_TABLE(syscalls_noargs, getpgrp, 4065, 0)
#endif
#ifndef OVERRIDE_TABLE_32_setsid
TRACE_SYSCALL_TABLE(syscalls_noargs, setsid, 4066, 0)
#endif
#ifndef OVERRIDE_TABLE_32_sgetmask
TRACE_SYSCALL_TABLE(syscalls_noargs, sgetmask, 4068, 0)
#endif
#ifndef OVERRIDE_TABLE_32_vhangup
TRACE_SYSCALL_TABLE(syscalls_noargs, vhangup, 4111, 0)
#endif
#ifndef OVERRIDE_TABLE_32_munlockall
TRACE_SYSCALL_TABLE(syscalls_noargs, munlockall, 4157, 0)
#endif
#ifndef OVERRIDE_TABLE_32_sched_yield
TRACE_SYSCALL_TABLE(syscalls_noargs, sched_yield, 4162, 0)
#endif
#ifndef OVERRIDE_TABLE_32_gettid
TRACE_SYSCALL_TABLE(syscalls_noargs, gettid, 4222, 0)
#endif
#ifndef OVERRIDE_TABLE_32_restart_syscall
TRACE_SYSCALL_TABLE(syscalls_noargs, restart_syscall, 4253, 0)
#endif
#ifndef OVERRIDE_TABLE_32_inotify_init
TRACE_SYSCALL_TABLE(syscalls_noargs, inotify_init, 4284, 0)
#endif
#else /* #ifdef SC_ENTER */
#ifndef OVERRIDE_TABLE_32_getpid
TRACE_SYSCALL_TABLE(getpid, getpid, 4020, 0)
#endif
#ifndef OVERRIDE_TABLE_32_getuid
TRACE_SYSCALL_TABLE(getuid, getuid, 4024, 0)
#endif
#ifndef OVERRIDE_TABLE_32_pause
TRACE_SYSCALL_TABLE(pause, pause, 4029, 0)
#endif
#ifndef OVERRIDE_TABLE_32_sync
TRACE_SYSCALL_TABLE(sync, sync, 4036, 0)
#endif
#ifndef OVERRIDE_TABLE_32_getgid
TRACE_SYSCALL_TABLE(getgid, getgid, 4047, 0)
#endif
#ifndef OVERRIDE_TABLE_32_geteuid
TRACE_SYSCALL_TABLE(geteuid, geteuid, 4049, 0)
#endif
#ifndef OVERRIDE_TABLE_32_getegid
TRACE_SYSCALL_TABLE(getegid, getegid, 4050, 0)
#endif
#ifndef OVERRIDE_TABLE_32_getppid
TRACE_SYSCALL_TABLE(getppid, getppid, 4064, 0)
#endif
#ifndef OVERRIDE_TABLE_32_getpgrp
TRACE_SYSCALL_TABLE(getpgrp, getpgrp, 4065, 0)
#endif
#ifndef OVERRIDE_TABLE_32_setsid
TRACE_SYSCALL_TABLE(setsid, setsid, 4066, 0)
#endif
#ifndef OVERRIDE_TABLE_32_sgetmask
TRACE_SYSCALL_TABLE(sgetmask, sgetmask, 4068, 0)
#endif
#ifndef OVERRIDE_TABLE_32_vhangup
TRACE_SYSCALL_TABLE(vhangup, vhangup, 4111, 0)
#endif
#ifndef OVERRIDE_TABLE_32_munlockall
TRACE_SYSCALL_TABLE(munlockall, munlockall, 4157, 0)
#endif
#ifndef OVERRIDE_TABLE_32_sched_yield
TRACE_SYSCALL_TABLE(sched_yield, sched_yield, 4162, 0)
#endif
#ifndef OVERRIDE_TABLE_32_gettid
TRACE_SYSCALL_TABLE(gettid, gettid, 4222, 0)
#endif
#ifndef OVERRIDE_TABLE_32_restart_syscall
TRACE_SYSCALL_TABLE(restart_syscall, restart_syscall, 4253, 0)
#endif
#ifndef OVERRIDE_TABLE_32_inotify_init
TRACE_SYSCALL_TABLE(inotify_init, inotify_init, 4284, 0)
#endif
#endif /* else #ifdef SC_ENTER */
#ifndef OVERRIDE_TABLE_32_exit
TRACE_SYSCALL_TABLE(exit, exit, 4001, 1)
#endif
#ifndef OVERRIDE_TABLE_32_close
TRACE_SYSCALL_TABLE(close, close, 4006, 1)
#endif
#ifndef OVERRIDE_TABLE_32_lseek
TRACE_SYSCALL_TABLE(lseek, lseek, 4019, 3)
#endif
#ifndef OVERRIDE_TABLE_32_setuid
TRACE_SYSCALL_TABLE(setuid, setuid, 4023, 1)
#endif
#ifndef OVERRIDE_TABLE_32_ptrace
TRACE_SYSCALL_TABLE(ptrace, ptrace, 4026, 4)
#endif
#ifndef OVERRIDE_TABLE_32_alarm
TRACE_SYSCALL_TABLE(alarm, alarm, 4027, 1)
#endif
#ifndef OVERRIDE_TABLE_32_nice
TRACE_SYSCALL_TABLE(nice, nice, 4034, 1)
#endif
#ifndef OVERRIDE_TABLE_32_kill
TRACE_SYSCALL_TABLE(kill, kill, 4037, 2)
#endif
#ifndef OVERRIDE_TABLE_32_dup
TRACE_SYSCALL_TABLE(dup, dup, 4041, 1)
#endif
#ifndef OVERRIDE_TABLE_32_brk
TRACE_SYSCALL_TABLE(brk, brk, 4045, 1)
#endif
#ifndef OVERRIDE_TABLE_32_setgid
TRACE_SYSCALL_TABLE(setgid, setgid, 4046, 1)
#endif
#ifndef OVERRIDE_TABLE_32_ioctl
TRACE_SYSCALL_TABLE(ioctl, ioctl, 4054, 3)
#endif
#ifndef OVERRIDE_TABLE_32_fcntl
TRACE_SYSCALL_TABLE(fcntl, fcntl, 4055, 3)
#endif
#ifndef OVERRIDE_TABLE_32_setpgid
TRACE_SYSCALL_TABLE(setpgid, setpgid, 4057, 2)
#endif
#ifndef OVERRIDE_TABLE_32_umask
TRACE_SYSCALL_TABLE(umask, umask, 4060, 1)
#endif
#ifndef OVERRIDE_TABLE_32_dup2
TRACE_SYSCALL_TABLE(dup2, dup2, 4063, 2)
#endif
#ifndef OVERRIDE_TABLE_32_ssetmask
TRACE_SYSCALL_TABLE(ssetmask, ssetmask, 4069, 1)
#endif
#ifndef OVERRIDE_TABLE_32_setreuid
TRACE_SYSCALL_TABLE(setreuid, setreuid, 4070, 2)
#endif
#ifndef OVERRIDE_TABLE_32_setregid
TRACE_SYSCALL_TABLE(setregid, setregid, 4071, 2)
#endif
#ifndef OVERRIDE_TABLE_32_mips_mmap
TRACE_SYSCALL_TABLE(mips_mmap, mips_mmap, 4090, 6)
#endif
#ifndef OVERRIDE_TABLE_32_munmap
TRACE_SYSCALL_TABLE(munmap, munmap, 4091, 2)
#endif
#ifndef OVERRIDE_TABLE_32_ftruncate
TRACE_SYSCALL_TABLE(ftruncate, ftruncate, 4093, 2)
#endif
#ifndef OVERRIDE_TABLE_32_fchmod
TRACE_SYSCALL_TABLE(fchmod, fchmod, 4094, 2)
#endif
#ifndef OVERRIDE_TABLE_32_fchown
TRACE_SYSCALL_TABLE(fchown, fchown, 4095, 3)
#endif
#ifndef OVERRIDE_TABLE_32_getpriority
TRACE_SYSCALL_TABLE(getpriority, getpriority, 4096, 2)
#endif
#ifndef OVERRIDE_TABLE_32_setpriority
TRACE_SYSCALL_TABLE(setpriority, setpriority, 4097, 3)
#endif
#ifndef OVERRIDE_TABLE_32_fsync
TRACE_SYSCALL_TABLE(fsync, fsync, 4118, 1)
#endif
#ifndef OVERRIDE_TABLE_32_mprotect
TRACE_SYSCALL_TABLE(mprotect, mprotect, 4125, 3)
#endif
#ifndef OVERRIDE_TABLE_32_getpgid
TRACE_SYSCALL_TABLE(getpgid, getpgid, 4132, 1)
#endif
#ifndef OVERRIDE_TABLE_32_fchdir
TRACE_SYSCALL_TABLE(fchdir, fchdir, 4133, 1)
#endif
#ifndef OVERRIDE_TABLE_32_bdflush
TRACE_SYSCALL_TABLE(bdflush, bdflush, 4134, 2)
#endif
#ifndef OVERRIDE_TABLE_32_sysfs
TRACE_SYSCALL_TABLE(sysfs, sysfs, 4135, 3)
#endif
#ifndef OVERRIDE_TABLE_32_personality
TRACE_SYSCALL_TABLE(personality, personality, 4136, 1)
#endif
#ifndef OVERRIDE_TABLE_32_setfsuid
TRACE_SYSCALL_TABLE(setfsuid, setfsuid, 4138, 1)
#endif
#ifndef OVERRIDE_TABLE_32_setfsgid
TRACE_SYSCALL_TABLE(setfsgid, setfsgid, 4139, 1)
#endif
#ifndef OVERRIDE_TABLE_32_flock
TRACE_SYSCALL_TABLE(flock, flock, 4143, 2)
#endif
#ifndef OVERRIDE_TABLE_32_msync
TRACE_SYSCALL_TABLE(msync, msync, 4144, 3)
#endif
#ifndef OVERRIDE_TABLE_32_cacheflush
TRACE_SYSCALL_TABLE(cacheflush, cacheflush, 4147, 3)
#endif
#ifndef OVERRIDE_TABLE_32_sysmips
TRACE_SYSCALL_TABLE(sysmips, sysmips, 4149, 3)
#endif
#ifndef OVERRIDE_TABLE_32_getsid
TRACE_SYSCALL_TABLE(getsid, getsid, 4151, 1)
#endif
#ifndef OVERRIDE_TABLE_32_fdatasync
TRACE_SYSCALL_TABLE(fdatasync, fdatasync, 4152, 1)
#endif
#ifndef OVERRIDE_TABLE_32_mlock
TRACE_SYSCALL_TABLE(mlock, mlock, 4154, 2)
#endif
#ifndef OVERRIDE_TABLE_32_munlock
TRACE_SYSCALL_TABLE(munlock, munlock, 4155, 2)
#endif
#ifndef OVERRIDE_TABLE_32_mlockall
TRACE_SYSCALL_TABLE(mlockall, mlockall, 4156, 1)
#endif
#ifndef OVERRIDE_TABLE_32_sched_getscheduler
TRACE_SYSCALL_TABLE(sched_getscheduler, sched_getscheduler, 4161, 1)
#endif
#ifndef OVERRIDE_TABLE_32_sched_get_priority_max
TRACE_SYSCALL_TABLE(sched_get_priority_max, sched_get_priority_max, 4163, 1)
#endif
#ifndef OVERRIDE_TABLE_32_sched_get_priority_min
TRACE_SYSCALL_TABLE(sched_get_priority_min, sched_get_priority_min, 4164, 1)
#endif
#ifndef OVERRIDE_TABLE_32_mremap
TRACE_SYSCALL_TABLE(mremap, mremap, 4167, 5)
#endif
#ifndef OVERRIDE_TABLE_32_listen
TRACE_SYSCALL_TABLE(listen, listen, 4174, 2)
#endif
#ifndef OVERRIDE_TABLE_32_shutdown
TRACE_SYSCALL_TABLE(shutdown, shutdown, 4182, 2)
#endif
#ifndef OVERRIDE_TABLE_32_socket
TRACE_SYSCALL_TABLE(socket, socket, 4183, 3)
#endif
#ifndef OVERRIDE_TABLE_32_setresuid
TRACE_SYSCALL_TABLE(setresuid, setresuid, 4185, 3)
#endif
#ifndef OVERRIDE_TABLE_32_setresgid
TRACE_SYSCALL_TABLE(setresgid, setresgid, 4190, 3)
#endif
#ifndef OVERRIDE_TABLE_32_prctl
TRACE_SYSCALL_TABLE(prctl, prctl, 4192, 5)
#endif
#ifndef OVERRIDE_TABLE_32_mips_mmap2
TRACE_SYSCALL_TABLE(mips_mmap2, mips_mmap2, 4210, 6)
#endif
#ifndef OVERRIDE_TABLE_32_ftruncate64
TRACE_SYSCALL_TABLE(ftruncate64, ftruncate64, 4212, 2)
#endif
#ifndef OVERRIDE_TABLE_32_madvise
TRACE_SYSCALL_TABLE(madvise, madvise, 4218, 3)
#endif
#ifndef OVERRIDE_TABLE_32_fcntl64
TRACE_SYSCALL_TABLE(fcntl64, fcntl64, 4220, 3)
#endif
#ifndef OVERRIDE_TABLE_32_readahead
TRACE_SYSCALL_TABLE(readahead, readahead, 4223, 3)
#endif
#ifndef OVERRIDE_TABLE_32_tkill
TRACE_SYSCALL_TABLE(tkill, tkill, 4236, 2)
#endif
#ifndef OVERRIDE_TABLE_32_io_destroy
TRACE_SYSCALL_TABLE(io_destroy, io_destroy, 4242, 1)
#endif
#ifndef OVERRIDE_TABLE_32_exit_group
TRACE_SYSCALL_TABLE(exit_group, exit_group, 4246, 1)
#endif
#ifndef OVERRIDE_TABLE_32_epoll_create
TRACE_SYSCALL_TABLE(epoll_create, epoll_create, 4248, 1)
#endif
#ifndef OVERRIDE_TABLE_32_remap_file_pages
TRACE_SYSCALL_TABLE(remap_file_pages, remap_file_pages, 4251, 5)
#endif
#ifndef OVERRIDE_TABLE_32_fadvise64_64
TRACE_SYSCALL_TABLE(fadvise64_64, fadvise64_64, 4254, 4)
#endif
#ifndef OVERRIDE_TABLE_32_timer_getoverrun
TRACE_SYSCALL_TABLE(timer_getoverrun, timer_getoverrun, 4260, 1)
#endif
#ifndef OVERRIDE_TABLE_32_timer_delete
TRACE_SYSCALL_TABLE(timer_delete, timer_delete, 4261, 1)
#endif
#ifndef OVERRIDE_TABLE_32_tgkill
TRACE_SYSCALL_TABLE(tgkill, tgkill, 4266, 3)
#endif
#ifndef OVERRIDE_TABLE_32_set_thread_area
TRACE_SYSCALL_TABLE(set_thread_area, set_thread_area, 4283, 1)
#endif
#ifndef OVERRIDE_TABLE_32_inotify_rm_watch
TRACE_SYSCALL_TABLE(inotify_rm_watch, inotify_rm_watch, 4286, 2)
#endif
#ifndef OVERRIDE_TABLE_32_unshare
TRACE_SYSCALL_TABLE(unshare, unshare, 4303, 1)
#endif
#ifndef OVERRIDE_TABLE_32_sync_file_range
TRACE_SYSCALL_TABLE(sync_file_range, sync_file_range, 4305, 4)
#endif
#ifndef OVERRIDE_TABLE_32_tee
TRACE_SYSCALL_TABLE(tee, tee, 4306, 4)
#endif
#ifndef OVERRIDE_TABLE_32_ioprio_set
TRACE_SYSCALL_TABLE(ioprio_set, ioprio_set, 4314, 3)
#endif
#ifndef OVERRIDE_TABLE_32_ioprio_get
TRACE_SYSCALL_TABLE(ioprio_get, ioprio_get, 4315, 2)
#endif
#ifndef OVERRIDE_TABLE_32_eventfd
TRACE_SYSCALL_TABLE(eventfd, eventfd, 4319, 1)
#endif
#ifndef OVERRIDE_TABLE_32_fallocate
TRACE_SYSCALL_TABLE(fallocate, fallocate, 4320, 4)
#endif
#ifndef OVERRIDE_TABLE_32_timerfd_create
TRACE_SYSCALL_TABLE(timerfd_create, timerfd_create, 4321, 2)
#endif
#ifndef OVERRIDE_TABLE_32_eventfd2
TRACE_SYSCALL_TABLE(eventfd2, eventfd2, 4325, 2)
#endif
#ifndef OVERRIDE_TABLE_32_epoll_create1
TRACE_SYSCALL_TABLE(epoll_create1, epoll_create1, 4326, 1)
#endif
#ifndef OVERRIDE_TABLE_32_dup3
TRACE_SYSCALL_TABLE(dup3, dup3, 4327, 3)
#endif
#ifndef OVERRIDE_TABLE_32_inotify_init1
TRACE_SYSCALL_TABLE(inotify_init1, inotify_init1, 4329, 1)
#endif
#ifndef OVERRIDE_TABLE_32_syncfs
TRACE_SYSCALL_TABLE(syncfs, syncfs, 4342, 1)
#endif
#ifndef OVERRIDE_TABLE_32_setns
TRACE_SYSCALL_TABLE(setns, setns, 4344, 2)
#endif

#endif /* CREATE_SYSCALL_TABLE */

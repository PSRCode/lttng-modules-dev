/* THIS FILE IS AUTO-GENERATED. DO NOT EDIT */
#ifndef CREATE_SYSCALL_TABLE

#if !defined(_TRACE_SYSCALLS_POINTERS_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_SYSCALLS_POINTERS_H

#include "../../../probes/lttng-tracepoint-event.h"
#include <linux/syscalls.h>
#include "powerpc-32-syscalls-3.0.34_pointers_override.h"
#include "syscalls_pointers_override.h"

#ifndef OVERRIDE_32_unlink
SC_LTTNG_TRACEPOINT_EVENT(unlink,
	TP_PROTO(sc_exit(long ret,) const char * pathname),
	TP_ARGS(sc_exit(ret,) pathname),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                                    
#ifndef OVERRIDE_32_chdir
SC_LTTNG_TRACEPOINT_EVENT(chdir,
	TP_PROTO(sc_exit(long ret,) const char * filename),
	TP_ARGS(sc_exit(ret,) filename),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                                     
#ifndef OVERRIDE_32_time
SC_LTTNG_TRACEPOINT_EVENT(time,
	TP_PROTO(sc_exit(long ret,) time_t * tloc),
	TP_ARGS(sc_exit(ret,) tloc),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(time_t *, tloc))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(tloc, tloc))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                                              
#ifndef OVERRIDE_32_oldumount
SC_LTTNG_TRACEPOINT_EVENT(oldumount,
	TP_PROTO(sc_exit(long ret,) char * name),
	TP_ARGS(sc_exit(ret,) name),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__string_from_user(name, name))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_copy_string_from_user(name, name))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                                           
#ifndef OVERRIDE_32_stime
SC_LTTNG_TRACEPOINT_EVENT(stime,
	TP_PROTO(sc_exit(long ret,) time_t * tptr),
	TP_ARGS(sc_exit(ret,) tptr),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(time_t *, tptr))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(tptr, tptr))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                                             
#ifndef OVERRIDE_32_rmdir
SC_LTTNG_TRACEPOINT_EVENT(rmdir,
	TP_PROTO(sc_exit(long ret,) const char * pathname),
	TP_ARGS(sc_exit(ret,) pathname),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_pipe
SC_LTTNG_TRACEPOINT_EVENT(pipe,
	TP_PROTO(sc_exit(long ret,) int * fildes),
	TP_ARGS(sc_exit(ret,) fildes),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(int *, fildes))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(fildes, fildes))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_times
SC_LTTNG_TRACEPOINT_EVENT(times,
	TP_PROTO(sc_exit(long ret,) struct tms * tbuf),
	TP_ARGS(sc_exit(ret,) tbuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(struct tms *, tbuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(tbuf, tbuf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_acct
SC_LTTNG_TRACEPOINT_EVENT(acct,
	TP_PROTO(sc_exit(long ret,) const char * name),
	TP_ARGS(sc_exit(ret,) name),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(name, name))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(name, name))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_olduname
SC_LTTNG_TRACEPOINT_EVENT(olduname,
	TP_PROTO(sc_exit(long ret,) struct oldold_utsname * name),
	TP_ARGS(sc_exit(ret,) name),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(struct oldold_utsname *, name))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(name, name))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_chroot
SC_LTTNG_TRACEPOINT_EVENT(chroot,
	TP_PROTO(sc_exit(long ret,) const char * filename),
	TP_ARGS(sc_exit(ret,) filename),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sigpending
SC_LTTNG_TRACEPOINT_EVENT(sigpending,
	TP_PROTO(sc_exit(long ret,) old_sigset_t * set),
	TP_ARGS(sc_exit(ret,) set),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(old_sigset_t *, set))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(set, set))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_uselib
SC_LTTNG_TRACEPOINT_EVENT(uselib,
	TP_PROTO(sc_exit(long ret,) const char * library),
	TP_ARGS(sc_exit(ret,) library),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(const char *, library))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(library, library))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_uname
SC_LTTNG_TRACEPOINT_EVENT(uname,
	TP_PROTO(sc_exit(long ret,) struct old_utsname * name),
	TP_ARGS(sc_exit(ret,) name),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(struct old_utsname *, name))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(name, name))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_swapoff
SC_LTTNG_TRACEPOINT_EVENT(swapoff,
	TP_PROTO(sc_exit(long ret,) const char * specialfile),
	TP_ARGS(sc_exit(ret,) specialfile),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(specialfile, specialfile))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(specialfile, specialfile))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sysinfo
SC_LTTNG_TRACEPOINT_EVENT(sysinfo,
	TP_PROTO(sc_exit(long ret,) struct sysinfo * info),
	TP_ARGS(sc_exit(ret,) info),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(struct sysinfo *, info))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(info, info))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_newuname
SC_LTTNG_TRACEPOINT_EVENT(newuname,
	TP_PROTO(sc_exit(long ret,) struct new_utsname * name),
	TP_ARGS(sc_exit(ret,) name),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(struct new_utsname *, name))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(name, name))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_adjtimex
SC_LTTNG_TRACEPOINT_EVENT(adjtimex,
	TP_PROTO(sc_exit(long ret,) struct timex * txc_p),
	TP_ARGS(sc_exit(ret,) txc_p),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(struct timex *, txc_p))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(txc_p, txc_p))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sysctl
SC_LTTNG_TRACEPOINT_EVENT(sysctl,
	TP_PROTO(sc_exit(long ret,) struct __sysctl_args * args),
	TP_ARGS(sc_exit(ret,) args),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(struct __sysctl_args *, args))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(args, args))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_set_tid_address
SC_LTTNG_TRACEPOINT_EVENT(set_tid_address,
	TP_PROTO(sc_exit(long ret,) int * tidptr),
	TP_ARGS(sc_exit(ret,) tidptr),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field_hex(int *, tidptr))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(tidptr, tidptr))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mq_unlink
SC_LTTNG_TRACEPOINT_EVENT(mq_unlink,
	TP_PROTO(sc_exit(long ret,) const char * u_name),
	TP_ARGS(sc_exit(ret,) u_name),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(u_name, u_name))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(u_name, u_name))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_creat
SC_LTTNG_TRACEPOINT_EVENT(creat,
	TP_PROTO(sc_exit(long ret,) const char * pathname, int mode),
	TP_ARGS(sc_exit(ret,) pathname, mode),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_in(__field(int, mode))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_assign(mode, mode))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                           
#ifndef OVERRIDE_32_link
SC_LTTNG_TRACEPOINT_EVENT(link,
	TP_PROTO(sc_exit(long ret,) const char * oldname, const char * newname),
	TP_ARGS(sc_exit(ret,) oldname, newname),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(oldname, oldname)) sc_in(__string_from_user(newname, newname))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(oldname, oldname)) sc_in(tp_copy_string_from_user(newname, newname))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                 
#ifndef OVERRIDE_32_chmod
SC_LTTNG_TRACEPOINT_EVENT(chmod,
	TP_PROTO(sc_exit(long ret,) const char * filename, mode_t mode),
	TP_ARGS(sc_exit(ret,) filename, mode),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename)) sc_in(__field(mode_t, mode))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(mode, mode))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                       
#ifndef OVERRIDE_32_stat
SC_LTTNG_TRACEPOINT_EVENT(stat,
	TP_PROTO(sc_exit(long ret,) const char * filename, struct __old_kernel_stat * statbuf),
	TP_ARGS(sc_exit(ret,) filename, statbuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__string_from_user(filename, filename)) sc_inout(__field_hex(struct __old_kernel_stat *, statbuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_copy_string_from_user(filename, filename)) sc_inout(tp_assign(statbuf, statbuf))),
	TP_printk()
)
#endif                                                                                                                                                                                                                 
#ifndef OVERRIDE_32_fstat
SC_LTTNG_TRACEPOINT_EVENT(fstat,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, struct __old_kernel_stat * statbuf),
	TP_ARGS(sc_exit(ret,) fd, statbuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned int, fd)) sc_inout(__field_hex(struct __old_kernel_stat *, statbuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(statbuf, statbuf))),
	TP_printk()
)
#endif                                                                                                                                                                                                                      
#ifndef OVERRIDE_32_utime
SC_LTTNG_TRACEPOINT_EVENT(utime,
	TP_PROTO(sc_exit(long ret,) char * filename, struct utimbuf * times),
	TP_ARGS(sc_exit(ret,) filename, times),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename)) sc_in(__field_hex(struct utimbuf *, times))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(times, times))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                  
#ifndef OVERRIDE_32_access
SC_LTTNG_TRACEPOINT_EVENT(access,
	TP_PROTO(sc_exit(long ret,) const char * filename, int mode),
	TP_ARGS(sc_exit(ret,) filename, mode),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename)) sc_in(__field(int, mode))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(mode, mode))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                         
#ifndef OVERRIDE_32_rename
SC_LTTNG_TRACEPOINT_EVENT(rename,
	TP_PROTO(sc_exit(long ret,) const char * oldname, const char * newname),
	TP_ARGS(sc_exit(ret,) oldname, newname),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(oldname, oldname)) sc_in(__string_from_user(newname, newname))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(oldname, oldname)) sc_in(tp_copy_string_from_user(newname, newname))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mkdir
SC_LTTNG_TRACEPOINT_EVENT(mkdir,
	TP_PROTO(sc_exit(long ret,) const char * pathname, int mode),
	TP_ARGS(sc_exit(ret,) pathname, mode),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_in(__field(int, mode))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_assign(mode, mode))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_umount
SC_LTTNG_TRACEPOINT_EVENT(umount,
	TP_PROTO(sc_exit(long ret,) char * name, int flags),
	TP_ARGS(sc_exit(ret,) name, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(name, name)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(name, name)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_ustat
SC_LTTNG_TRACEPOINT_EVENT(ustat,
	TP_PROTO(sc_exit(long ret,) unsigned dev, struct ustat * ubuf),
	TP_ARGS(sc_exit(ret,) dev, ubuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned, dev)) sc_out(__field_hex(struct ustat *, ubuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dev, dev)) sc_out(tp_assign(ubuf, ubuf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sethostname
SC_LTTNG_TRACEPOINT_EVENT(sethostname,
	TP_PROTO(sc_exit(long ret,) char * name, int len),
	TP_ARGS(sc_exit(ret,) name, len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(name, name)) sc_in(__field(int, len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(name, name)) sc_in(tp_assign(len, len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setrlimit
SC_LTTNG_TRACEPOINT_EVENT(setrlimit,
	TP_PROTO(sc_exit(long ret,) unsigned int resource, struct rlimit * rlim),
	TP_ARGS(sc_exit(ret,) resource, rlim),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, resource)) sc_in(__field_hex(struct rlimit *, rlim))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(resource, resource)) sc_in(tp_assign(rlim, rlim))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_old_getrlimit
SC_LTTNG_TRACEPOINT_EVENT(old_getrlimit,
	TP_PROTO(sc_exit(long ret,) unsigned int resource, struct rlimit * rlim),
	TP_ARGS(sc_exit(ret,) resource, rlim),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned int, resource)) sc_inout(__field_hex(struct rlimit *, rlim))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(resource, resource)) sc_inout(tp_assign(rlim, rlim))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getrusage
SC_LTTNG_TRACEPOINT_EVENT(getrusage,
	TP_PROTO(sc_exit(long ret,) int who, struct rusage * ru),
	TP_ARGS(sc_exit(ret,) who, ru),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, who)) sc_out(__field_hex(struct rusage *, ru))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(who, who)) sc_out(tp_assign(ru, ru))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_gettimeofday
SC_LTTNG_TRACEPOINT_EVENT(gettimeofday,
	TP_PROTO(sc_exit(long ret,) struct timeval * tv, struct timezone * tz),
	TP_ARGS(sc_exit(ret,) tv, tz),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(struct timeval *, tv)) sc_out(__field_hex(struct timezone *, tz))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(tv, tv)) sc_out(tp_assign(tz, tz))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_settimeofday
SC_LTTNG_TRACEPOINT_EVENT(settimeofday,
	TP_PROTO(sc_exit(long ret,) struct timeval * tv, struct timezone * tz),
	TP_ARGS(sc_exit(ret,) tv, tz),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field_hex(struct timeval *, tv)) sc_in(__field_hex(struct timezone *, tz))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(tv, tv)) sc_in(tp_assign(tz, tz))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getgroups
SC_LTTNG_TRACEPOINT_EVENT(getgroups,
	TP_PROTO(sc_exit(long ret,) int gidsetsize, gid_t * grouplist),
	TP_ARGS(sc_exit(ret,) gidsetsize, grouplist),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, gidsetsize)) sc_out(__field_hex(gid_t *, grouplist))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(gidsetsize, gidsetsize)) sc_out(tp_assign(grouplist, grouplist))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setgroups
SC_LTTNG_TRACEPOINT_EVENT(setgroups,
	TP_PROTO(sc_exit(long ret,) int gidsetsize, gid_t * grouplist),
	TP_ARGS(sc_exit(ret,) gidsetsize, grouplist),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, gidsetsize)) sc_in(__field_hex(gid_t *, grouplist))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(gidsetsize, gidsetsize)) sc_in(tp_assign(grouplist, grouplist))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_symlink
SC_LTTNG_TRACEPOINT_EVENT(symlink,
	TP_PROTO(sc_exit(long ret,) const char * oldname, const char * newname),
	TP_ARGS(sc_exit(ret,) oldname, newname),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(oldname, oldname)) sc_in(__string_from_user(newname, newname))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(oldname, oldname)) sc_in(tp_copy_string_from_user(newname, newname))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_lstat
SC_LTTNG_TRACEPOINT_EVENT(lstat,
	TP_PROTO(sc_exit(long ret,) const char * filename, struct __old_kernel_stat * statbuf),
	TP_ARGS(sc_exit(ret,) filename, statbuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__string_from_user(filename, filename)) sc_inout(__field_hex(struct __old_kernel_stat *, statbuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_copy_string_from_user(filename, filename)) sc_inout(tp_assign(statbuf, statbuf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_swapon
SC_LTTNG_TRACEPOINT_EVENT(swapon,
	TP_PROTO(sc_exit(long ret,) const char * specialfile, int swap_flags),
	TP_ARGS(sc_exit(ret,) specialfile, swap_flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(specialfile, specialfile)) sc_in(__field(int, swap_flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(specialfile, specialfile)) sc_in(tp_assign(swap_flags, swap_flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_truncate
SC_LTTNG_TRACEPOINT_EVENT(truncate,
	TP_PROTO(sc_exit(long ret,) const char * path, long length),
	TP_ARGS(sc_exit(ret,) path, length),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(path, path)) sc_in(__field(long, length))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(path, path)) sc_in(tp_assign(length, length))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_statfs
SC_LTTNG_TRACEPOINT_EVENT(statfs,
	TP_PROTO(sc_exit(long ret,) const char * pathname, struct statfs * buf),
	TP_ARGS(sc_exit(ret,) pathname, buf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_out(__field_hex(struct statfs *, buf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_out(tp_assign(buf, buf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fstatfs
SC_LTTNG_TRACEPOINT_EVENT(fstatfs,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, struct statfs * buf),
	TP_ARGS(sc_exit(ret,) fd, buf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_out(__field_hex(struct statfs *, buf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(buf, buf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_socketcall
SC_LTTNG_TRACEPOINT_EVENT(socketcall,
	TP_PROTO(sc_exit(long ret,) int call, unsigned long * args),
	TP_ARGS(sc_exit(ret,) call, args),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(int, call)) sc_inout(__field_hex(unsigned long *, args))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(call, call)) sc_inout(tp_assign(args, args))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getitimer
SC_LTTNG_TRACEPOINT_EVENT(getitimer,
	TP_PROTO(sc_exit(long ret,) int which, struct itimerval * value),
	TP_ARGS(sc_exit(ret,) which, value),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, which)) sc_out(__field_hex(struct itimerval *, value))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which, which)) sc_out(tp_assign(value, value))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_newstat
SC_LTTNG_TRACEPOINT_EVENT(newstat,
	TP_PROTO(sc_exit(long ret,) const char * filename, struct stat * statbuf),
	TP_ARGS(sc_exit(ret,) filename, statbuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename)) sc_out(__field_hex(struct stat *, statbuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename)) sc_out(tp_assign(statbuf, statbuf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_newlstat
SC_LTTNG_TRACEPOINT_EVENT(newlstat,
	TP_PROTO(sc_exit(long ret,) const char * filename, struct stat * statbuf),
	TP_ARGS(sc_exit(ret,) filename, statbuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename)) sc_out(__field_hex(struct stat *, statbuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename)) sc_out(tp_assign(statbuf, statbuf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_newfstat
SC_LTTNG_TRACEPOINT_EVENT(newfstat,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, struct stat * statbuf),
	TP_ARGS(sc_exit(ret,) fd, statbuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_out(__field_hex(struct stat *, statbuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(statbuf, statbuf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setdomainname
SC_LTTNG_TRACEPOINT_EVENT(setdomainname,
	TP_PROTO(sc_exit(long ret,) char * name, int len),
	TP_ARGS(sc_exit(ret,) name, len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(name, name)) sc_in(__field(int, len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(name, name)) sc_in(tp_assign(len, len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_delete_module
SC_LTTNG_TRACEPOINT_EVENT(delete_module,
	TP_PROTO(sc_exit(long ret,) const char * name_user, unsigned int flags),
	TP_ARGS(sc_exit(ret,) name_user, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(name_user, name_user)) sc_in(__field(unsigned int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(name_user, name_user)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sched_setparam
SC_LTTNG_TRACEPOINT_EVENT(sched_setparam,
	TP_PROTO(sc_exit(long ret,) pid_t pid, struct sched_param * param),
	TP_ARGS(sc_exit(ret,) pid, param),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_in(__field_hex(struct sched_param *, param))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(param, param))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sched_getparam
SC_LTTNG_TRACEPOINT_EVENT(sched_getparam,
	TP_PROTO(sc_exit(long ret,) pid_t pid, struct sched_param * param),
	TP_ARGS(sc_exit(ret,) pid, param),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_out(__field_hex(struct sched_param *, param))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_out(tp_assign(param, param))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sched_rr_get_interval
SC_LTTNG_TRACEPOINT_EVENT(sched_rr_get_interval,
	TP_PROTO(sc_exit(long ret,) pid_t pid, struct timespec * interval),
	TP_ARGS(sc_exit(ret,) pid, interval),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_out(__field_hex(struct timespec *, interval))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_out(tp_assign(interval, interval))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_nanosleep
SC_LTTNG_TRACEPOINT_EVENT(nanosleep,
	TP_PROTO(sc_exit(long ret,) struct timespec * rqtp, struct timespec * rmtp),
	TP_ARGS(sc_exit(ret,) rqtp, rmtp),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field_hex(struct timespec *, rqtp)) sc_out(__field_hex(struct timespec *, rmtp))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(rqtp, rqtp)) sc_out(tp_assign(rmtp, rmtp))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_rt_sigpending
SC_LTTNG_TRACEPOINT_EVENT(rt_sigpending,
	TP_PROTO(sc_exit(long ret,) sigset_t * set, size_t sigsetsize),
	TP_ARGS(sc_exit(ret,) set, sigsetsize),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(sigset_t *, set)) sc_in(__field(size_t, sigsetsize))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(set, set)) sc_in(tp_assign(sigsetsize, sigsetsize))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_rt_sigsuspend
SC_LTTNG_TRACEPOINT_EVENT(rt_sigsuspend,
	TP_PROTO(sc_exit(long ret,) sigset_t * unewset, size_t sigsetsize),
	TP_ARGS(sc_exit(ret,) unewset, sigsetsize),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field_hex(sigset_t *, unewset)) sc_in(__field(size_t, sigsetsize))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(unewset, unewset)) sc_in(tp_assign(sigsetsize, sigsetsize))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getcwd
SC_LTTNG_TRACEPOINT_EVENT(getcwd,
	TP_PROTO(sc_exit(long ret,) char * buf, unsigned long size),
	TP_ARGS(sc_exit(ret,) buf, size),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(char *, buf)) sc_in(__field(unsigned long, size))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(buf, buf)) sc_in(tp_assign(size, size))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getrlimit
SC_LTTNG_TRACEPOINT_EVENT(getrlimit,
	TP_PROTO(sc_exit(long ret,) unsigned int resource, struct rlimit * rlim),
	TP_ARGS(sc_exit(ret,) resource, rlim),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, resource)) sc_out(__field_hex(struct rlimit *, rlim))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(resource, resource)) sc_out(tp_assign(rlim, rlim))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_stat64
SC_LTTNG_TRACEPOINT_EVENT(stat64,
	TP_PROTO(sc_exit(long ret,) const char * filename, struct stat64 * statbuf),
	TP_ARGS(sc_exit(ret,) filename, statbuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__string_from_user(filename, filename)) sc_inout(__field_hex(struct stat64 *, statbuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_copy_string_from_user(filename, filename)) sc_inout(tp_assign(statbuf, statbuf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_lstat64
SC_LTTNG_TRACEPOINT_EVENT(lstat64,
	TP_PROTO(sc_exit(long ret,) const char * filename, struct stat64 * statbuf),
	TP_ARGS(sc_exit(ret,) filename, statbuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__string_from_user(filename, filename)) sc_inout(__field_hex(struct stat64 *, statbuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_copy_string_from_user(filename, filename)) sc_inout(tp_assign(statbuf, statbuf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fstat64
SC_LTTNG_TRACEPOINT_EVENT(fstat64,
	TP_PROTO(sc_exit(long ret,) unsigned long fd, struct stat64 * statbuf),
	TP_ARGS(sc_exit(ret,) fd, statbuf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned long, fd)) sc_inout(__field_hex(struct stat64 *, statbuf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(statbuf, statbuf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_pivot_root
SC_LTTNG_TRACEPOINT_EVENT(pivot_root,
	TP_PROTO(sc_exit(long ret,) const char * new_root, const char * put_old),
	TP_ARGS(sc_exit(ret,) new_root, put_old),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(new_root, new_root)) sc_in(__string_from_user(put_old, put_old))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(new_root, new_root)) sc_in(tp_copy_string_from_user(put_old, put_old))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_removexattr
SC_LTTNG_TRACEPOINT_EVENT(removexattr,
	TP_PROTO(sc_exit(long ret,) const char * pathname, const char * name),
	TP_ARGS(sc_exit(ret,) pathname, name),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_in(__string_from_user(name, name))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_copy_string_from_user(name, name))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_lremovexattr
SC_LTTNG_TRACEPOINT_EVENT(lremovexattr,
	TP_PROTO(sc_exit(long ret,) const char * pathname, const char * name),
	TP_ARGS(sc_exit(ret,) pathname, name),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_in(__string_from_user(name, name))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_copy_string_from_user(name, name))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fremovexattr
SC_LTTNG_TRACEPOINT_EVENT(fremovexattr,
	TP_PROTO(sc_exit(long ret,) int fd, const char * name),
	TP_ARGS(sc_exit(ret,) fd, name),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__string_from_user(name, name))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_copy_string_from_user(name, name))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_io_setup
SC_LTTNG_TRACEPOINT_EVENT(io_setup,
	TP_PROTO(sc_exit(long ret,) unsigned nr_events, aio_context_t * ctxp),
	TP_ARGS(sc_exit(ret,) nr_events, ctxp),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned, nr_events)) sc_in(__field_hex(aio_context_t *, ctxp))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(nr_events, nr_events)) sc_in(tp_assign(ctxp, ctxp))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_timer_gettime
SC_LTTNG_TRACEPOINT_EVENT(timer_gettime,
	TP_PROTO(sc_exit(long ret,) timer_t timer_id, struct itimerspec * setting),
	TP_ARGS(sc_exit(ret,) timer_id, setting),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(timer_t, timer_id)) sc_out(__field_hex(struct itimerspec *, setting))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(timer_id, timer_id)) sc_out(tp_assign(setting, setting))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_clock_settime
SC_LTTNG_TRACEPOINT_EVENT(clock_settime,
	TP_PROTO(sc_exit(long ret,) const clockid_t which_clock, const struct timespec * tp),
	TP_ARGS(sc_exit(ret,) which_clock, tp),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(const clockid_t, which_clock)) sc_in(__field_hex(const struct timespec *, tp))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which_clock, which_clock)) sc_in(tp_assign(tp, tp))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_clock_gettime
SC_LTTNG_TRACEPOINT_EVENT(clock_gettime,
	TP_PROTO(sc_exit(long ret,) const clockid_t which_clock, struct timespec * tp),
	TP_ARGS(sc_exit(ret,) which_clock, tp),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(const clockid_t, which_clock)) sc_out(__field_hex(struct timespec *, tp))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which_clock, which_clock)) sc_out(tp_assign(tp, tp))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_clock_getres
SC_LTTNG_TRACEPOINT_EVENT(clock_getres,
	TP_PROTO(sc_exit(long ret,) const clockid_t which_clock, struct timespec * tp),
	TP_ARGS(sc_exit(ret,) which_clock, tp),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(const clockid_t, which_clock)) sc_out(__field_hex(struct timespec *, tp))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which_clock, which_clock)) sc_out(tp_assign(tp, tp))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_utimes
SC_LTTNG_TRACEPOINT_EVENT(utimes,
	TP_PROTO(sc_exit(long ret,) char * filename, struct timeval * utimes),
	TP_ARGS(sc_exit(ret,) filename, utimes),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename)) sc_in(__field_hex(struct timeval *, utimes))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(utimes, utimes))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mq_notify
SC_LTTNG_TRACEPOINT_EVENT(mq_notify,
	TP_PROTO(sc_exit(long ret,) mqd_t mqdes, const struct sigevent * u_notification),
	TP_ARGS(sc_exit(ret,) mqdes, u_notification),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(mqd_t, mqdes)) sc_in(__field_hex(const struct sigevent *, u_notification))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(mqdes, mqdes)) sc_in(tp_assign(u_notification, u_notification))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_set_robust_list
SC_LTTNG_TRACEPOINT_EVENT(set_robust_list,
	TP_PROTO(sc_exit(long ret,) struct robust_list_head * head, size_t len),
	TP_ARGS(sc_exit(ret,) head, len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field_hex(struct robust_list_head *, head)) sc_in(__field(size_t, len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(head, head)) sc_in(tp_assign(len, len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_timerfd_gettime
SC_LTTNG_TRACEPOINT_EVENT(timerfd_gettime,
	TP_PROTO(sc_exit(long ret,) int ufd, struct itimerspec * otmr),
	TP_ARGS(sc_exit(ret,) ufd, otmr),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, ufd)) sc_out(__field_hex(struct itimerspec *, otmr))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(ufd, ufd)) sc_out(tp_assign(otmr, otmr))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_pipe2
SC_LTTNG_TRACEPOINT_EVENT(pipe2,
	TP_PROTO(sc_exit(long ret,) int * fildes, int flags),
	TP_ARGS(sc_exit(ret,) fildes, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(int *, fildes)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(fildes, fildes)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_clock_adjtime
SC_LTTNG_TRACEPOINT_EVENT(clock_adjtime,
	TP_PROTO(sc_exit(long ret,) const clockid_t which_clock, struct timex * utx),
	TP_ARGS(sc_exit(ret,) which_clock, utx),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(const clockid_t, which_clock)) sc_inout(__field_hex(struct timex *, utx))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which_clock, which_clock)) sc_inout(tp_assign(utx, utx))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_read
SC_LTTNG_TRACEPOINT_EVENT(read,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, char * buf, size_t count),
	TP_ARGS(sc_exit(ret,) fd, buf, count),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_out(__field_hex(char *, buf)) sc_in(__field(size_t, count))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(buf, buf)) sc_in(tp_assign(count, count))),
	TP_printk()
)
#endif                                                                                                                                                                            
#ifndef OVERRIDE_32_write
SC_LTTNG_TRACEPOINT_EVENT(write,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, const char * buf, size_t count),
	TP_ARGS(sc_exit(ret,) fd, buf, count),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_in(__field_hex(const char *, buf)) sc_in(__field(size_t, count))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(buf, buf)) sc_in(tp_assign(count, count))),
	TP_printk()
)
#endif                                                                                                                                                                                                                          
#ifndef OVERRIDE_32_open
SC_LTTNG_TRACEPOINT_EVENT(open,
	TP_PROTO(sc_exit(long ret,) const char * filename, int flags, int mode),
	TP_ARGS(sc_exit(ret,) filename, flags, mode),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename)) sc_in(__field(int, flags)) sc_in(__field(int, mode))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(flags, flags)) sc_in(tp_assign(mode, mode))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                
#ifndef OVERRIDE_32_waitpid
SC_LTTNG_TRACEPOINT_EVENT(waitpid,
	TP_PROTO(sc_exit(long ret,) pid_t pid, int * stat_addr, int options),
	TP_ARGS(sc_exit(ret,) pid, stat_addr, options),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(pid_t, pid)) sc_inout(__field_hex(int *, stat_addr)) sc_inout(__field(int, options))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(pid, pid)) sc_inout(tp_assign(stat_addr, stat_addr)) sc_inout(tp_assign(options, options))),
	TP_printk()
)
#endif                                                                                                                                                                                                                                
#ifndef OVERRIDE_32_mknod
SC_LTTNG_TRACEPOINT_EVENT(mknod,
	TP_PROTO(sc_exit(long ret,) const char * filename, int mode, unsigned dev),
	TP_ARGS(sc_exit(ret,) filename, mode, dev),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename)) sc_in(__field(int, mode)) sc_in(__field(unsigned, dev))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(mode, mode)) sc_in(tp_assign(dev, dev))),
	TP_printk()
)
#endif                                                                                                                                                                                                                           
#ifndef OVERRIDE_32_lchown
SC_LTTNG_TRACEPOINT_EVENT(lchown,
	TP_PROTO(sc_exit(long ret,) const char * filename, uid_t user, gid_t group),
	TP_ARGS(sc_exit(ret,) filename, user, group),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename)) sc_in(__field(uid_t, user)) sc_in(__field(gid_t, group))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(user, user)) sc_in(tp_assign(group, group))),
	TP_printk()
)
#endif                                                                                                                                                                                                                         
#ifndef OVERRIDE_32_readlink
SC_LTTNG_TRACEPOINT_EVENT(readlink,
	TP_PROTO(sc_exit(long ret,) const char * path, char * buf, int bufsiz),
	TP_ARGS(sc_exit(ret,) path, buf, bufsiz),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(path, path)) sc_out(__field_hex(char *, buf)) sc_in(__field(int, bufsiz))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(path, path)) sc_out(tp_assign(buf, buf)) sc_in(tp_assign(bufsiz, bufsiz))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_old_readdir
SC_LTTNG_TRACEPOINT_EVENT(old_readdir,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, struct old_linux_dirent * dirent, unsigned int count),
	TP_ARGS(sc_exit(ret,) fd, dirent, count),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned int, fd)) sc_inout(__field_hex(struct old_linux_dirent *, dirent)) sc_inout(__field(unsigned int, count))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(dirent, dirent)) sc_inout(tp_assign(count, count))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_syslog
SC_LTTNG_TRACEPOINT_EVENT(syslog,
	TP_PROTO(sc_exit(long ret,) int type, char * buf, int len),
	TP_ARGS(sc_exit(ret,) type, buf, len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, type)) sc_out(__field_hex(char *, buf)) sc_in(__field(int, len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(type, type)) sc_out(tp_assign(buf, buf)) sc_in(tp_assign(len, len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setitimer
SC_LTTNG_TRACEPOINT_EVENT(setitimer,
	TP_PROTO(sc_exit(long ret,) int which, struct itimerval * value, struct itimerval * ovalue),
	TP_ARGS(sc_exit(ret,) which, value, ovalue),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, which)) sc_in(__field_hex(struct itimerval *, value)) sc_out(__field_hex(struct itimerval *, ovalue))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which, which)) sc_in(tp_assign(value, value)) sc_out(tp_assign(ovalue, ovalue))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sigprocmask
SC_LTTNG_TRACEPOINT_EVENT(sigprocmask,
	TP_PROTO(sc_exit(long ret,) int how, old_sigset_t * nset, old_sigset_t * oset),
	TP_ARGS(sc_exit(ret,) how, nset, oset),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(int, how)) sc_inout(__field_hex(old_sigset_t *, nset)) sc_inout(__field_hex(old_sigset_t *, oset))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(how, how)) sc_inout(tp_assign(nset, nset)) sc_inout(tp_assign(oset, oset))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_init_module
SC_LTTNG_TRACEPOINT_EVENT(init_module,
	TP_PROTO(sc_exit(long ret,) void * umod, unsigned long len, const char * uargs),
	TP_ARGS(sc_exit(ret,) umod, len, uargs),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field_hex(void *, umod)) sc_in(__field(unsigned long, len)) sc_in(__field_hex(const char *, uargs))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(umod, umod)) sc_in(tp_assign(len, len)) sc_in(tp_assign(uargs, uargs))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getdents
SC_LTTNG_TRACEPOINT_EVENT(getdents,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, struct linux_dirent * dirent, unsigned int count),
	TP_ARGS(sc_exit(ret,) fd, dirent, count),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_out(__field_hex(struct linux_dirent *, dirent)) sc_in(__field(unsigned int, count))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(dirent, dirent)) sc_in(tp_assign(count, count))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_readv
SC_LTTNG_TRACEPOINT_EVENT(readv,
	TP_PROTO(sc_exit(long ret,) unsigned long fd, const struct iovec * vec, unsigned long vlen),
	TP_ARGS(sc_exit(ret,) fd, vec, vlen),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, fd)) sc_inout(__field_hex(const struct iovec *, vec)) sc_in(__field(unsigned long, vlen))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_inout(tp_assign(vec, vec)) sc_in(tp_assign(vlen, vlen))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_writev
SC_LTTNG_TRACEPOINT_EVENT(writev,
	TP_PROTO(sc_exit(long ret,) unsigned long fd, const struct iovec * vec, unsigned long vlen),
	TP_ARGS(sc_exit(ret,) fd, vec, vlen),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, fd)) sc_inout(__field_hex(const struct iovec *, vec)) sc_in(__field(unsigned long, vlen))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_inout(tp_assign(vec, vec)) sc_in(tp_assign(vlen, vlen))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sched_setscheduler
SC_LTTNG_TRACEPOINT_EVENT(sched_setscheduler,
	TP_PROTO(sc_exit(long ret,) pid_t pid, int policy, struct sched_param * param),
	TP_ARGS(sc_exit(ret,) pid, policy, param),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_in(__field(int, policy)) sc_in(__field_hex(struct sched_param *, param))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(policy, policy)) sc_in(tp_assign(param, param))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getresuid
SC_LTTNG_TRACEPOINT_EVENT(getresuid,
	TP_PROTO(sc_exit(long ret,) uid_t * ruid, uid_t * euid, uid_t * suid),
	TP_ARGS(sc_exit(ret,) ruid, euid, suid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(uid_t *, ruid)) sc_out(__field_hex(uid_t *, euid)) sc_out(__field_hex(uid_t *, suid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(ruid, ruid)) sc_out(tp_assign(euid, euid)) sc_out(tp_assign(suid, suid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_poll
SC_LTTNG_TRACEPOINT_EVENT(poll,
	TP_PROTO(sc_exit(long ret,) struct pollfd * ufds, unsigned int nfds, long timeout_msecs),
	TP_ARGS(sc_exit(ret,) ufds, nfds, timeout_msecs),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(struct pollfd *, ufds)) sc_in(__field(unsigned int, nfds)) sc_in(__field(long, timeout_msecs))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(ufds, ufds)) sc_in(tp_assign(nfds, nfds)) sc_in(tp_assign(timeout_msecs, timeout_msecs))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_nfsservctl
SC_LTTNG_TRACEPOINT_EVENT(nfsservctl,
	TP_PROTO(sc_exit(long ret,) int cmd, struct nfsctl_arg * arg, void * res),
	TP_ARGS(sc_exit(ret,) cmd, arg, res),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(int, cmd)) sc_inout(__field_hex(struct nfsctl_arg *, arg)) sc_inout(__field_hex(void *, res))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(cmd, cmd)) sc_inout(tp_assign(arg, arg)) sc_inout(tp_assign(res, res))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getresgid
SC_LTTNG_TRACEPOINT_EVENT(getresgid,
	TP_PROTO(sc_exit(long ret,) gid_t * rgid, gid_t * egid, gid_t * sgid),
	TP_ARGS(sc_exit(ret,) rgid, egid, sgid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(gid_t *, rgid)) sc_out(__field_hex(gid_t *, egid)) sc_out(__field_hex(gid_t *, sgid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(rgid, rgid)) sc_out(tp_assign(egid, egid)) sc_out(tp_assign(sgid, sgid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_rt_sigqueueinfo
SC_LTTNG_TRACEPOINT_EVENT(rt_sigqueueinfo,
	TP_PROTO(sc_exit(long ret,) pid_t pid, int sig, siginfo_t * uinfo),
	TP_ARGS(sc_exit(ret,) pid, sig, uinfo),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_in(__field(int, sig)) sc_in(__field_hex(siginfo_t *, uinfo))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(sig, sig)) sc_in(tp_assign(uinfo, uinfo))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_chown
SC_LTTNG_TRACEPOINT_EVENT(chown,
	TP_PROTO(sc_exit(long ret,) const char * filename, uid_t user, gid_t group),
	TP_ARGS(sc_exit(ret,) filename, user, group),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(filename, filename)) sc_in(__field(uid_t, user)) sc_in(__field(gid_t, group))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(user, user)) sc_in(tp_assign(group, group))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getdents64
SC_LTTNG_TRACEPOINT_EVENT(getdents64,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, struct linux_dirent64 * dirent, unsigned int count),
	TP_ARGS(sc_exit(ret,) fd, dirent, count),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned int, fd)) sc_out(__field_hex(struct linux_dirent64 *, dirent)) sc_in(__field(unsigned int, count))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(dirent, dirent)) sc_in(tp_assign(count, count))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mincore
SC_LTTNG_TRACEPOINT_EVENT(mincore,
	TP_PROTO(sc_exit(long ret,) unsigned long start, size_t len, unsigned char * vec),
	TP_ARGS(sc_exit(ret,) start, len, vec),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, start)) sc_in(__field(size_t, len)) sc_out(__field_hex(unsigned char *, vec))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(start, start)) sc_in(tp_assign(len, len)) sc_out(tp_assign(vec, vec))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_listxattr
SC_LTTNG_TRACEPOINT_EVENT(listxattr,
	TP_PROTO(sc_exit(long ret,) const char * pathname, char * list, size_t size),
	TP_ARGS(sc_exit(ret,) pathname, list, size),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_out(__field_hex(char *, list)) sc_in(__field(size_t, size))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_out(tp_assign(list, list)) sc_in(tp_assign(size, size))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_llistxattr
SC_LTTNG_TRACEPOINT_EVENT(llistxattr,
	TP_PROTO(sc_exit(long ret,) const char * pathname, char * list, size_t size),
	TP_ARGS(sc_exit(ret,) pathname, list, size),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_out(__field_hex(char *, list)) sc_in(__field(size_t, size))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_out(tp_assign(list, list)) sc_in(tp_assign(size, size))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_flistxattr
SC_LTTNG_TRACEPOINT_EVENT(flistxattr,
	TP_PROTO(sc_exit(long ret,) int fd, char * list, size_t size),
	TP_ARGS(sc_exit(ret,) fd, list, size),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_out(__field_hex(char *, list)) sc_in(__field(size_t, size))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(list, list)) sc_in(tp_assign(size, size))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sched_setaffinity
SC_LTTNG_TRACEPOINT_EVENT(sched_setaffinity,
	TP_PROTO(sc_exit(long ret,) pid_t pid, unsigned int len, unsigned long * user_mask_ptr),
	TP_ARGS(sc_exit(ret,) pid, len, user_mask_ptr),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_in(__field(unsigned int, len)) sc_in(__field_hex(unsigned long *, user_mask_ptr))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(len, len)) sc_in(tp_assign(user_mask_ptr, user_mask_ptr))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sched_getaffinity
SC_LTTNG_TRACEPOINT_EVENT(sched_getaffinity,
	TP_PROTO(sc_exit(long ret,) pid_t pid, unsigned int len, unsigned long * user_mask_ptr),
	TP_ARGS(sc_exit(ret,) pid, len, user_mask_ptr),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_in(__field(unsigned int, len)) sc_out(__field_hex(unsigned long *, user_mask_ptr))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(len, len)) sc_out(tp_assign(user_mask_ptr, user_mask_ptr))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_io_submit
SC_LTTNG_TRACEPOINT_EVENT(io_submit,
	TP_PROTO(sc_exit(long ret,) aio_context_t ctx_id, long nr, struct iocb * * iocbpp),
	TP_ARGS(sc_exit(ret,) ctx_id, nr, iocbpp),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(aio_context_t, ctx_id)) sc_in(__field(long, nr)) sc_in(__field_hex(struct iocb * *, iocbpp))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(ctx_id, ctx_id)) sc_in(tp_assign(nr, nr)) sc_in(tp_assign(iocbpp, iocbpp))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_io_cancel
SC_LTTNG_TRACEPOINT_EVENT(io_cancel,
	TP_PROTO(sc_exit(long ret,) aio_context_t ctx_id, struct iocb * iocb, struct io_event * result),
	TP_ARGS(sc_exit(ret,) ctx_id, iocb, result),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(aio_context_t, ctx_id)) sc_in(__field_hex(struct iocb *, iocb)) sc_out(__field_hex(struct io_event *, result))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(ctx_id, ctx_id)) sc_in(tp_assign(iocb, iocb)) sc_out(tp_assign(result, result))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_timer_create
SC_LTTNG_TRACEPOINT_EVENT(timer_create,
	TP_PROTO(sc_exit(long ret,) const clockid_t which_clock, struct sigevent * timer_event_spec, timer_t * created_timer_id),
	TP_ARGS(sc_exit(ret,) which_clock, timer_event_spec, created_timer_id),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(const clockid_t, which_clock)) sc_in(__field_hex(struct sigevent *, timer_event_spec)) sc_out(__field_hex(timer_t *, created_timer_id))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which_clock, which_clock)) sc_in(tp_assign(timer_event_spec, timer_event_spec)) sc_out(tp_assign(created_timer_id, created_timer_id))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_statfs64
SC_LTTNG_TRACEPOINT_EVENT(statfs64,
	TP_PROTO(sc_exit(long ret,) const char * pathname, size_t sz, struct statfs64 * buf),
	TP_ARGS(sc_exit(ret,) pathname, sz, buf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__string_from_user(pathname, pathname)) sc_inout(__field(size_t, sz)) sc_inout(__field_hex(struct statfs64 *, buf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_copy_string_from_user(pathname, pathname)) sc_inout(tp_assign(sz, sz)) sc_inout(tp_assign(buf, buf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fstatfs64
SC_LTTNG_TRACEPOINT_EVENT(fstatfs64,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, size_t sz, struct statfs64 * buf),
	TP_ARGS(sc_exit(ret,) fd, sz, buf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned int, fd)) sc_inout(__field(size_t, sz)) sc_inout(__field_hex(struct statfs64 *, buf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(sz, sz)) sc_inout(tp_assign(buf, buf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mq_getsetattr
SC_LTTNG_TRACEPOINT_EVENT(mq_getsetattr,
	TP_PROTO(sc_exit(long ret,) mqd_t mqdes, const struct mq_attr * u_mqstat, struct mq_attr * u_omqstat),
	TP_ARGS(sc_exit(ret,) mqdes, u_mqstat, u_omqstat),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(mqd_t, mqdes)) sc_in(__field_hex(const struct mq_attr *, u_mqstat)) sc_out(__field_hex(struct mq_attr *, u_omqstat))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(mqdes, mqdes)) sc_in(tp_assign(u_mqstat, u_mqstat)) sc_out(tp_assign(u_omqstat, u_omqstat))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_inotify_add_watch
SC_LTTNG_TRACEPOINT_EVENT(inotify_add_watch,
	TP_PROTO(sc_exit(long ret,) int fd, const char * pathname, u32 mask),
	TP_ARGS(sc_exit(ret,) fd, pathname, mask),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__string_from_user(pathname, pathname)) sc_in(__field(u32, mask))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_assign(mask, mask))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mkdirat
SC_LTTNG_TRACEPOINT_EVENT(mkdirat,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * pathname, int mode),
	TP_ARGS(sc_exit(ret,) dfd, pathname, mode),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, dfd)) sc_in(__string_from_user(pathname, pathname)) sc_in(__field(int, mode))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dfd, dfd)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_assign(mode, mode))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_futimesat
SC_LTTNG_TRACEPOINT_EVENT(futimesat,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * filename, struct timeval * utimes),
	TP_ARGS(sc_exit(ret,) dfd, filename, utimes),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, dfd)) sc_in(__string_from_user(filename, filename)) sc_in(__field_hex(struct timeval *, utimes))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dfd, dfd)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(utimes, utimes))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_unlinkat
SC_LTTNG_TRACEPOINT_EVENT(unlinkat,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * pathname, int flag),
	TP_ARGS(sc_exit(ret,) dfd, pathname, flag),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, dfd)) sc_in(__string_from_user(pathname, pathname)) sc_in(__field(int, flag))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dfd, dfd)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_assign(flag, flag))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_symlinkat
SC_LTTNG_TRACEPOINT_EVENT(symlinkat,
	TP_PROTO(sc_exit(long ret,) const char * oldname, int newdfd, const char * newname),
	TP_ARGS(sc_exit(ret,) oldname, newdfd, newname),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(oldname, oldname)) sc_in(__field(int, newdfd)) sc_in(__string_from_user(newname, newname))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(oldname, oldname)) sc_in(tp_assign(newdfd, newdfd)) sc_in(tp_copy_string_from_user(newname, newname))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fchmodat
SC_LTTNG_TRACEPOINT_EVENT(fchmodat,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * filename, mode_t mode),
	TP_ARGS(sc_exit(ret,) dfd, filename, mode),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, dfd)) sc_in(__string_from_user(filename, filename)) sc_in(__field(mode_t, mode))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dfd, dfd)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(mode, mode))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_faccessat
SC_LTTNG_TRACEPOINT_EVENT(faccessat,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * filename, int mode),
	TP_ARGS(sc_exit(ret,) dfd, filename, mode),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, dfd)) sc_in(__string_from_user(filename, filename)) sc_in(__field(int, mode))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dfd, dfd)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(mode, mode))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_get_robust_list
SC_LTTNG_TRACEPOINT_EVENT(get_robust_list,
	TP_PROTO(sc_exit(long ret,) int pid, struct robust_list_head * * head_ptr, size_t * len_ptr),
	TP_ARGS(sc_exit(ret,) pid, head_ptr, len_ptr),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, pid)) sc_out(__field_hex(struct robust_list_head * *, head_ptr)) sc_out(__field_hex(size_t *, len_ptr))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_out(tp_assign(head_ptr, head_ptr)) sc_out(tp_assign(len_ptr, len_ptr))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getcpu
SC_LTTNG_TRACEPOINT_EVENT(getcpu,
	TP_PROTO(sc_exit(long ret,) unsigned * cpup, unsigned * nodep, struct getcpu_cache * unused),
	TP_ARGS(sc_exit(ret,) cpup, nodep, unused),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(unsigned *, cpup)) sc_out(__field_hex(unsigned *, nodep)) sc_inout(__field_hex(struct getcpu_cache *, unused))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(cpup, cpup)) sc_out(tp_assign(nodep, nodep)) sc_inout(tp_assign(unused, unused))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_signalfd
SC_LTTNG_TRACEPOINT_EVENT(signalfd,
	TP_PROTO(sc_exit(long ret,) int ufd, sigset_t * user_mask, size_t sizemask),
	TP_ARGS(sc_exit(ret,) ufd, user_mask, sizemask),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, ufd)) sc_in(__field_hex(sigset_t *, user_mask)) sc_in(__field(size_t, sizemask))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(ufd, ufd)) sc_in(tp_assign(user_mask, user_mask)) sc_in(tp_assign(sizemask, sizemask))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_bind
SC_LTTNG_TRACEPOINT_EVENT(bind,
	TP_PROTO(sc_exit(long ret,) int fd, struct sockaddr * umyaddr, int addrlen),
	TP_ARGS(sc_exit(ret,) fd, umyaddr, addrlen),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field_hex(struct sockaddr *, umyaddr)) sc_in(__field_hex(int, addrlen))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(umyaddr, umyaddr)) sc_in(tp_assign(addrlen, addrlen))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_connect
SC_LTTNG_TRACEPOINT_EVENT(connect,
	TP_PROTO(sc_exit(long ret,) int fd, struct sockaddr * uservaddr, int addrlen),
	TP_ARGS(sc_exit(ret,) fd, uservaddr, addrlen),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field_hex(struct sockaddr *, uservaddr)) sc_in(__field_hex(int, addrlen))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(uservaddr, uservaddr)) sc_in(tp_assign(addrlen, addrlen))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_accept
SC_LTTNG_TRACEPOINT_EVENT(accept,
	TP_PROTO(sc_exit(long ret,) int fd, struct sockaddr * upeer_sockaddr, int * upeer_addrlen),
	TP_ARGS(sc_exit(ret,) fd, upeer_sockaddr, upeer_addrlen),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_out(__field_hex(struct sockaddr *, upeer_sockaddr)) sc_inout(__field_hex(int *, upeer_addrlen))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(upeer_sockaddr, upeer_sockaddr)) sc_inout(tp_assign(upeer_addrlen, upeer_addrlen))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getsockname
SC_LTTNG_TRACEPOINT_EVENT(getsockname,
	TP_PROTO(sc_exit(long ret,) int fd, struct sockaddr * usockaddr, int * usockaddr_len),
	TP_ARGS(sc_exit(ret,) fd, usockaddr, usockaddr_len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_out(__field_hex(struct sockaddr *, usockaddr)) sc_inout(__field_hex(int *, usockaddr_len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(usockaddr, usockaddr)) sc_inout(tp_assign(usockaddr_len, usockaddr_len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getpeername
SC_LTTNG_TRACEPOINT_EVENT(getpeername,
	TP_PROTO(sc_exit(long ret,) int fd, struct sockaddr * usockaddr, int * usockaddr_len),
	TP_ARGS(sc_exit(ret,) fd, usockaddr, usockaddr_len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_out(__field_hex(struct sockaddr *, usockaddr)) sc_inout(__field_hex(int *, usockaddr_len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(usockaddr, usockaddr)) sc_inout(tp_assign(usockaddr_len, usockaddr_len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sendmsg
SC_LTTNG_TRACEPOINT_EVENT(sendmsg,
	TP_PROTO(sc_exit(long ret,) int fd, struct msghdr * msg, unsigned flags),
	TP_ARGS(sc_exit(ret,) fd, msg, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field_hex(struct msghdr *, msg)) sc_in(__field(unsigned, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(msg, msg)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_recvmsg
SC_LTTNG_TRACEPOINT_EVENT(recvmsg,
	TP_PROTO(sc_exit(long ret,) int fd, struct msghdr * msg, unsigned int flags),
	TP_ARGS(sc_exit(ret,) fd, msg, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_inout(__field_hex(struct msghdr *, msg)) sc_in(__field(unsigned int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_inout(tp_assign(msg, msg)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_reboot
SC_LTTNG_TRACEPOINT_EVENT(reboot,
	TP_PROTO(sc_exit(long ret,) int magic1, int magic2, unsigned int cmd, void * arg),
	TP_ARGS(sc_exit(ret,) magic1, magic2, cmd, arg),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, magic1)) sc_in(__field(int, magic2)) sc_in(__field(unsigned int, cmd)) sc_in(__field_hex(void *, arg))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(magic1, magic1)) sc_in(tp_assign(magic2, magic2)) sc_in(tp_assign(cmd, cmd)) sc_in(tp_assign(arg, arg))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_wait4
SC_LTTNG_TRACEPOINT_EVENT(wait4,
	TP_PROTO(sc_exit(long ret,) pid_t upid, int * stat_addr, int options, struct rusage * ru),
	TP_ARGS(sc_exit(ret,) upid, stat_addr, options, ru),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, upid)) sc_out(__field_hex(int *, stat_addr)) sc_in(__field(int, options)) sc_out(__field_hex(struct rusage *, ru))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(upid, upid)) sc_out(tp_assign(stat_addr, stat_addr)) sc_in(tp_assign(options, options)) sc_out(tp_assign(ru, ru))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_rt_sigaction
SC_LTTNG_TRACEPOINT_EVENT(rt_sigaction,
	TP_PROTO(sc_exit(long ret,) int sig, const struct sigaction * act, struct sigaction * oact, size_t sigsetsize),
	TP_ARGS(sc_exit(ret,) sig, act, oact, sigsetsize),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, sig)) sc_in(__field_hex(const struct sigaction *, act)) sc_out(__field_hex(struct sigaction *, oact)) sc_in(__field(size_t, sigsetsize))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(sig, sig)) sc_in(tp_assign(act, act)) sc_out(tp_assign(oact, oact)) sc_in(tp_assign(sigsetsize, sigsetsize))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_rt_sigprocmask
SC_LTTNG_TRACEPOINT_EVENT(rt_sigprocmask,
	TP_PROTO(sc_exit(long ret,) int how, sigset_t * nset, sigset_t * oset, size_t sigsetsize),
	TP_ARGS(sc_exit(ret,) how, nset, oset, sigsetsize),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, how)) sc_in(__field_hex(sigset_t *, nset)) sc_out(__field_hex(sigset_t *, oset)) sc_in(__field(size_t, sigsetsize))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(how, how)) sc_in(tp_assign(nset, nset)) sc_out(tp_assign(oset, oset)) sc_in(tp_assign(sigsetsize, sigsetsize))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_rt_sigtimedwait
SC_LTTNG_TRACEPOINT_EVENT(rt_sigtimedwait,
	TP_PROTO(sc_exit(long ret,) const sigset_t * uthese, siginfo_t * uinfo, const struct timespec * uts, size_t sigsetsize),
	TP_ARGS(sc_exit(ret,) uthese, uinfo, uts, sigsetsize),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_out(__field_hex(const sigset_t *, uthese)) sc_out(__field_hex(siginfo_t *, uinfo)) sc_in(__field_hex(const struct timespec *, uts)) sc_in(__field(size_t, sigsetsize))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_out(tp_assign(uthese, uthese)) sc_out(tp_assign(uinfo, uinfo)) sc_in(tp_assign(uts, uts)) sc_in(tp_assign(sigsetsize, sigsetsize))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sendfile
SC_LTTNG_TRACEPOINT_EVENT(sendfile,
	TP_PROTO(sc_exit(long ret,) int out_fd, int in_fd, off_t * offset, size_t count),
	TP_ARGS(sc_exit(ret,) out_fd, in_fd, offset, count),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(int, out_fd)) sc_inout(__field(int, in_fd)) sc_inout(__field_hex(off_t *, offset)) sc_inout(__field(size_t, count))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(out_fd, out_fd)) sc_inout(tp_assign(in_fd, in_fd)) sc_inout(tp_assign(offset, offset)) sc_inout(tp_assign(count, count))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getxattr
SC_LTTNG_TRACEPOINT_EVENT(getxattr,
	TP_PROTO(sc_exit(long ret,) const char * pathname, const char * name, void * value, size_t size),
	TP_ARGS(sc_exit(ret,) pathname, name, value, size),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_in(__string_from_user(name, name)) sc_out(__field_hex(void *, value)) sc_in(__field(size_t, size))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_copy_string_from_user(name, name)) sc_out(tp_assign(value, value)) sc_in(tp_assign(size, size))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_lgetxattr
SC_LTTNG_TRACEPOINT_EVENT(lgetxattr,
	TP_PROTO(sc_exit(long ret,) const char * pathname, const char * name, void * value, size_t size),
	TP_ARGS(sc_exit(ret,) pathname, name, value, size),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_in(__string_from_user(name, name)) sc_out(__field_hex(void *, value)) sc_in(__field(size_t, size))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_copy_string_from_user(name, name)) sc_out(tp_assign(value, value)) sc_in(tp_assign(size, size))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fgetxattr
SC_LTTNG_TRACEPOINT_EVENT(fgetxattr,
	TP_PROTO(sc_exit(long ret,) int fd, const char * name, void * value, size_t size),
	TP_ARGS(sc_exit(ret,) fd, name, value, size),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__string_from_user(name, name)) sc_out(__field_hex(void *, value)) sc_in(__field(size_t, size))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_copy_string_from_user(name, name)) sc_out(tp_assign(value, value)) sc_in(tp_assign(size, size))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sendfile64
SC_LTTNG_TRACEPOINT_EVENT(sendfile64,
	TP_PROTO(sc_exit(long ret,) int out_fd, int in_fd, loff_t * offset, size_t count),
	TP_ARGS(sc_exit(ret,) out_fd, in_fd, offset, count),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, out_fd)) sc_in(__field(int, in_fd)) sc_inout(__field_hex(loff_t *, offset)) sc_in(__field(size_t, count))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(out_fd, out_fd)) sc_in(tp_assign(in_fd, in_fd)) sc_inout(tp_assign(offset, offset)) sc_in(tp_assign(count, count))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_epoll_ctl
SC_LTTNG_TRACEPOINT_EVENT(epoll_ctl,
	TP_PROTO(sc_exit(long ret,) int epfd, int op, int fd, struct epoll_event * event),
	TP_ARGS(sc_exit(ret,) epfd, op, fd, event),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, epfd)) sc_in(__field(int, op)) sc_in(__field(int, fd)) sc_in(__field_hex(struct epoll_event *, event))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(epfd, epfd)) sc_in(tp_assign(op, op)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(event, event))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_epoll_wait
SC_LTTNG_TRACEPOINT_EVENT(epoll_wait,
	TP_PROTO(sc_exit(long ret,) int epfd, struct epoll_event * events, int maxevents, int timeout),
	TP_ARGS(sc_exit(ret,) epfd, events, maxevents, timeout),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, epfd)) sc_out(__field_hex(struct epoll_event *, events)) sc_in(__field(int, maxevents)) sc_in(__field(int, timeout))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(epfd, epfd)) sc_out(tp_assign(events, events)) sc_in(tp_assign(maxevents, maxevents)) sc_in(tp_assign(timeout, timeout))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_timer_settime
SC_LTTNG_TRACEPOINT_EVENT(timer_settime,
	TP_PROTO(sc_exit(long ret,) timer_t timer_id, int flags, const struct itimerspec * new_setting, struct itimerspec * old_setting),
	TP_ARGS(sc_exit(ret,) timer_id, flags, new_setting, old_setting),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(timer_t, timer_id)) sc_in(__field(int, flags)) sc_in(__field_hex(const struct itimerspec *, new_setting)) sc_out(__field_hex(struct itimerspec *, old_setting))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(timer_id, timer_id)) sc_in(tp_assign(flags, flags)) sc_in(tp_assign(new_setting, new_setting)) sc_out(tp_assign(old_setting, old_setting))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_clock_nanosleep
SC_LTTNG_TRACEPOINT_EVENT(clock_nanosleep,
	TP_PROTO(sc_exit(long ret,) const clockid_t which_clock, int flags, const struct timespec * rqtp, struct timespec * rmtp),
	TP_ARGS(sc_exit(ret,) which_clock, flags, rqtp, rmtp),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(const clockid_t, which_clock)) sc_in(__field(int, flags)) sc_in(__field_hex(const struct timespec *, rqtp)) sc_out(__field_hex(struct timespec *, rmtp))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which_clock, which_clock)) sc_in(tp_assign(flags, flags)) sc_in(tp_assign(rqtp, rqtp)) sc_out(tp_assign(rmtp, rmtp))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mq_open
SC_LTTNG_TRACEPOINT_EVENT(mq_open,
	TP_PROTO(sc_exit(long ret,) const char * u_name, int oflag, mode_t mode, struct mq_attr * u_attr),
	TP_ARGS(sc_exit(ret,) u_name, oflag, mode, u_attr),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(u_name, u_name)) sc_in(__field(int, oflag)) sc_in(__field(mode_t, mode)) sc_in(__field_hex(struct mq_attr *, u_attr))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(u_name, u_name)) sc_in(tp_assign(oflag, oflag)) sc_in(tp_assign(mode, mode)) sc_in(tp_assign(u_attr, u_attr))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_request_key
SC_LTTNG_TRACEPOINT_EVENT(request_key,
	TP_PROTO(sc_exit(long ret,) const char * _type, const char * _description, const char * _callout_info, key_serial_t destringid),
	TP_ARGS(sc_exit(ret,) _type, _description, _callout_info, destringid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(_type, _type)) sc_in(__field_hex(const char *, _description)) sc_in(__field_hex(const char *, _callout_info)) sc_in(__field(key_serial_t, destringid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(_type, _type)) sc_in(tp_assign(_description, _description)) sc_in(tp_assign(_callout_info, _callout_info)) sc_in(tp_assign(destringid, destringid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_vmsplice
SC_LTTNG_TRACEPOINT_EVENT(vmsplice,
	TP_PROTO(sc_exit(long ret,) int fd, const struct iovec * iov, unsigned long nr_segs, unsigned int flags),
	TP_ARGS(sc_exit(ret,) fd, iov, nr_segs, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field_hex(const struct iovec *, iov)) sc_in(__field(unsigned long, nr_segs)) sc_in(__field(unsigned int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(iov, iov)) sc_in(tp_assign(nr_segs, nr_segs)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_openat
SC_LTTNG_TRACEPOINT_EVENT(openat,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * filename, int flags, int mode),
	TP_ARGS(sc_exit(ret,) dfd, filename, flags, mode),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, dfd)) sc_in(__string_from_user(filename, filename)) sc_in(__field(int, flags)) sc_in(__field(int, mode))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dfd, dfd)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(flags, flags)) sc_in(tp_assign(mode, mode))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mknodat
SC_LTTNG_TRACEPOINT_EVENT(mknodat,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * filename, int mode, unsigned dev),
	TP_ARGS(sc_exit(ret,) dfd, filename, mode, dev),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, dfd)) sc_in(__string_from_user(filename, filename)) sc_in(__field(int, mode)) sc_in(__field(unsigned, dev))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dfd, dfd)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(mode, mode)) sc_in(tp_assign(dev, dev))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fstatat64
SC_LTTNG_TRACEPOINT_EVENT(fstatat64,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * filename, struct stat64 * statbuf, int flag),
	TP_ARGS(sc_exit(ret,) dfd, filename, statbuf, flag),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(int, dfd)) sc_inout(__string_from_user(filename, filename)) sc_inout(__field_hex(struct stat64 *, statbuf)) sc_inout(__field(int, flag))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(dfd, dfd)) sc_inout(tp_copy_string_from_user(filename, filename)) sc_inout(tp_assign(statbuf, statbuf)) sc_inout(tp_assign(flag, flag))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_renameat
SC_LTTNG_TRACEPOINT_EVENT(renameat,
	TP_PROTO(sc_exit(long ret,) int olddfd, const char * oldname, int newdfd, const char * newname),
	TP_ARGS(sc_exit(ret,) olddfd, oldname, newdfd, newname),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, olddfd)) sc_in(__string_from_user(oldname, oldname)) sc_in(__field(int, newdfd)) sc_in(__string_from_user(newname, newname))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(olddfd, olddfd)) sc_in(tp_copy_string_from_user(oldname, oldname)) sc_in(tp_assign(newdfd, newdfd)) sc_in(tp_copy_string_from_user(newname, newname))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_readlinkat
SC_LTTNG_TRACEPOINT_EVENT(readlinkat,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * pathname, char * buf, int bufsiz),
	TP_ARGS(sc_exit(ret,) dfd, pathname, buf, bufsiz),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, dfd)) sc_in(__string_from_user(pathname, pathname)) sc_out(__field_hex(char *, buf)) sc_in(__field(int, bufsiz))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dfd, dfd)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_out(tp_assign(buf, buf)) sc_in(tp_assign(bufsiz, bufsiz))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_utimensat
SC_LTTNG_TRACEPOINT_EVENT(utimensat,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * filename, struct timespec * utimes, int flags),
	TP_ARGS(sc_exit(ret,) dfd, filename, utimes, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, dfd)) sc_in(__string_from_user(filename, filename)) sc_in(__field_hex(struct timespec *, utimes)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dfd, dfd)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(utimes, utimes)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_timerfd_settime
SC_LTTNG_TRACEPOINT_EVENT(timerfd_settime,
	TP_PROTO(sc_exit(long ret,) int ufd, int flags, const struct itimerspec * utmr, struct itimerspec * otmr),
	TP_ARGS(sc_exit(ret,) ufd, flags, utmr, otmr),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, ufd)) sc_in(__field(int, flags)) sc_in(__field_hex(const struct itimerspec *, utmr)) sc_out(__field_hex(struct itimerspec *, otmr))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(ufd, ufd)) sc_in(tp_assign(flags, flags)) sc_in(tp_assign(utmr, utmr)) sc_out(tp_assign(otmr, otmr))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_signalfd4
SC_LTTNG_TRACEPOINT_EVENT(signalfd4,
	TP_PROTO(sc_exit(long ret,) int ufd, sigset_t * user_mask, size_t sizemask, int flags),
	TP_ARGS(sc_exit(ret,) ufd, user_mask, sizemask, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, ufd)) sc_in(__field_hex(sigset_t *, user_mask)) sc_in(__field(size_t, sizemask)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(ufd, ufd)) sc_in(tp_assign(user_mask, user_mask)) sc_in(tp_assign(sizemask, sizemask)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_rt_tgsigqueueinfo
SC_LTTNG_TRACEPOINT_EVENT(rt_tgsigqueueinfo,
	TP_PROTO(sc_exit(long ret,) pid_t tgid, pid_t pid, int sig, siginfo_t * uinfo),
	TP_ARGS(sc_exit(ret,) tgid, pid, sig, uinfo),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, tgid)) sc_in(__field(pid_t, pid)) sc_in(__field(int, sig)) sc_in(__field_hex(siginfo_t *, uinfo))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(tgid, tgid)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(sig, sig)) sc_in(tp_assign(uinfo, uinfo))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_prlimit64
SC_LTTNG_TRACEPOINT_EVENT(prlimit64,
	TP_PROTO(sc_exit(long ret,) pid_t pid, unsigned int resource, const struct rlimit64 * new_rlim, struct rlimit64 * old_rlim),
	TP_ARGS(sc_exit(ret,) pid, resource, new_rlim, old_rlim),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(pid_t, pid)) sc_in(__field(unsigned int, resource)) sc_in(__field_hex(const struct rlimit64 *, new_rlim)) sc_out(__field_hex(struct rlimit64 *, old_rlim))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(resource, resource)) sc_in(tp_assign(new_rlim, new_rlim)) sc_out(tp_assign(old_rlim, old_rlim))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_socketpair
SC_LTTNG_TRACEPOINT_EVENT(socketpair,
	TP_PROTO(sc_exit(long ret,) int family, int type, int protocol, int * usockvec),
	TP_ARGS(sc_exit(ret,) family, type, protocol, usockvec),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, family)) sc_in(__field(int, type)) sc_in(__field(int, protocol)) sc_out(__field_hex(int *, usockvec))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(family, family)) sc_in(tp_assign(type, type)) sc_in(tp_assign(protocol, protocol)) sc_out(tp_assign(usockvec, usockvec))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_send
SC_LTTNG_TRACEPOINT_EVENT(send,
	TP_PROTO(sc_exit(long ret,) int fd, void * buff, size_t len, unsigned flags),
	TP_ARGS(sc_exit(ret,) fd, buff, len, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(int, fd)) sc_inout(__field_hex(void *, buff)) sc_inout(__field(size_t, len)) sc_inout(__field(unsigned, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(buff, buff)) sc_inout(tp_assign(len, len)) sc_inout(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_accept4
SC_LTTNG_TRACEPOINT_EVENT(accept4,
	TP_PROTO(sc_exit(long ret,) int fd, struct sockaddr * upeer_sockaddr, int * upeer_addrlen, int flags),
	TP_ARGS(sc_exit(ret,) fd, upeer_sockaddr, upeer_addrlen, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_out(__field_hex(struct sockaddr *, upeer_sockaddr)) sc_inout(__field_hex(int *, upeer_addrlen)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(upeer_sockaddr, upeer_sockaddr)) sc_inout(tp_assign(upeer_addrlen, upeer_addrlen)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sendmmsg
SC_LTTNG_TRACEPOINT_EVENT(sendmmsg,
	TP_PROTO(sc_exit(long ret,) int fd, struct mmsghdr * mmsg, unsigned int vlen, unsigned int flags),
	TP_ARGS(sc_exit(ret,) fd, mmsg, vlen, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field_hex(struct mmsghdr *, mmsg)) sc_in(__field(unsigned int, vlen)) sc_in(__field(unsigned int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(mmsg, mmsg)) sc_in(tp_assign(vlen, vlen)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mount
SC_LTTNG_TRACEPOINT_EVENT(mount,
	TP_PROTO(sc_exit(long ret,) char * dev_name, char * dir_name, char * type, unsigned long flags, void * data),
	TP_ARGS(sc_exit(ret,) dev_name, dir_name, type, flags, data),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(dev_name, dev_name)) sc_in(__string_from_user(dir_name, dir_name)) sc_in(__string_from_user(type, type)) sc_in(__field(unsigned long, flags)) sc_in(__field_hex(void *, data))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(dev_name, dev_name)) sc_in(tp_copy_string_from_user(dir_name, dir_name)) sc_in(tp_copy_string_from_user(type, type)) sc_in(tp_assign(flags, flags)) sc_in(tp_assign(data, data))),
	TP_printk()
)
#endif                                                                                                                                                                                       
#ifndef OVERRIDE_32_llseek
SC_LTTNG_TRACEPOINT_EVENT(llseek,
	TP_PROTO(sc_exit(long ret,) unsigned int fd, unsigned long offset_high, unsigned long offset_low, loff_t * result, unsigned int origin),
	TP_ARGS(sc_exit(ret,) fd, offset_high, offset_low, result, origin),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned int, fd)) sc_inout(__field(unsigned long, offset_high)) sc_inout(__field(unsigned long, offset_low)) sc_inout(__field_hex(loff_t *, result)) sc_inout(__field(unsigned int, origin))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(fd, fd)) sc_inout(tp_assign(offset_high, offset_high)) sc_inout(tp_assign(offset_low, offset_low)) sc_inout(tp_assign(result, result)) sc_inout(tp_assign(origin, origin))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_select
SC_LTTNG_TRACEPOINT_EVENT(select,
	TP_PROTO(sc_exit(long ret,) int n, fd_set * inp, fd_set * outp, fd_set * exp, struct timeval * tvp),
	TP_ARGS(sc_exit(ret,) n, inp, outp, exp, tvp),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, n)) sc_inout(__field_hex(fd_set *, inp)) sc_inout(__field_hex(fd_set *, outp)) sc_inout(__field_hex(fd_set *, exp)) sc_inout(__field_hex(struct timeval *, tvp))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(n, n)) sc_inout(tp_assign(inp, inp)) sc_inout(tp_assign(outp, outp)) sc_inout(tp_assign(exp, exp)) sc_inout(tp_assign(tvp, tvp))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_pciconfig_read
SC_LTTNG_TRACEPOINT_EVENT(pciconfig_read,
	TP_PROTO(sc_exit(long ret,) unsigned long bus, unsigned long dfn, unsigned long off, unsigned long len, void * buf),
	TP_ARGS(sc_exit(ret,) bus, dfn, off, len, buf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned long, bus)) sc_inout(__field(unsigned long, dfn)) sc_inout(__field(unsigned long, off)) sc_inout(__field(unsigned long, len)) sc_inout(__field_hex(void *, buf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(bus, bus)) sc_inout(tp_assign(dfn, dfn)) sc_inout(tp_assign(off, off)) sc_inout(tp_assign(len, len)) sc_inout(tp_assign(buf, buf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_pciconfig_write
SC_LTTNG_TRACEPOINT_EVENT(pciconfig_write,
	TP_PROTO(sc_exit(long ret,) unsigned long bus, unsigned long dfn, unsigned long off, unsigned long len, void * buf),
	TP_ARGS(sc_exit(ret,) bus, dfn, off, len, buf),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned long, bus)) sc_inout(__field(unsigned long, dfn)) sc_inout(__field(unsigned long, off)) sc_inout(__field(unsigned long, len)) sc_inout(__field_hex(void *, buf))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(bus, bus)) sc_inout(tp_assign(dfn, dfn)) sc_inout(tp_assign(off, off)) sc_inout(tp_assign(len, len)) sc_inout(tp_assign(buf, buf))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setxattr
SC_LTTNG_TRACEPOINT_EVENT(setxattr,
	TP_PROTO(sc_exit(long ret,) const char * pathname, const char * name, const void * value, size_t size, int flags),
	TP_ARGS(sc_exit(ret,) pathname, name, value, size, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_in(__string_from_user(name, name)) sc_in(__field_hex(const void *, value)) sc_in(__field(size_t, size)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_copy_string_from_user(name, name)) sc_in(tp_assign(value, value)) sc_in(tp_assign(size, size)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_lsetxattr
SC_LTTNG_TRACEPOINT_EVENT(lsetxattr,
	TP_PROTO(sc_exit(long ret,) const char * pathname, const char * name, const void * value, size_t size, int flags),
	TP_ARGS(sc_exit(ret,) pathname, name, value, size, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(pathname, pathname)) sc_in(__string_from_user(name, name)) sc_in(__field_hex(const void *, value)) sc_in(__field(size_t, size)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(pathname, pathname)) sc_in(tp_copy_string_from_user(name, name)) sc_in(tp_assign(value, value)) sc_in(tp_assign(size, size)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fsetxattr
SC_LTTNG_TRACEPOINT_EVENT(fsetxattr,
	TP_PROTO(sc_exit(long ret,) int fd, const char * name, const void * value, size_t size, int flags),
	TP_ARGS(sc_exit(ret,) fd, name, value, size, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__string_from_user(name, name)) sc_in(__field_hex(const void *, value)) sc_in(__field(size_t, size)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_copy_string_from_user(name, name)) sc_in(tp_assign(value, value)) sc_in(tp_assign(size, size)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_io_getevents
SC_LTTNG_TRACEPOINT_EVENT(io_getevents,
	TP_PROTO(sc_exit(long ret,) aio_context_t ctx_id, long min_nr, long nr, struct io_event * events, struct timespec * timeout),
	TP_ARGS(sc_exit(ret,) ctx_id, min_nr, nr, events, timeout),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(aio_context_t, ctx_id)) sc_in(__field(long, min_nr)) sc_in(__field(long, nr)) sc_out(__field_hex(struct io_event *, events)) sc_inout(__field_hex(struct timespec *, timeout))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(ctx_id, ctx_id)) sc_in(tp_assign(min_nr, min_nr)) sc_in(tp_assign(nr, nr)) sc_out(tp_assign(events, events)) sc_inout(tp_assign(timeout, timeout))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mq_timedsend
SC_LTTNG_TRACEPOINT_EVENT(mq_timedsend,
	TP_PROTO(sc_exit(long ret,) mqd_t mqdes, const char * u_msg_ptr, size_t msg_len, unsigned int msg_prio, const struct timespec * u_abs_timeout),
	TP_ARGS(sc_exit(ret,) mqdes, u_msg_ptr, msg_len, msg_prio, u_abs_timeout),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(mqd_t, mqdes)) sc_in(__field_hex(const char *, u_msg_ptr)) sc_in(__field(size_t, msg_len)) sc_in(__field(unsigned int, msg_prio)) sc_in(__field_hex(const struct timespec *, u_abs_timeout))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(mqdes, mqdes)) sc_in(tp_assign(u_msg_ptr, u_msg_ptr)) sc_in(tp_assign(msg_len, msg_len)) sc_in(tp_assign(msg_prio, msg_prio)) sc_in(tp_assign(u_abs_timeout, u_abs_timeout))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_mq_timedreceive
SC_LTTNG_TRACEPOINT_EVENT(mq_timedreceive,
	TP_PROTO(sc_exit(long ret,) mqd_t mqdes, char * u_msg_ptr, size_t msg_len, unsigned int * u_msg_prio, const struct timespec * u_abs_timeout),
	TP_ARGS(sc_exit(ret,) mqdes, u_msg_ptr, msg_len, u_msg_prio, u_abs_timeout),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(mqd_t, mqdes)) sc_out(__field_hex(char *, u_msg_ptr)) sc_in(__field(size_t, msg_len)) sc_out(__field_hex(unsigned int *, u_msg_prio)) sc_in(__field_hex(const struct timespec *, u_abs_timeout))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(mqdes, mqdes)) sc_out(tp_assign(u_msg_ptr, u_msg_ptr)) sc_in(tp_assign(msg_len, msg_len)) sc_out(tp_assign(u_msg_prio, u_msg_prio)) sc_in(tp_assign(u_abs_timeout, u_abs_timeout))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_add_key
SC_LTTNG_TRACEPOINT_EVENT(add_key,
	TP_PROTO(sc_exit(long ret,) const char * _type, const char * _description, const void * _payload, size_t plen, key_serial_t ringid),
	TP_ARGS(sc_exit(ret,) _type, _description, _payload, plen, ringid),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__string_from_user(_type, _type)) sc_in(__field_hex(const char *, _description)) sc_in(__field_hex(const void *, _payload)) sc_in(__field(size_t, plen)) sc_in(__field(key_serial_t, ringid))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_copy_string_from_user(_type, _type)) sc_in(tp_assign(_description, _description)) sc_in(tp_assign(_payload, _payload)) sc_in(tp_assign(plen, plen)) sc_in(tp_assign(ringid, ringid))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_waitid
SC_LTTNG_TRACEPOINT_EVENT(waitid,
	TP_PROTO(sc_exit(long ret,) int which, pid_t upid, struct siginfo * infop, int options, struct rusage * ru),
	TP_ARGS(sc_exit(ret,) which, upid, infop, options, ru),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, which)) sc_in(__field(pid_t, upid)) sc_out(__field_hex(struct siginfo *, infop)) sc_in(__field(int, options)) sc_out(__field_hex(struct rusage *, ru))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(which, which)) sc_in(tp_assign(upid, upid)) sc_out(tp_assign(infop, infop)) sc_in(tp_assign(options, options)) sc_out(tp_assign(ru, ru))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_ppoll
SC_LTTNG_TRACEPOINT_EVENT(ppoll,
	TP_PROTO(sc_exit(long ret,) struct pollfd * ufds, unsigned int nfds, struct timespec * tsp, const sigset_t * sigmask, size_t sigsetsize),
	TP_ARGS(sc_exit(ret,) ufds, nfds, tsp, sigmask, sigsetsize),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(struct pollfd *, ufds)) sc_in(__field(unsigned int, nfds)) sc_in(__field_hex(struct timespec *, tsp)) sc_in(__field_hex(const sigset_t *, sigmask)) sc_in(__field(size_t, sigsetsize))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(ufds, ufds)) sc_in(tp_assign(nfds, nfds)) sc_in(tp_assign(tsp, tsp)) sc_in(tp_assign(sigmask, sigmask)) sc_in(tp_assign(sigsetsize, sigsetsize))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_fchownat
SC_LTTNG_TRACEPOINT_EVENT(fchownat,
	TP_PROTO(sc_exit(long ret,) int dfd, const char * filename, uid_t user, gid_t group, int flag),
	TP_ARGS(sc_exit(ret,) dfd, filename, user, group, flag),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, dfd)) sc_in(__string_from_user(filename, filename)) sc_in(__field(uid_t, user)) sc_in(__field(gid_t, group)) sc_in(__field(int, flag))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(dfd, dfd)) sc_in(tp_copy_string_from_user(filename, filename)) sc_in(tp_assign(user, user)) sc_in(tp_assign(group, group)) sc_in(tp_assign(flag, flag))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_linkat
SC_LTTNG_TRACEPOINT_EVENT(linkat,
	TP_PROTO(sc_exit(long ret,) int olddfd, const char * oldname, int newdfd, const char * newname, int flags),
	TP_ARGS(sc_exit(ret,) olddfd, oldname, newdfd, newname, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, olddfd)) sc_in(__string_from_user(oldname, oldname)) sc_in(__field(int, newdfd)) sc_in(__string_from_user(newname, newname)) sc_in(__field(int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(olddfd, olddfd)) sc_in(tp_copy_string_from_user(oldname, oldname)) sc_in(tp_assign(newdfd, newdfd)) sc_in(tp_copy_string_from_user(newname, newname)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_perf_event_open
SC_LTTNG_TRACEPOINT_EVENT(perf_event_open,
	TP_PROTO(sc_exit(long ret,) struct perf_event_attr * attr_uptr, pid_t pid, int cpu, int group_fd, unsigned long flags),
	TP_ARGS(sc_exit(ret,) attr_uptr, pid, cpu, group_fd, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field_hex(struct perf_event_attr *, attr_uptr)) sc_in(__field(pid_t, pid)) sc_in(__field(int, cpu)) sc_in(__field(int, group_fd)) sc_in(__field(unsigned long, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(attr_uptr, attr_uptr)) sc_in(tp_assign(pid, pid)) sc_in(tp_assign(cpu, cpu)) sc_in(tp_assign(group_fd, group_fd)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_preadv
SC_LTTNG_TRACEPOINT_EVENT(preadv,
	TP_PROTO(sc_exit(long ret,) unsigned long fd, const struct iovec * vec, unsigned long vlen, unsigned long pos_l, unsigned long pos_h),
	TP_ARGS(sc_exit(ret,) fd, vec, vlen, pos_l, pos_h),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, fd)) sc_out(__field_hex(const struct iovec *, vec)) sc_in(__field(unsigned long, vlen)) sc_in(__field(unsigned long, pos_l)) sc_in(__field(unsigned long, pos_h))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(vec, vec)) sc_in(tp_assign(vlen, vlen)) sc_in(tp_assign(pos_l, pos_l)) sc_in(tp_assign(pos_h, pos_h))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_pwritev
SC_LTTNG_TRACEPOINT_EVENT(pwritev,
	TP_PROTO(sc_exit(long ret,) unsigned long fd, const struct iovec * vec, unsigned long vlen, unsigned long pos_l, unsigned long pos_h),
	TP_ARGS(sc_exit(ret,) fd, vec, vlen, pos_l, pos_h),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(unsigned long, fd)) sc_in(__field_hex(const struct iovec *, vec)) sc_in(__field(unsigned long, vlen)) sc_in(__field(unsigned long, pos_l)) sc_in(__field(unsigned long, pos_h))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(vec, vec)) sc_in(tp_assign(vlen, vlen)) sc_in(tp_assign(pos_l, pos_l)) sc_in(tp_assign(pos_h, pos_h))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_setsockopt
SC_LTTNG_TRACEPOINT_EVENT(setsockopt,
	TP_PROTO(sc_exit(long ret,) int fd, int level, int optname, char * optval, int optlen),
	TP_ARGS(sc_exit(ret,) fd, level, optname, optval, optlen),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field(int, level)) sc_in(__field(int, optname)) sc_in(__field_hex(char *, optval)) sc_in(__field(int, optlen))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(level, level)) sc_in(tp_assign(optname, optname)) sc_in(tp_assign(optval, optval)) sc_in(tp_assign(optlen, optlen))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_getsockopt
SC_LTTNG_TRACEPOINT_EVENT(getsockopt,
	TP_PROTO(sc_exit(long ret,) int fd, int level, int optname, char * optval, int * optlen),
	TP_ARGS(sc_exit(ret,) fd, level, optname, optval, optlen),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field(int, level)) sc_in(__field(int, optname)) sc_out(__field_hex(char *, optval)) sc_inout(__field_hex(int *, optlen))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(level, level)) sc_in(tp_assign(optname, optname)) sc_out(tp_assign(optval, optval)) sc_inout(tp_assign(optlen, optlen))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_recvmmsg
SC_LTTNG_TRACEPOINT_EVENT(recvmmsg,
	TP_PROTO(sc_exit(long ret,) int fd, struct mmsghdr * mmsg, unsigned int vlen, unsigned int flags, struct timespec * timeout),
	TP_ARGS(sc_exit(ret,) fd, mmsg, vlen, flags, timeout),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_out(__field_hex(struct mmsghdr *, mmsg)) sc_in(__field(unsigned int, vlen)) sc_in(__field(unsigned int, flags)) sc_inout(__field_hex(struct timespec *, timeout))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(mmsg, mmsg)) sc_in(tp_assign(vlen, vlen)) sc_in(tp_assign(flags, flags)) sc_inout(tp_assign(timeout, timeout))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_ipc
SC_LTTNG_TRACEPOINT_EVENT(ipc,
	TP_PROTO(sc_exit(long ret,) unsigned int call, int first, unsigned long second, unsigned long third, void * ptr, long fifth),
	TP_ARGS(sc_exit(ret,) call, first, second, third, ptr, fifth),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field(unsigned int, call)) sc_inout(__field(int, first)) sc_inout(__field(unsigned long, second)) sc_inout(__field(unsigned long, third)) sc_inout(__field_hex(void *, ptr)) sc_inout(__field(long, fifth))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(call, call)) sc_inout(tp_assign(first, first)) sc_inout(tp_assign(second, second)) sc_inout(tp_assign(third, third)) sc_inout(tp_assign(ptr, ptr)) sc_inout(tp_assign(fifth, fifth))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_futex
SC_LTTNG_TRACEPOINT_EVENT(futex,
	TP_PROTO(sc_exit(long ret,) u32 * uaddr, int op, u32 val, struct timespec * utime, u32 * uaddr2, u32 val3),
	TP_ARGS(sc_exit(ret,) uaddr, op, val, utime, uaddr2, val3),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_inout(__field_hex(u32 *, uaddr)) sc_in(__field(int, op)) sc_in(__field(u32, val)) sc_in(__field_hex(struct timespec *, utime)) sc_inout(__field_hex(u32 *, uaddr2)) sc_in(__field(u32, val3))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_inout(tp_assign(uaddr, uaddr)) sc_in(tp_assign(op, op)) sc_in(tp_assign(val, val)) sc_in(tp_assign(utime, utime)) sc_inout(tp_assign(uaddr2, uaddr2)) sc_in(tp_assign(val3, val3))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_pselect6
SC_LTTNG_TRACEPOINT_EVENT(pselect6,
	TP_PROTO(sc_exit(long ret,) int n, fd_set * inp, fd_set * outp, fd_set * exp, struct timespec * tsp, void * sig),
	TP_ARGS(sc_exit(ret,) n, inp, outp, exp, tsp, sig),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, n)) sc_inout(__field_hex(fd_set *, inp)) sc_inout(__field_hex(fd_set *, outp)) sc_inout(__field_hex(fd_set *, exp)) sc_inout(__field_hex(struct timespec *, tsp)) sc_in(__field_hex(void *, sig))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(n, n)) sc_inout(tp_assign(inp, inp)) sc_inout(tp_assign(outp, outp)) sc_inout(tp_assign(exp, exp)) sc_inout(tp_assign(tsp, tsp)) sc_in(tp_assign(sig, sig))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_splice
SC_LTTNG_TRACEPOINT_EVENT(splice,
	TP_PROTO(sc_exit(long ret,) int fd_in, loff_t * off_in, int fd_out, loff_t * off_out, size_t len, unsigned int flags),
	TP_ARGS(sc_exit(ret,) fd_in, off_in, fd_out, off_out, len, flags),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd_in)) sc_in(__field_hex(loff_t *, off_in)) sc_in(__field(int, fd_out)) sc_in(__field_hex(loff_t *, off_out)) sc_in(__field(size_t, len)) sc_in(__field(unsigned int, flags))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd_in, fd_in)) sc_in(tp_assign(off_in, off_in)) sc_in(tp_assign(fd_out, fd_out)) sc_in(tp_assign(off_out, off_out)) sc_in(tp_assign(len, len)) sc_in(tp_assign(flags, flags))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_epoll_pwait
SC_LTTNG_TRACEPOINT_EVENT(epoll_pwait,
	TP_PROTO(sc_exit(long ret,) int epfd, struct epoll_event * events, int maxevents, int timeout, const sigset_t * sigmask, size_t sigsetsize),
	TP_ARGS(sc_exit(ret,) epfd, events, maxevents, timeout, sigmask, sigsetsize),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, epfd)) sc_out(__field_hex(struct epoll_event *, events)) sc_in(__field(int, maxevents)) sc_in(__field(int, timeout)) sc_in(__field_hex(const sigset_t *, sigmask)) sc_in(__field(size_t, sigsetsize))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(epfd, epfd)) sc_out(tp_assign(events, events)) sc_in(tp_assign(maxevents, maxevents)) sc_in(tp_assign(timeout, timeout)) sc_in(tp_assign(sigmask, sigmask)) sc_in(tp_assign(sigsetsize, sigsetsize))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_sendto
SC_LTTNG_TRACEPOINT_EVENT(sendto,
	TP_PROTO(sc_exit(long ret,) int fd, void * buff, size_t len, unsigned flags, struct sockaddr * addr, int addr_len),
	TP_ARGS(sc_exit(ret,) fd, buff, len, flags, addr, addr_len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_in(__field_hex(void *, buff)) sc_in(__field(size_t, len)) sc_in(__field(unsigned, flags)) sc_in(__field_hex(struct sockaddr *, addr)) sc_in(__field_hex(int, addr_len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_in(tp_assign(buff, buff)) sc_in(tp_assign(len, len)) sc_in(tp_assign(flags, flags)) sc_in(tp_assign(addr, addr)) sc_in(tp_assign(addr_len, addr_len))),
	TP_printk()
)
#endif
#ifndef OVERRIDE_32_recvfrom
SC_LTTNG_TRACEPOINT_EVENT(recvfrom,
	TP_PROTO(sc_exit(long ret,) int fd, void * ubuf, size_t size, unsigned flags, struct sockaddr * addr, int * addr_len),
	TP_ARGS(sc_exit(ret,) fd, ubuf, size, flags, addr, addr_len),
	TP_STRUCT__entry(sc_exit(__field(long, ret)) sc_in(__field(int, fd)) sc_out(__field_hex(void *, ubuf)) sc_in(__field(size_t, size)) sc_in(__field(unsigned, flags)) sc_out(__field_hex(struct sockaddr *, addr)) sc_inout(__field_hex(int *, addr_len))),
	TP_fast_assign(sc_exit(tp_assign(ret, ret)) sc_in(tp_assign(fd, fd)) sc_out(tp_assign(ubuf, ubuf)) sc_in(tp_assign(size, size)) sc_in(tp_assign(flags, flags)) sc_out(tp_assign(addr, addr)) sc_inout(tp_assign(addr_len, addr_len))),
	TP_printk()
)
#endif

#endif /*  _TRACE_SYSCALLS_POINTERS_H */

/* This part must be outside protection */
#include "../../../probes/define_trace.h"

#else /* CREATE_SYSCALL_TABLE */

#include "powerpc-32-syscalls-3.0.34_pointers_override.h"
#include "syscalls_pointers_override.h"

#ifndef OVERRIDE_TABLE_32_read
TRACE_SYSCALL_TABLE(read, read, 3, 3)
#endif
#ifndef OVERRIDE_TABLE_32_write
TRACE_SYSCALL_TABLE(write, write, 4, 3)
#endif
#ifndef OVERRIDE_TABLE_32_open
TRACE_SYSCALL_TABLE(open, open, 5, 3)
#endif
#ifndef OVERRIDE_TABLE_32_waitpid
TRACE_SYSCALL_TABLE(waitpid, waitpid, 7, 3)
#endif
#ifndef OVERRIDE_TABLE_32_creat
TRACE_SYSCALL_TABLE(creat, creat, 8, 2)
#endif
#ifndef OVERRIDE_TABLE_32_link
TRACE_SYSCALL_TABLE(link, link, 9, 2)
#endif
#ifndef OVERRIDE_TABLE_32_unlink
TRACE_SYSCALL_TABLE(unlink, unlink, 10, 1)
#endif
#ifndef OVERRIDE_TABLE_32_chdir
TRACE_SYSCALL_TABLE(chdir, chdir, 12, 1)
#endif
#ifndef OVERRIDE_TABLE_32_time
TRACE_SYSCALL_TABLE(time, time, 13, 1)
#endif
#ifndef OVERRIDE_TABLE_32_mknod
TRACE_SYSCALL_TABLE(mknod, mknod, 14, 3)
#endif
#ifndef OVERRIDE_TABLE_32_chmod
TRACE_SYSCALL_TABLE(chmod, chmod, 15, 2)
#endif
#ifndef OVERRIDE_TABLE_32_lchown
TRACE_SYSCALL_TABLE(lchown, lchown, 16, 3)
#endif
#ifndef OVERRIDE_TABLE_32_stat
TRACE_SYSCALL_TABLE(stat, stat, 18, 2)
#endif
#ifndef OVERRIDE_TABLE_32_mount
TRACE_SYSCALL_TABLE(mount, mount, 21, 5)
#endif
#ifndef OVERRIDE_TABLE_32_oldumount
TRACE_SYSCALL_TABLE(oldumount, oldumount, 22, 1)
#endif
#ifndef OVERRIDE_TABLE_32_stime
TRACE_SYSCALL_TABLE(stime, stime, 25, 1)
#endif
#ifndef OVERRIDE_TABLE_32_fstat
TRACE_SYSCALL_TABLE(fstat, fstat, 28, 2)
#endif
#ifndef OVERRIDE_TABLE_32_utime
TRACE_SYSCALL_TABLE(utime, utime, 30, 2)
#endif
#ifndef OVERRIDE_TABLE_32_access
TRACE_SYSCALL_TABLE(access, access, 33, 2)
#endif
#ifndef OVERRIDE_TABLE_32_rename
TRACE_SYSCALL_TABLE(rename, rename, 38, 2)
#endif
#ifndef OVERRIDE_TABLE_32_mkdir
TRACE_SYSCALL_TABLE(mkdir, mkdir, 39, 2)
#endif
#ifndef OVERRIDE_TABLE_32_rmdir
TRACE_SYSCALL_TABLE(rmdir, rmdir, 40, 1)
#endif
#ifndef OVERRIDE_TABLE_32_pipe
TRACE_SYSCALL_TABLE(pipe, pipe, 42, 1)
#endif
#ifndef OVERRIDE_TABLE_32_times
TRACE_SYSCALL_TABLE(times, times, 43, 1)
#endif
#ifndef OVERRIDE_TABLE_32_acct
TRACE_SYSCALL_TABLE(acct, acct, 51, 1)
#endif
#ifndef OVERRIDE_TABLE_32_umount
TRACE_SYSCALL_TABLE(umount, umount, 52, 2)
#endif
#ifndef OVERRIDE_TABLE_32_olduname
TRACE_SYSCALL_TABLE(olduname, olduname, 59, 1)
#endif
#ifndef OVERRIDE_TABLE_32_chroot
TRACE_SYSCALL_TABLE(chroot, chroot, 61, 1)
#endif
#ifndef OVERRIDE_TABLE_32_ustat
TRACE_SYSCALL_TABLE(ustat, ustat, 62, 2)
#endif
#ifndef OVERRIDE_TABLE_32_sigpending
TRACE_SYSCALL_TABLE(sigpending, sigpending, 73, 1)
#endif
#ifndef OVERRIDE_TABLE_32_sethostname
TRACE_SYSCALL_TABLE(sethostname, sethostname, 74, 2)
#endif
#ifndef OVERRIDE_TABLE_32_setrlimit
TRACE_SYSCALL_TABLE(setrlimit, setrlimit, 75, 2)
#endif
#ifndef OVERRIDE_TABLE_32_old_getrlimit
TRACE_SYSCALL_TABLE(old_getrlimit, old_getrlimit, 76, 2)
#endif
#ifndef OVERRIDE_TABLE_32_getrusage
TRACE_SYSCALL_TABLE(getrusage, getrusage, 77, 2)
#endif
#ifndef OVERRIDE_TABLE_32_gettimeofday
TRACE_SYSCALL_TABLE(gettimeofday, gettimeofday, 78, 2)
#endif
#ifndef OVERRIDE_TABLE_32_settimeofday
TRACE_SYSCALL_TABLE(settimeofday, settimeofday, 79, 2)
#endif
#ifndef OVERRIDE_TABLE_32_getgroups
TRACE_SYSCALL_TABLE(getgroups, getgroups, 80, 2)
#endif
#ifndef OVERRIDE_TABLE_32_setgroups
TRACE_SYSCALL_TABLE(setgroups, setgroups, 81, 2)
#endif
#ifndef OVERRIDE_TABLE_32_symlink
TRACE_SYSCALL_TABLE(symlink, symlink, 83, 2)
#endif
#ifndef OVERRIDE_TABLE_32_lstat
TRACE_SYSCALL_TABLE(lstat, lstat, 84, 2)
#endif
#ifndef OVERRIDE_TABLE_32_readlink
TRACE_SYSCALL_TABLE(readlink, readlink, 85, 3)
#endif
#ifndef OVERRIDE_TABLE_32_uselib
TRACE_SYSCALL_TABLE(uselib, uselib, 86, 1)
#endif
#ifndef OVERRIDE_TABLE_32_swapon
TRACE_SYSCALL_TABLE(swapon, swapon, 87, 2)
#endif
#ifndef OVERRIDE_TABLE_32_reboot
TRACE_SYSCALL_TABLE(reboot, reboot, 88, 4)
#endif
#ifndef OVERRIDE_TABLE_32_old_readdir
TRACE_SYSCALL_TABLE(old_readdir, old_readdir, 89, 3)
#endif
#ifndef OVERRIDE_TABLE_32_truncate
TRACE_SYSCALL_TABLE(truncate, truncate, 92, 2)
#endif
#ifndef OVERRIDE_TABLE_32_statfs
TRACE_SYSCALL_TABLE(statfs, statfs, 99, 2)
#endif
#ifndef OVERRIDE_TABLE_32_fstatfs
TRACE_SYSCALL_TABLE(fstatfs, fstatfs, 100, 2)
#endif
#ifndef OVERRIDE_TABLE_32_socketcall
TRACE_SYSCALL_TABLE(socketcall, socketcall, 102, 2)
#endif
#ifndef OVERRIDE_TABLE_32_syslog
TRACE_SYSCALL_TABLE(syslog, syslog, 103, 3)
#endif
#ifndef OVERRIDE_TABLE_32_setitimer
TRACE_SYSCALL_TABLE(setitimer, setitimer, 104, 3)
#endif
#ifndef OVERRIDE_TABLE_32_getitimer
TRACE_SYSCALL_TABLE(getitimer, getitimer, 105, 2)
#endif
#ifndef OVERRIDE_TABLE_32_newstat
TRACE_SYSCALL_TABLE(newstat, newstat, 106, 2)
#endif
#ifndef OVERRIDE_TABLE_32_newlstat
TRACE_SYSCALL_TABLE(newlstat, newlstat, 107, 2)
#endif
#ifndef OVERRIDE_TABLE_32_newfstat
TRACE_SYSCALL_TABLE(newfstat, newfstat, 108, 2)
#endif
#ifndef OVERRIDE_TABLE_32_uname
TRACE_SYSCALL_TABLE(uname, uname, 109, 1)
#endif
#ifndef OVERRIDE_TABLE_32_wait4
TRACE_SYSCALL_TABLE(wait4, wait4, 114, 4)
#endif
#ifndef OVERRIDE_TABLE_32_swapoff
TRACE_SYSCALL_TABLE(swapoff, swapoff, 115, 1)
#endif
#ifndef OVERRIDE_TABLE_32_sysinfo
TRACE_SYSCALL_TABLE(sysinfo, sysinfo, 116, 1)
#endif
#ifndef OVERRIDE_TABLE_32_ipc
TRACE_SYSCALL_TABLE(ipc, ipc, 117, 6)
#endif
#ifndef OVERRIDE_TABLE_32_setdomainname
TRACE_SYSCALL_TABLE(setdomainname, setdomainname, 121, 2)
#endif
#ifndef OVERRIDE_TABLE_32_newuname
TRACE_SYSCALL_TABLE(newuname, newuname, 122, 1)
#endif
#ifndef OVERRIDE_TABLE_32_adjtimex
TRACE_SYSCALL_TABLE(adjtimex, adjtimex, 124, 1)
#endif
#ifndef OVERRIDE_TABLE_32_sigprocmask
TRACE_SYSCALL_TABLE(sigprocmask, sigprocmask, 126, 3)
#endif
#ifndef OVERRIDE_TABLE_32_init_module
TRACE_SYSCALL_TABLE(init_module, init_module, 128, 3)
#endif
#ifndef OVERRIDE_TABLE_32_delete_module
TRACE_SYSCALL_TABLE(delete_module, delete_module, 129, 2)
#endif
#ifndef OVERRIDE_TABLE_32_llseek
TRACE_SYSCALL_TABLE(llseek, llseek, 140, 5)
#endif
#ifndef OVERRIDE_TABLE_32_getdents
TRACE_SYSCALL_TABLE(getdents, getdents, 141, 3)
#endif
#ifndef OVERRIDE_TABLE_32_select
TRACE_SYSCALL_TABLE(select, select, 142, 5)
#endif
#ifndef OVERRIDE_TABLE_32_readv
TRACE_SYSCALL_TABLE(readv, readv, 145, 3)
#endif
#ifndef OVERRIDE_TABLE_32_writev
TRACE_SYSCALL_TABLE(writev, writev, 146, 3)
#endif
#ifndef OVERRIDE_TABLE_32_sysctl
TRACE_SYSCALL_TABLE(sysctl, sysctl, 149, 1)
#endif
#ifndef OVERRIDE_TABLE_32_sched_setparam
TRACE_SYSCALL_TABLE(sched_setparam, sched_setparam, 154, 2)
#endif
#ifndef OVERRIDE_TABLE_32_sched_getparam
TRACE_SYSCALL_TABLE(sched_getparam, sched_getparam, 155, 2)
#endif
#ifndef OVERRIDE_TABLE_32_sched_setscheduler
TRACE_SYSCALL_TABLE(sched_setscheduler, sched_setscheduler, 156, 3)
#endif
#ifndef OVERRIDE_TABLE_32_sched_rr_get_interval
TRACE_SYSCALL_TABLE(sched_rr_get_interval, sched_rr_get_interval, 161, 2)
#endif
#ifndef OVERRIDE_TABLE_32_nanosleep
TRACE_SYSCALL_TABLE(nanosleep, nanosleep, 162, 2)
#endif
#ifndef OVERRIDE_TABLE_32_getresuid
TRACE_SYSCALL_TABLE(getresuid, getresuid, 165, 3)
#endif
#ifndef OVERRIDE_TABLE_32_poll
TRACE_SYSCALL_TABLE(poll, poll, 167, 3)
#endif
#ifndef OVERRIDE_TABLE_32_nfsservctl
TRACE_SYSCALL_TABLE(nfsservctl, nfsservctl, 168, 3)
#endif
#ifndef OVERRIDE_TABLE_32_getresgid
TRACE_SYSCALL_TABLE(getresgid, getresgid, 170, 3)
#endif
#ifndef OVERRIDE_TABLE_32_rt_sigaction
TRACE_SYSCALL_TABLE(rt_sigaction, rt_sigaction, 173, 4)
#endif
#ifndef OVERRIDE_TABLE_32_rt_sigprocmask
TRACE_SYSCALL_TABLE(rt_sigprocmask, rt_sigprocmask, 174, 4)
#endif
#ifndef OVERRIDE_TABLE_32_rt_sigpending
TRACE_SYSCALL_TABLE(rt_sigpending, rt_sigpending, 175, 2)
#endif
#ifndef OVERRIDE_TABLE_32_rt_sigtimedwait
TRACE_SYSCALL_TABLE(rt_sigtimedwait, rt_sigtimedwait, 176, 4)
#endif
#ifndef OVERRIDE_TABLE_32_rt_sigqueueinfo
TRACE_SYSCALL_TABLE(rt_sigqueueinfo, rt_sigqueueinfo, 177, 3)
#endif
#ifndef OVERRIDE_TABLE_32_rt_sigsuspend
TRACE_SYSCALL_TABLE(rt_sigsuspend, rt_sigsuspend, 178, 2)
#endif
#ifndef OVERRIDE_TABLE_32_chown
TRACE_SYSCALL_TABLE(chown, chown, 181, 3)
#endif
#ifndef OVERRIDE_TABLE_32_getcwd
TRACE_SYSCALL_TABLE(getcwd, getcwd, 182, 2)
#endif
#ifndef OVERRIDE_TABLE_32_sendfile
TRACE_SYSCALL_TABLE(sendfile, sendfile, 186, 4)
#endif
#ifndef OVERRIDE_TABLE_32_getrlimit
TRACE_SYSCALL_TABLE(getrlimit, getrlimit, 190, 2)
#endif
#ifndef OVERRIDE_TABLE_32_stat64
TRACE_SYSCALL_TABLE(stat64, stat64, 195, 2)
#endif
#ifndef OVERRIDE_TABLE_32_lstat64
TRACE_SYSCALL_TABLE(lstat64, lstat64, 196, 2)
#endif
#ifndef OVERRIDE_TABLE_32_fstat64
TRACE_SYSCALL_TABLE(fstat64, fstat64, 197, 2)
#endif
#ifndef OVERRIDE_TABLE_32_pciconfig_read
TRACE_SYSCALL_TABLE(pciconfig_read, pciconfig_read, 198, 5)
#endif
#ifndef OVERRIDE_TABLE_32_pciconfig_write
TRACE_SYSCALL_TABLE(pciconfig_write, pciconfig_write, 199, 5)
#endif
#ifndef OVERRIDE_TABLE_32_getdents64
TRACE_SYSCALL_TABLE(getdents64, getdents64, 202, 3)
#endif
#ifndef OVERRIDE_TABLE_32_pivot_root
TRACE_SYSCALL_TABLE(pivot_root, pivot_root, 203, 2)
#endif
#ifndef OVERRIDE_TABLE_32_mincore
TRACE_SYSCALL_TABLE(mincore, mincore, 206, 3)
#endif
#ifndef OVERRIDE_TABLE_32_setxattr
TRACE_SYSCALL_TABLE(setxattr, setxattr, 209, 5)
#endif
#ifndef OVERRIDE_TABLE_32_lsetxattr
TRACE_SYSCALL_TABLE(lsetxattr, lsetxattr, 210, 5)
#endif
#ifndef OVERRIDE_TABLE_32_fsetxattr
TRACE_SYSCALL_TABLE(fsetxattr, fsetxattr, 211, 5)
#endif
#ifndef OVERRIDE_TABLE_32_getxattr
TRACE_SYSCALL_TABLE(getxattr, getxattr, 212, 4)
#endif
#ifndef OVERRIDE_TABLE_32_lgetxattr
TRACE_SYSCALL_TABLE(lgetxattr, lgetxattr, 213, 4)
#endif
#ifndef OVERRIDE_TABLE_32_fgetxattr
TRACE_SYSCALL_TABLE(fgetxattr, fgetxattr, 214, 4)
#endif
#ifndef OVERRIDE_TABLE_32_listxattr
TRACE_SYSCALL_TABLE(listxattr, listxattr, 215, 3)
#endif
#ifndef OVERRIDE_TABLE_32_llistxattr
TRACE_SYSCALL_TABLE(llistxattr, llistxattr, 216, 3)
#endif
#ifndef OVERRIDE_TABLE_32_flistxattr
TRACE_SYSCALL_TABLE(flistxattr, flistxattr, 217, 3)
#endif
#ifndef OVERRIDE_TABLE_32_removexattr
TRACE_SYSCALL_TABLE(removexattr, removexattr, 218, 2)
#endif
#ifndef OVERRIDE_TABLE_32_lremovexattr
TRACE_SYSCALL_TABLE(lremovexattr, lremovexattr, 219, 2)
#endif
#ifndef OVERRIDE_TABLE_32_fremovexattr
TRACE_SYSCALL_TABLE(fremovexattr, fremovexattr, 220, 2)
#endif
#ifndef OVERRIDE_TABLE_32_futex
TRACE_SYSCALL_TABLE(futex, futex, 221, 6)
#endif
#ifndef OVERRIDE_TABLE_32_sched_setaffinity
TRACE_SYSCALL_TABLE(sched_setaffinity, sched_setaffinity, 222, 3)
#endif
#ifndef OVERRIDE_TABLE_32_sched_getaffinity
TRACE_SYSCALL_TABLE(sched_getaffinity, sched_getaffinity, 223, 3)
#endif
#ifndef OVERRIDE_TABLE_32_sendfile64
TRACE_SYSCALL_TABLE(sendfile64, sendfile64, 226, 4)
#endif
#ifndef OVERRIDE_TABLE_32_io_setup
TRACE_SYSCALL_TABLE(io_setup, io_setup, 227, 2)
#endif
#ifndef OVERRIDE_TABLE_32_io_getevents
TRACE_SYSCALL_TABLE(io_getevents, io_getevents, 229, 5)
#endif
#ifndef OVERRIDE_TABLE_32_io_submit
TRACE_SYSCALL_TABLE(io_submit, io_submit, 230, 3)
#endif
#ifndef OVERRIDE_TABLE_32_io_cancel
TRACE_SYSCALL_TABLE(io_cancel, io_cancel, 231, 3)
#endif
#ifndef OVERRIDE_TABLE_32_set_tid_address
TRACE_SYSCALL_TABLE(set_tid_address, set_tid_address, 232, 1)
#endif
#ifndef OVERRIDE_TABLE_32_epoll_ctl
TRACE_SYSCALL_TABLE(epoll_ctl, epoll_ctl, 237, 4)
#endif
#ifndef OVERRIDE_TABLE_32_epoll_wait
TRACE_SYSCALL_TABLE(epoll_wait, epoll_wait, 238, 4)
#endif
#ifndef OVERRIDE_TABLE_32_timer_create
TRACE_SYSCALL_TABLE(timer_create, timer_create, 240, 3)
#endif
#ifndef OVERRIDE_TABLE_32_timer_settime
TRACE_SYSCALL_TABLE(timer_settime, timer_settime, 241, 4)
#endif
#ifndef OVERRIDE_TABLE_32_timer_gettime
TRACE_SYSCALL_TABLE(timer_gettime, timer_gettime, 242, 2)
#endif
#ifndef OVERRIDE_TABLE_32_clock_settime
TRACE_SYSCALL_TABLE(clock_settime, clock_settime, 245, 2)
#endif
#ifndef OVERRIDE_TABLE_32_clock_gettime
TRACE_SYSCALL_TABLE(clock_gettime, clock_gettime, 246, 2)
#endif
#ifndef OVERRIDE_TABLE_32_clock_getres
TRACE_SYSCALL_TABLE(clock_getres, clock_getres, 247, 2)
#endif
#ifndef OVERRIDE_TABLE_32_clock_nanosleep
TRACE_SYSCALL_TABLE(clock_nanosleep, clock_nanosleep, 248, 4)
#endif
#ifndef OVERRIDE_TABLE_32_utimes
TRACE_SYSCALL_TABLE(utimes, utimes, 251, 2)
#endif
#ifndef OVERRIDE_TABLE_32_statfs64
TRACE_SYSCALL_TABLE(statfs64, statfs64, 252, 3)
#endif
#ifndef OVERRIDE_TABLE_32_fstatfs64
TRACE_SYSCALL_TABLE(fstatfs64, fstatfs64, 253, 3)
#endif
#ifndef OVERRIDE_TABLE_32_mq_open
TRACE_SYSCALL_TABLE(mq_open, mq_open, 262, 4)
#endif
#ifndef OVERRIDE_TABLE_32_mq_unlink
TRACE_SYSCALL_TABLE(mq_unlink, mq_unlink, 263, 1)
#endif
#ifndef OVERRIDE_TABLE_32_mq_timedsend
TRACE_SYSCALL_TABLE(mq_timedsend, mq_timedsend, 264, 5)
#endif
#ifndef OVERRIDE_TABLE_32_mq_timedreceive
TRACE_SYSCALL_TABLE(mq_timedreceive, mq_timedreceive, 265, 5)
#endif
#ifndef OVERRIDE_TABLE_32_mq_notify
TRACE_SYSCALL_TABLE(mq_notify, mq_notify, 266, 2)
#endif
#ifndef OVERRIDE_TABLE_32_mq_getsetattr
TRACE_SYSCALL_TABLE(mq_getsetattr, mq_getsetattr, 267, 3)
#endif
#ifndef OVERRIDE_TABLE_32_add_key
TRACE_SYSCALL_TABLE(add_key, add_key, 269, 5)
#endif
#ifndef OVERRIDE_TABLE_32_request_key
TRACE_SYSCALL_TABLE(request_key, request_key, 270, 4)
#endif
#ifndef OVERRIDE_TABLE_32_waitid
TRACE_SYSCALL_TABLE(waitid, waitid, 272, 5)
#endif
#ifndef OVERRIDE_TABLE_32_inotify_add_watch
TRACE_SYSCALL_TABLE(inotify_add_watch, inotify_add_watch, 276, 3)
#endif
#ifndef OVERRIDE_TABLE_32_pselect6
TRACE_SYSCALL_TABLE(pselect6, pselect6, 280, 6)
#endif
#ifndef OVERRIDE_TABLE_32_ppoll
TRACE_SYSCALL_TABLE(ppoll, ppoll, 281, 5)
#endif
#ifndef OVERRIDE_TABLE_32_splice
TRACE_SYSCALL_TABLE(splice, splice, 283, 6)
#endif
#ifndef OVERRIDE_TABLE_32_vmsplice
TRACE_SYSCALL_TABLE(vmsplice, vmsplice, 285, 4)
#endif
#ifndef OVERRIDE_TABLE_32_openat
TRACE_SYSCALL_TABLE(openat, openat, 286, 4)
#endif
#ifndef OVERRIDE_TABLE_32_mkdirat
TRACE_SYSCALL_TABLE(mkdirat, mkdirat, 287, 3)
#endif
#ifndef OVERRIDE_TABLE_32_mknodat
TRACE_SYSCALL_TABLE(mknodat, mknodat, 288, 4)
#endif
#ifndef OVERRIDE_TABLE_32_fchownat
TRACE_SYSCALL_TABLE(fchownat, fchownat, 289, 5)
#endif
#ifndef OVERRIDE_TABLE_32_futimesat
TRACE_SYSCALL_TABLE(futimesat, futimesat, 290, 3)
#endif
#ifndef OVERRIDE_TABLE_32_fstatat64
TRACE_SYSCALL_TABLE(fstatat64, fstatat64, 291, 4)
#endif
#ifndef OVERRIDE_TABLE_32_unlinkat
TRACE_SYSCALL_TABLE(unlinkat, unlinkat, 292, 3)
#endif
#ifndef OVERRIDE_TABLE_32_renameat
TRACE_SYSCALL_TABLE(renameat, renameat, 293, 4)
#endif
#ifndef OVERRIDE_TABLE_32_linkat
TRACE_SYSCALL_TABLE(linkat, linkat, 294, 5)
#endif
#ifndef OVERRIDE_TABLE_32_symlinkat
TRACE_SYSCALL_TABLE(symlinkat, symlinkat, 295, 3)
#endif
#ifndef OVERRIDE_TABLE_32_readlinkat
TRACE_SYSCALL_TABLE(readlinkat, readlinkat, 296, 4)
#endif
#ifndef OVERRIDE_TABLE_32_fchmodat
TRACE_SYSCALL_TABLE(fchmodat, fchmodat, 297, 3)
#endif
#ifndef OVERRIDE_TABLE_32_faccessat
TRACE_SYSCALL_TABLE(faccessat, faccessat, 298, 3)
#endif
#ifndef OVERRIDE_TABLE_32_get_robust_list
TRACE_SYSCALL_TABLE(get_robust_list, get_robust_list, 299, 3)
#endif
#ifndef OVERRIDE_TABLE_32_set_robust_list
TRACE_SYSCALL_TABLE(set_robust_list, set_robust_list, 300, 2)
#endif
#ifndef OVERRIDE_TABLE_32_getcpu
TRACE_SYSCALL_TABLE(getcpu, getcpu, 302, 3)
#endif
#ifndef OVERRIDE_TABLE_32_epoll_pwait
TRACE_SYSCALL_TABLE(epoll_pwait, epoll_pwait, 303, 6)
#endif
#ifndef OVERRIDE_TABLE_32_utimensat
TRACE_SYSCALL_TABLE(utimensat, utimensat, 304, 4)
#endif
#ifndef OVERRIDE_TABLE_32_signalfd
TRACE_SYSCALL_TABLE(signalfd, signalfd, 305, 3)
#endif
#ifndef OVERRIDE_TABLE_32_timerfd_settime
TRACE_SYSCALL_TABLE(timerfd_settime, timerfd_settime, 311, 4)
#endif
#ifndef OVERRIDE_TABLE_32_timerfd_gettime
TRACE_SYSCALL_TABLE(timerfd_gettime, timerfd_gettime, 312, 2)
#endif
#ifndef OVERRIDE_TABLE_32_signalfd4
TRACE_SYSCALL_TABLE(signalfd4, signalfd4, 313, 4)
#endif
#ifndef OVERRIDE_TABLE_32_pipe2
TRACE_SYSCALL_TABLE(pipe2, pipe2, 317, 2)
#endif
#ifndef OVERRIDE_TABLE_32_perf_event_open
TRACE_SYSCALL_TABLE(perf_event_open, perf_event_open, 319, 5)
#endif
#ifndef OVERRIDE_TABLE_32_preadv
TRACE_SYSCALL_TABLE(preadv, preadv, 320, 5)
#endif
#ifndef OVERRIDE_TABLE_32_pwritev
TRACE_SYSCALL_TABLE(pwritev, pwritev, 321, 5)
#endif
#ifndef OVERRIDE_TABLE_32_rt_tgsigqueueinfo
TRACE_SYSCALL_TABLE(rt_tgsigqueueinfo, rt_tgsigqueueinfo, 322, 4)
#endif
#ifndef OVERRIDE_TABLE_32_prlimit64
TRACE_SYSCALL_TABLE(prlimit64, prlimit64, 325, 4)
#endif
#ifndef OVERRIDE_TABLE_32_bind
TRACE_SYSCALL_TABLE(bind, bind, 327, 3)
#endif
#ifndef OVERRIDE_TABLE_32_connect
TRACE_SYSCALL_TABLE(connect, connect, 328, 3)
#endif
#ifndef OVERRIDE_TABLE_32_accept
TRACE_SYSCALL_TABLE(accept, accept, 330, 3)
#endif
#ifndef OVERRIDE_TABLE_32_getsockname
TRACE_SYSCALL_TABLE(getsockname, getsockname, 331, 3)
#endif
#ifndef OVERRIDE_TABLE_32_getpeername
TRACE_SYSCALL_TABLE(getpeername, getpeername, 332, 3)
#endif
#ifndef OVERRIDE_TABLE_32_socketpair
TRACE_SYSCALL_TABLE(socketpair, socketpair, 333, 4)
#endif
#ifndef OVERRIDE_TABLE_32_send
TRACE_SYSCALL_TABLE(send, send, 334, 4)
#endif
#ifndef OVERRIDE_TABLE_32_sendto
TRACE_SYSCALL_TABLE(sendto, sendto, 335, 6)
#endif
#ifndef OVERRIDE_TABLE_32_recvfrom
TRACE_SYSCALL_TABLE(recvfrom, recvfrom, 337, 6)
#endif
#ifndef OVERRIDE_TABLE_32_setsockopt
TRACE_SYSCALL_TABLE(setsockopt, setsockopt, 339, 5)
#endif
#ifndef OVERRIDE_TABLE_32_getsockopt
TRACE_SYSCALL_TABLE(getsockopt, getsockopt, 340, 5)
#endif
#ifndef OVERRIDE_TABLE_32_sendmsg
TRACE_SYSCALL_TABLE(sendmsg, sendmsg, 341, 3)
#endif
#ifndef OVERRIDE_TABLE_32_recvmsg
TRACE_SYSCALL_TABLE(recvmsg, recvmsg, 342, 3)
#endif
#ifndef OVERRIDE_TABLE_32_recvmmsg
TRACE_SYSCALL_TABLE(recvmmsg, recvmmsg, 343, 5)
#endif
#ifndef OVERRIDE_TABLE_32_accept4
TRACE_SYSCALL_TABLE(accept4, accept4, 344, 4)
#endif
#ifndef OVERRIDE_TABLE_32_clock_adjtime
TRACE_SYSCALL_TABLE(clock_adjtime, clock_adjtime, 347, 2)
#endif
#ifndef OVERRIDE_TABLE_32_sendmmsg
TRACE_SYSCALL_TABLE(sendmmsg, sendmmsg, 349, 4)
#endif

#endif /* CREATE_SYSCALL_TABLE */

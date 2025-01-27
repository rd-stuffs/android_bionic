/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#if defined(__LP64__) && !defined(__SYSCALL_COMPAT)
#define __ARCH_WANT_NEW_STAT
#define __ARCH_WANT_SET_GET_RLIMIT
#endif
#define __ARCH_WANT_SYS_CLONE3
#define __ARCH_WANT_MEMFD_SECRET
#include <asm-generic/unistd.h>
#ifndef __NR_riscv_flush_icache
#define __NR_riscv_flush_icache (__NR_arch_specific_syscall + 15)
#endif
__SYSCALL(__NR_riscv_flush_icache, sys_riscv_flush_icache)
#ifndef __NR_riscv_hwprobe
#define __NR_riscv_hwprobe (__NR_arch_specific_syscall + 14)
#endif
__SYSCALL(__NR_riscv_hwprobe, sys_riscv_hwprobe)

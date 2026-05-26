Memory Scan-x is a lightweight, low-level security utility written in C. It is designed to identify potential security risks within a Linux system by scanning process memory maps for suspicious permissions.

*The Problem:-
Malware and shellcode often require memory segments that are simultaneously Readable, Writable, and Executable (RWX). While legitimate processes rarely need this combination, it is a classic indicator of malicious activity or memory corruption.

* How it Works:-
Memory Scan-x iterates through the /proc filesystem on Linux, parses the maps file for every active process, and flags regions that hold the rwx permission bit.

*Why C?
Writing this tool in C provides a direct interface with system-level structures, ensuring minimal overhead and a deep understanding of how the Linux Kernel manages process mem

*Usage:-
1. Compile the tool:
   `bash
   gcc memory_scan.c -o memory_scan

   2. Run with root privileges to ensure access to all process maps:
      bash
      sudo ./memory_scan

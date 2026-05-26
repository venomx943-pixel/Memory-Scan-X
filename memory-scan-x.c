#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

void scan_process_memory(int pid){
    char path[256];
    char line[512];
    snprintf(path,sizeof(path), "/proc/%d/maps", pid);

    FILE *fp = fopen(path, "r");
    if (!ip) return;

    while (fgets(line, sizeof(line), fp)){
        if (strstr(line, "rwx")) {
            printf("[!] ALERT: found RWX memory region in PID %d:\n   %s", pid, line);

            fclose(ip);

            int main(){ 
                struct dirent *entry;
                DIR *dp = opendir("/proc");

                if (dp == NULL) {
                    perror("Failed to open /proc");
                    return 1;

                    printf("[*] Starting MemScaon-x: scanning for suspicious memory region...\n");

                    while ((entry = readdir(dp)) != NULL) {

                        if(entry->d_name[0] >= '0' && entry ->d_name[0] <=  '9') {
                            scan_process_memory(atoi(entry->d_name));

                            closedir(dp);
                            printf("[x] Scan Complete. \n");
                            return 0;
                        }
                    }

                }
        }
    }
}

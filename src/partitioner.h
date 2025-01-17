#include <esp_partition.h>
#include <esp_ota_ops.h>
#include <esp_flash.h>
#include <EEPROM.h>
#include <FS.h>


void partitioner();

void partList();

void dumpPartition(const char* partitionLabel, const char* outputPath);

void restorePartition(const char* partitionLabel);

void partitionCrawler();
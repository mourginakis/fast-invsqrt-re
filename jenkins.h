#ifndef JENKINS_H  // Include guard
#define JENKINS_H

#include <stdint.h>  // For uint32_t and uint8_t
#include <stddef.h> // For size_t

uint32_t jenkins_one_at_a_time_hash(const uint8_t* key, size_t length);

#endif

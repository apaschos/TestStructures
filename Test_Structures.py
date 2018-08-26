#!/usr/bin/env python2

from subprocess import call

DATA_STRUCTURES = [
    'HS',  # HashSet
    'TS',  # TreeSet
    'V',   # Vector
    'LL'   # LinkedList
]

# ./TestStructures <structure> <size> <runs>
# i.e. ./TestStructures HS 5 10
execName = './TestStructures'
for dt in DATA_STRUCTURES:
    for i in range(10):
        cmd = execName + ' ' + dt + ' ' + str(i*1000) + ' ' + str(20000)
        call(cmd, shell=True)

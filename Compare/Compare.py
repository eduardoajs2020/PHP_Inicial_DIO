#!/usr/env python

"""
------------------------------

compares 2 data files for discrepencies, where input file format is
"identifier  data" delimited by white space, so the following format
example works:
"first" "last"
------------------------------
12345   bob@bsmith.com
23456   ralph@wonderllama.net
------------------------------

        usage: compare1.py <filename1> <filename2> <outputfile>

------------------------------

"""

import sys, string

try:
        file0 = open(sys.argv[1], 'r').readlines()
        file1 = open(sys.argv[2], 'r').readlines()
        output_file = open(sys.argv[3], 'w')

except IndexError:
        print __doc__
        sys.exit()

def mkdict(data_file):
        dict = {}
        for bob in data_file:
                try:
                        items = string.split(bob)
                        dict[items[0]] = items[1]
                except IndexError: pass
        return dict

dict0 = mkdict(file0)
dict1 = mkdict(file1)

for bob in dict0.keys():
        if dict1.has_key(bob):
                if dict0[bob] != dict1[bob]:
                        out0 = bob, " doesn't match:\tfile0 = %s,\n\t\t\tfile1 = %s." % 
(dict0[bob] , dict1[bob]),"\n"
                        #out0 = bob, " doesn't match:\tfile0 =", dict0[bob], "\n\t\t\tfile1 =", 
dict1[bob], "\n"
                        output_file.writelines(out0)
                else: pass
        else:
                out1 = "file0 missing ", bob, " ", dict0[bob], "\n"
                output_file.writelines(out1)

for bob in dict1.keys():
        if dict0.has_key(bob): pass
        else:
                out = "file1 missing ", bob, " ", dict1[bob], "\n"
                output_file.writelines(out)




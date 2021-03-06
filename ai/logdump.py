#!/usr/bin/env python

# Copyright 2016-2018 The RamFuzz contributors. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
"""Dumps the contents of a RamFuzz run log. Usage: logdump.py <filename>.

See ../runtime/ramfuzz-rt.hpp for a description of the log contents.

"""

import rfutils
import sys

if len(sys.argv) < 2:
    print 'usage: %s <filename>' % sys.argv[0]
    exit(1)

with open(sys.argv[1]) as f:
    for entry in rfutils.logparse(f):
        print entry

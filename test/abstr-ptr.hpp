// Copyright 2016-2018 The RamFuzz contributors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/// Tests pure methods with pointer return type.

class A {
public:
  virtual int *f1(unsigned) = 0;
  virtual A *f2() = 0;
  virtual void *f3() = 0;
  const int sum = 11;
};

class B {
  int sum = 22;

public:
  void g(A &a) { sum = a.sum; }
  int get() const { return sum; }
};

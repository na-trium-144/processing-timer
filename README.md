# processing-timer

c/c++で処理時間を計測します

`clock_gettime`を使用

## C++11

例
```c++
#include "ptimer.hpp"
#include <iostream>
int main() {
  auto t = ptimer::ptimer([] {
    for (int i = 0; i < 10000; i++)
      ;
  });
  std::cout << t << " ns" << std::endl;
}
```
実行時間(ナノ秒単位)がptimer::ptimerの戻り値になります

## C

例
```c
#include "ptimer.h"
#include <stdio.h>
int main() {
  long t;
  ptimer(t, ({
    for (int i = 0; i < 10000; i++)
      ;
  }));
  printf("%ld ns\n", t);
}
```
defineマクロです
動けばヨシ!

実行時間(ナノ秒単位)が変数tに入ります


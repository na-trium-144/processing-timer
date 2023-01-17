# processing-timer

c/c++で処理時間を計測します

`clock_gettime`を使用

## C++11

```c++
#include "ptimer.hpp"
long ptimer::ptimer(std::function<void()> func);
```
funcの実行時間をナノ秒で返します

例→example.cpp

## C

```c
#include "ptimer.h"
ptimer(t, ({
  // 処理
}));
```
defineマクロです
動けばヨシ!

実行時間が変数tにナノ秒単位で入ります

例→example.c

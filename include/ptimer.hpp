#include <ctime>
#include <functional>
namespace ptimer {
long ptimer(std::function<void()> func) {
  timespec start_t, end_t;
  clock_gettime(CLOCK_MONOTONIC, &start_t);
  func();
  clock_gettime(CLOCK_MONOTONIC, &end_t);
  return (end_t.tv_sec - start_t.tv_sec) * 1e9L + (end_t.tv_nsec - start_t.tv_nsec);
}
} // namespace ptimer

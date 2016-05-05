//TODO TEMPLATE, top: mutex (poza funkcja, dla pop, zeby dana nie byla zdjeta przed podejrzeniem)

#pragma once
#include <queue>

#include <mutex>
#include <condition_variable>
std::mutex m;
std::condition_variable cv;
using Lock = std::unique_lock<std::mutex>;

struct Queue
{
public:
  struct Entry
  {
    unsigned n_;
    bool     isPrime_;
  };

private:
  using Container = std::queue<Entry>;
  bool empty() const
  {
    return q_.empty();
  }

public:
  using size_type  = Container::size_type;
  using value_type = Container::value_type;

  void push(const value_type v)
  {
    Lock lk(m);
    q_.push(v);
    cv.notify_all();
  }

  value_type pop()
  {
    Lock lk(m);
    cv.wait(lk, [&]{return not empty();});
    const auto tmp = q_.front();
    q_.pop();
    return tmp;
  }

  value_type top()
  {
    Lock lk(m);
    cv.wait(lk, [&]{return not empty();});
    const auto tmp = q_.front();
    return tmp;
  }
  // size_type size() const
  // {
  //   return q_.size();
  // }

private:
  Container q_;
};

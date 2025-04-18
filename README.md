# 🕒 Low Latency C++ Timers

This repository is designed to teach C++ timing techniques used in high-frequency and low-latency systems. The following examples cover topics such as time measurement techniques, rdtsc, std::chrono, and CPU affinity.

## 📂 Contents

- `high_resolution_timer.cpp`: Basic time measurement using `std::chrono::high_resolution_clock` 
- `rdtsc_timer.cpp`: Cycle-based time measurement using CPU timestamp counter (`rdtsc`) 
- `benchmark_function_call.cpp`: Benchmarking function call duration
- `cpu_affinity.cpp`: Setting CPU affinity for more deterministic measurements

## 🛠 Compilation
```bash
g++ -std=c++20 -O2 high_resolution_timer.cpp -o timer
```

## 📜 Lisans
MIT

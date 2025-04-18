# 🕒 Low Latency C++ Timers

Bu repository, yüksek frekanslı ve düşük gecikmeli sistemlerde kullanılan C++ zamanlayıcı tekniklerini öğretmek amacıyla hazırlanmıştır. Aşağıdaki örneklerde, zaman ölçüm teknikleri, `rdtsc`, `std::chrono`, ve CPU affinity gibi başlıklar yer almaktadır.

## 📂 İçerikler

- `high_resolution_timer.cpp`: `std::chrono::high_resolution_clock` ile basit zaman ölçümü
- `rdtsc_timer.cpp`: CPU timestamp counter (`rdtsc`) kullanarak cycle tabanlı zaman ölçümü
- `benchmark_function_call.cpp`: Fonksiyon çağırma süresi benchmark'ı
- `cpu_affinity.cpp`: CPU affinity ayarlayarak daha deterministik ölçüm yapılması

## 🛠 Derleme
```bash
g++ -std=c++20 -O2 high_resolution_timer.cpp -o timer
```

## 📜 Lisans
MIT

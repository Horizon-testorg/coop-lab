#include <cstdio>

// 共享逻辑：所有车都用，数值以后从 yaml 读
int defaultSpeed() { return 120; }

// 车型结构差异：用宏
void initExtra() {
#ifdef VEHICLE_SENTRY
    std::printf("[sentry] 无摩擦轮，跳过发射器初始化\n");
#elif defined(VEHICLE_INFANTRY)
    std::printf("[infantry] 初始化摩擦轮\n");
#else
    std::printf("[generic] 通用初始化\n");
#endif
}

int main() {
    std::printf("vehicle=%s speed=%d\n", VEHICLE_NAME, defaultSpeed());
    initExtra();
    return 0;
}

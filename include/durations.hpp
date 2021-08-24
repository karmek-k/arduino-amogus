#ifndef DURATIONS_HPP
#define DURATIONS_HPP

enum Duration {
    D_FULL = 1,
    D_HALF = 2,
    D_QUARTER = 4,
    D_EIGHT = 8,
    D_SIXTEENTH = 16
};

constexpr double dot(Duration d) {
    return static_cast<double>(d) * 0.75;
}

constexpr double triplet(Duration d) {
    return static_cast<double>(d) * 1.3;
}

#endif

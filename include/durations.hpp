#ifndef DURATIONS_HPP
#define DURATIONS_HPP

enum duration {
    D_FULL = 1,
    D_HALF = 2,
    D_QUARTER = 4,
    D_EIGHT = 8,
    D_SIXTEENTH = 16
};

constexpr double dot(duration d) {
    return static_cast<double>(d) * 0.75;
}

#endif

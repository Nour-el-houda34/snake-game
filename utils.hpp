#ifndef UTILS_HPP
#define UTILS_HPP

template <typename T>
constexpr const T& clamp(const T& value, const T& min, const T& max) {
    return (value < min) ? min : ((max < value) ? max : value);
}

#endif // UTILS_HPP


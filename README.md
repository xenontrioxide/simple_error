# Requirements
C++23 or greater.

# Usage
The goal was to make an error class that was easy to use with `std::expected`.

### Example
```
enum class error_code : uint32_t
{
    unknown,
    divide_by_zero,
};

std::expected<int, simple_error::error<error_code>> divide(const int A, const int B)
{
    if(B == 0)
      return std::unexpected(simple_error::error<error_code>{ "Divisor was Zero!", error_code::divide_by_zero, true });
    return A / B;
}
```
